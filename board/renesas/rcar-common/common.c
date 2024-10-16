// SPDX-License-Identifier: GPL-2.0
/*
 * board/renesas/rcar-common/common.c
 *
 * Copyright (C) 2013 Renesas Electronics Corporation
 * Copyright (C) 2013 Nobuhiro Iwamatsu <nobuhiro.iwamatsu.yj@renesas.com>
 * Copyright (C) 2015 Nobuhiro Iwamatsu <iwamatsu@nigauri.org>
 */

#include <common.h>
#include <dm.h>
#include <init.h>
#include <asm/global_data.h>
#include <dm/uclass-internal.h>
#include <asm/arch/rmobile.h>
#include <linux/libfdt.h>

#ifdef CONFIG_RCAR_GEN3

#if defined(CONFIG_TARGET_HIHOPE_RZG2)
#include <asm/system.h>
#include <asm/ptrace.h>

#include "../rzg-common/common.h"
#endif

DECLARE_GLOBAL_DATA_PTR;

/* If the firmware passed a device tree use it for U-Boot DRAM setup. */
extern u64 rcar_atf_boot_args[];

#if !(defined(CONFIG_R9A07G044L) || defined(CONFIG_R9A07G044C) || defined(CONFIG_R9A07G054L) || \
		defined(CONFIG_R9A07G043U) || defined(CONFIG_R9A08G045S))
int fdtdec_board_setup(const void *fdt_blob)
{
	void *atf_fdt_blob = (void *)(rcar_atf_boot_args[1]);
	if (fdt_magic(atf_fdt_blob) == FDT_MAGIC)
		fdt_overlay_apply_node((void *)fdt_blob, 0, atf_fdt_blob, 0);
	return 0;
}
#endif

int dram_init(void)
{
	return fdtdec_setup_mem_size_base();
}

int dram_init_banksize(void)
{
#if defined (CONFIG_TARGET_HIHOPE_RZG2)
	int use_ecc = 0;
	struct pt_regs regs;
#endif

	fdtdec_setup_memory_banksize();

#if defined (CONFIG_TARGET_HIHOPE_RZG2)
	if (rmobile_get_cpu_type() == RMOBILE_CPU_TYPE_R8A7795) {
		/* Setting SiP Service GET_ECC_MODE command*/
		regs.regs[0] = RZG_SIP_SVC_GET_ECC_MODE;
		smc_call(&regs);
		/* First result is USE ECC or not*/
		use_ecc = regs.regs[0];

		if (use_ecc == 1) {
			int bank;

			for (bank = 0; bank < CONFIG_NR_DRAM_BANKS; bank++) {
				if ((gd->bd->bi_dram[bank].start & (0x500000000U)) == (0x500000000U)) {
					gd->bd->bi_dram[bank].start =
						(gd->bd->bi_dram[bank].start & 0x0FFFFFFFFU)
						| 0x600000000U;
				}
			}
		}
	}
#endif

	return 0;
}

#if defined(CONFIG_OF_BOARD_SETUP)
static int is_mem_overlap(void *blob, int first_mem_node, int curr_mem_node)
{
	struct fdt_resource first_mem_res, curr_mem_res;
	int curr_mem_reg, first_mem_reg = 0;
	int ret;

	for (;;) {
		ret = fdt_get_resource(blob, first_mem_node, "reg",
				       first_mem_reg++, &first_mem_res);
		if (ret) /* No more entries, no overlap found */
			return 0;

		curr_mem_reg = 0;
		for (;;) {
			ret = fdt_get_resource(blob, curr_mem_node, "reg",
					       curr_mem_reg++, &curr_mem_res);
			if (ret) /* No more entries, check next tuple */
				break;

			if (curr_mem_res.end < first_mem_res.start)
				continue;

			if (curr_mem_res.start >= first_mem_res.end)
				continue;

			printf("Overlap found: 0x%llx..0x%llx / 0x%llx..0x%llx\n",
				first_mem_res.start, first_mem_res.end,
				curr_mem_res.start, curr_mem_res.end);

			return 1;
		}
	}

	return 0;
}

int ft_board_setup(void *blob, struct bd_info *bd)
{
	/*
	 * Scrub duplicate /memory@* node entries here. Some R-Car DTs might
	 * contain multiple /memory@* nodes, however fdt_fixup_memory_banks()
	 * either generates single /memory node or updates the first /memory
	 * node. Any remaining memory nodes are thus potential duplicates.
	 *
	 * However, it is not possible to delete all the memory nodes right
	 * away, since some of those might not be DRAM memory nodes, but some
	 * sort of other memory. Thus, delete only the memory nodes which are
	 * in the R-Car3 DBSC ranges.
	 */
	int mem = 0, first_mem_node = 0;

	for (;;) {
		mem = fdt_node_offset_by_prop_value(blob, mem,
						    "device_type", "memory", 7);
		if (mem < 0)
			break;
		if (!fdtdec_get_is_enabled(blob, mem))
			continue;

		/* First memory node, patched by U-Boot */
		if (!first_mem_node) {
			first_mem_node = mem;
			continue;
		}

		/* Check the remaining nodes and delete duplicates */
		if (!is_mem_overlap(blob, first_mem_node, mem))
			continue;

		/* Delete duplicate node, start again */
		fdt_del_node(blob, mem);
		first_mem_node = 0;
		mem = 0;
	}

	return 0;
}
#endif
#endif
