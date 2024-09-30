#include <common.h>
#include <cpu_func.h>
#include <image.h>
#include <init.h>
#include <malloc.h>
#include <netdev.h>
#include <dm.h>
#include <dm/platform_data/serial_sh.h>
#include <asm/processor.h>
#include <asm/mach-types.h>
#include <asm/io.h>
#include <linux/bitops.h>
#include <linux/errno.h>
#include <asm/arch/sys_proto.h>
#include <asm/gpio.h>
#include <asm/arch/gpio.h>
#include <asm/arch/rmobile.h>
#include <asm/arch/rcar-mstp.h>
#include <asm/arch/sh_sdhi.h>
#include <i2c.h>
#include <mmc.h>
#include <rzg2l_wdt.h>
#include <wdt.h>

DECLARE_GLOBAL_DATA_PTR;

#define PFC_BASE	0x11030000

#define ETH_CH0		(PFC_BASE + 0x300c)
#define ETH_CH1		(PFC_BASE + 0x3010)
#define I2C_CH1 	(PFC_BASE + 0x1870)
#define ETH_PVDD_3300	0x00
#define ETH_PVDD_1800	0x01
#define ETH_PVDD_2500	0x02
#define ETH_MII_RGMII	(PFC_BASE + 0x3018)

/* CPG */
#define CPG_BASE					0x11010000
#define CPG_CLKON_BASE				(CPG_BASE + 0x500)
#define CPG_RESET_BASE				(CPG_BASE + 0x800)
#define CPG_RESET_ETH				(CPG_RESET_BASE + 0x7C)
#define CPG_RESET_I2C                           (CPG_RESET_BASE + 0x80)
#define CPG_RST_USB				(CPG_BASE + 0x878)
#define CPG_CLKON_USB				(CPG_BASE + 0x578)

/* PFC */
#define PFC_P37						(PFC_BASE + 0x037)
#define PFC_PM37					(PFC_BASE + 0x16E)
#define PFC_PMC37					(PFC_BASE + 0x237)
#define PFC_PWPR					(PFC_BASE + 0x3014)
#define PFC_PMC14					(PFC_BASE + 0x214)
#define PFC_PFC14					(PFC_BASE + 0x450)
#define PFC_PMC15					(PFC_BASE + 0x215)
#define PFC_PFC15					(PFC_BASE + 0x454)
#define PFC_PMC3A					(PFC_BASE + 0x23a)
#define PFC_PFC3A					(PFC_BASE + 0x4e8)

#define USBPHY_BASE		(0x11c40000)
#define USB0_BASE		(0x11c50000)
#define USB1_BASE		(0x11c70000)
#define USBF_BASE		(0x11c60000)
#define USBPHY_RESET		(USBPHY_BASE + 0x000u)
#define COMMCTRL		0x800
#define HcRhDescriptorA		0x048
#define LPSTS			0x102

#define RPC_CMNCR		0x10060000

/* WDT */
#define WDT_INDEX		0

void s_init(void)
{
	/* SD1 power control: P39_1 = 0; P39_2 = 1; */
	*(volatile u32 *)(PFC_PMC37) &= 0xFFFFFFF9; /* Port func mode 0b00 */
	*(volatile u32 *)(PFC_PM37) = (*(volatile u32 *)(PFC_PM37) & 0xFFFFFFC3) | 0x28; /* Port output mode 0b1010 */
#if CONFIG_TARGET_SMARC_RZG2L
	*(volatile u32 *)(PFC_P37) = (*(volatile u32 *)(PFC_P37) & 0xFFFFFFF9) | 0x6;	/* Port 39[2:1] output value 0b11*/
#else

	*(volatile u32 *)(PFC_P37) = (*(volatile u32 *)(PFC_P37) & 0xFFFFFFF9) | 0x4;	/* Port 39[2:1] output value 0b10*/
#endif

	/* can go in board_eht_init() once enabled */
	*(volatile u32 *)(ETH_CH0) = (*(volatile u32 *)(ETH_CH0) & 0xFFFFFFFC) | ETH_PVDD_1800;
	*(volatile u32 *)(ETH_CH1) = (*(volatile u32 *)(ETH_CH1) & 0xFFFFFFFC) | ETH_PVDD_1800;
	/* Enable RGMII for both ETH{0,1} */
	*(volatile u32 *)(ETH_MII_RGMII) = (*(volatile u32 *)(ETH_MII_RGMII) & 0xFFFFFFFC);
	/* ETH CLK */
	*(volatile u32 *)(CPG_RESET_ETH) = 0x30003;
	/* I2C CLK */
	*(volatile u32 *)(CPG_RESET_I2C) = 0xF000F;
	/* I2C pin non GPIO enable */
	*(volatile u32 *)(I2C_CH1) = 0x01010101;

	*(volatile u32 *)(RPC_CMNCR) = 0x01FFF300;
}

static void board_usb_init(void)
{
	/*Enable USB*/
	(*(volatile u32 *)CPG_RST_USB) = 0x000f000f;
	(*(volatile u32 *)CPG_CLKON_USB) = 0x000f000f;

	/* Setup  */
	/* Disable GPIO Write Protect */
	(*(volatile u32 *)PFC_PWPR) &= ~(0x1u << 7);	/* PWPR.BOWI = 0 */
	(*(volatile u32 *)PFC_PWPR) |= (0x1u << 6);	/* PWPR.PFCWE = 1 */

	/* set P4_0 as Func.1 for VBUSEN */
	(*(volatile u8 *)PFC_PMC14) |= (0x1u << 0);	/* PMC14.b0 = 1 */
	(*(volatile u8 *)PFC_PFC14) &= ~(0x7u << 0);	/* PFC14.PFC0 = 0 */
	(*(volatile u8 *)PFC_PFC14) |= (0x1u << 0);

	/* set P5_0 as Func.1 for OVERCUR */
	(*(volatile u8 *)PFC_PMC15) |= (0x1u << 0);	/* PMC15.b0 = 1 */
	(*(volatile u8 *)PFC_PFC15) &= ~(0x7u << 0);	/* PFC15.PFC0 = 0 */
	(*(volatile u8 *)PFC_PFC15) |= (0x1u << 0);

	/* set P42_0 as Func.1 for VBUSEN */
	(*(volatile u8 *)PFC_PMC3A) |= (0x1u << 0);	/* PMC14.b0 = 1 */
	(*(volatile u8 *)PFC_PFC3A) &= ~(0xfu << 0);	/* PFC15.PFC0 = 0 */
	(*(volatile u8 *)PFC_PFC3A) |= (0x1u << 0);

	/* set P42_1 as Func.1 for OVERCUR */
	(*(volatile u8 *)PFC_PMC3A) |= (0x1u << 0);	/* PMC14.b1 = 1 */
	(*(volatile u8 *)PFC_PFC3A) &= ~(0xfu << 4);	/* PFC15.PFC1 = 0 */
	(*(volatile u8 *)PFC_PFC3A) |= (0x1u << 4);

	/* Enable write protect */
	(*(volatile u32 *)PFC_PWPR) &= ~(0x1u << 6);	/* PWPR.PFCWE = 0 */
	(*(volatile u32 *)PFC_PWPR) |= (0x1u << 7);	/* PWPR.BOWI = 1 */

	/*Enable 2 USB ports*/
	(*(volatile u32 *)USBPHY_RESET) = 0x00001000u;
	/*USB0 is HOST*/
	(*(volatile u32 *)(USB0_BASE + COMMCTRL)) = 0;
	/*USB1 is HOST*/
	(*(volatile u32 *)(USB1_BASE + COMMCTRL)) = 0;
	/* Set USBPHY normal operation (Function only) */
	(*(volatile u16 *)(USBF_BASE + LPSTS)) |= (0x1u << 14);		/* USBPHY.SUSPM = 1 (func only) */
	/* Overcurrent is not supported */
	(*(volatile u32 *)(USB0_BASE + HcRhDescriptorA)) |= (0x1u << 12);	/* NOCP = 1 */
	(*(volatile u32 *)(USB1_BASE + HcRhDescriptorA)) |= (0x1u << 12);	/* NOCP = 1 */
}

int board_early_init_f(void)
{

	return 0;
}

int board_init(void)
{
	/* adress of boot parameters */
	gd->bd->bi_boot_params = CONFIG_SYS_TEXT_BASE + 0x50000;
	
    mdelay(140);

    // phy1 reset
    *(volatile u32 *)(PFC_PMC3C) &= 0xFFFFFFF7; /* Port func mode  */
    *(volatile u32 *)(PFC_PM3C) = (*(volatile u32 *)(PFC_PM3C) & 0xFFFFFF3F) | 0x80; /* Port output mode 0b10 */

    //mdelay(13);
    *(volatile u32 *)(PFC_P3C) = (*(volatile u32 *)(PFC_P3C) & 0xFFFFFFF7) | 0x08; //high
    mdelay(20);
    /*value*/
    *(volatile u32 *)(PFC_P3C) = (*(volatile u32 *)(PFC_P3C) & 0xFFFFFFF7) | 0x0; // low
    mdelay(13);
    *(volatile u32 *)(PFC_P3C) = (*(volatile u32 *)(PFC_P3C) & 0xFFFFFFF7) | 0x08; //high


    // phy2 reset
    *(volatile u32 *)(PFC_PMC3B) &= 0xFFFFFFFB; /* Port func mode  */
    *(volatile u32 *)(PFC_PM3B) = (*(volatile u32 *)(PFC_PM3B) & 0xFFFFFF3F) | 0x80; /* Port output mode 0b10 */

    *(volatile u32 *)(PFC_P3B) = (*(volatile u32 *)(PFC_P3B) & 0xFFFFFFF7) | 0x08;
    mdelay(20);
    *(volatile u32 *)(PFC_P3B) = (*(volatile u32 *)(PFC_P3B) & 0xFFFFFFF7) | 0x0;
    mdelay(13);
    *(volatile u32 *)(PFC_P3B) = (*(volatile u32 *)(PFC_P3B) & 0xFFFFFFF7) | 0x08;

	board_usb_init();

	return 0;
}

void reset_cpu(void)
{
#ifdef CONFIG_RENESAS_RZG2LWDT
	struct udevice *wdt_dev;
	if (uclass_get_device(UCLASS_WDT, WDT_INDEX, &wdt_dev) < 0) {
		printf("failed to get wdt device. cannot reset\n");
		return;
	}
	if (wdt_expire_now(wdt_dev, 0) < 0) {
		printf("failed to expire_now wdt\n");
	}
#endif // CONFIG_RENESAS_RZG2LWDT
}

int board_late_init(void)
{
#ifdef CONFIG_RENESAS_RZG2LWDT
	rzg2l_reinitr_wdt();
#endif // CONFIG_RENESAS_RZG2LWDT

	return 0;
}

int sdhi1_gpio(int num)
{
    if(num==0){
        //P10
       *(volatile u32 *)(PFC_PMC1AC) &= 0xFFFFFFFC; /* Port func mode  */
       *(volatile u32 *)(PFC_PM1A) = (*(volatile u32 *)(PFC_PM1A) & 0xFFFFFFF0) | 0x0A; /* Port output mode 0b1010 */
       *(volatile u32 *)(PFC_P1A) = (*(volatile u32 *)(PFC_P1A) & 0xFFFFFFFC) | 0x00;   //low
       mdelay(5);
       //P11
       *(volatile u32 *)(PFC_PMC1BC) &= 0xFFFFFFFC; /* Port func mode  */
       *(volatile u32 *)(PFC_PM1B) = (*(volatile u32 *)(PFC_PM1B) & 0xFFFFFFF0) | 0x0A; /* Port output mode 0b1010 */
       *(volatile u32 *)(PFC_P1B) = (*(volatile u32 *)(PFC_P1B) & 0xFFFFFFFC) | 0x00;   //low
    }else if(num==1){
       *(volatile u32 *)(PFC_PMC1AC) &= 0xFFFFFFFC; /* Port func mode  */
       *(volatile u32 *)(PFC_PM1A) = (*(volatile u32 *)(PFC_PM1A) & 0xFFFFFFF0) | 0x0A; /* Port output mode 0b1010 */
       *(volatile u32 *)(PFC_P1A) = (*(volatile u32 *)(PFC_P1A) & 0xFFFFFFFC) | 0x01;
       mdelay(5);
       //P11
       *(volatile u32 *)(PFC_PMC1BC) &= 0xFFFFFFFC; /* Port func mode  */
       *(volatile u32 *)(PFC_PM1B) = (*(volatile u32 *)(PFC_PM1B) & 0xFFFFFFF0) | 0x0A; /* Port output mode 0b1010 */
       *(volatile u32 *)(PFC_P1B) = (*(volatile u32 *)(PFC_P1B) & 0xFFFFFFFC) | 0x01;
    }

    return 0;
}

static int do_sdhiswitch(struct cmd_tbl *cmdtp, int flag, int argc,
                         char *const argv[])
{
    int ret=0;

    if (strcmp(argv[1], "sdcard") == 0) {
        sdhi1_gpio(0);
        printf("switch to sdcard\n");
    }else if (strcmp(argv[1], "wifi") == 0) {
        sdhi1_gpio(1);
        printf("switch to wifi\n");
    }else {
        printf("sdhi not found \n");
    }

    return ret;
}

U_BOOT_CMD(
      switch_sdhi1, 2, 1, do_sdhiswitch,
       "sdhi1 switch",
       ""
);
