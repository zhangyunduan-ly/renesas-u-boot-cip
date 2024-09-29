// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2021, Renesas Electronics Corporation. All rights reserved.
 */

#ifndef __RZF_DEV_SYS_REGS_H__
#define __RZF_DEV_SYS_REGS_H__

#define	SYS_BASE							(0x11020000)

#define	SYS_MSTACCCTL0						(SYS_BASE + 0x00000000)
#define	SYS_MSTACCCTL1						(SYS_BASE + 0x00000004)
#define	SYS_MSTACCCTL2						(SYS_BASE + 0x00000008)
#define	SYS_MSTACCCTL3						(SYS_BASE + 0x0000000C)
#define	SYS_MSTACCCTL4						(SYS_BASE + 0x00000010)
#define	SYS_MSTACCCTL5						(SYS_BASE + 0x00000014)
#define	SYS_SLVACCCTL0						(SYS_BASE + 0x00000100)
#define	SYS_SLVACCCTL1						(SYS_BASE + 0x00000104)
#define	SYS_SLVACCCTL2						(SYS_BASE + 0x00000108)
#define	SYS_SLVACCCTL3						(SYS_BASE + 0x0000010C)
#define	SYS_SLVACCCTL4						(SYS_BASE + 0x00000110)
#define	SYS_SLVACCCTL5						(SYS_BASE + 0x00000114)
#define	SYS_SLVACCCTL6						(SYS_BASE + 0x00000118)
#define	SYS_SLVACCCTL7						(SYS_BASE + 0x0000011C)
#define	SYS_SLVACCCTL8						(SYS_BASE + 0x00000120)
#define	SYS_SLVACCCTL9						(SYS_BASE + 0x00000124)
#define	SYS_SLVACCCTL10						(SYS_BASE + 0x00000128)
#define	SYS_SLVACCCTL11						(SYS_BASE + 0x0000012C)
#define	SYS_SLVACCCTL12						(SYS_BASE + 0x00000130)
#define	SYS_SLVACCCTL13						(SYS_BASE + 0x00000134)
#define	SYS_SLVACCCTL14						(SYS_BASE + 0x00000138)
#define	SYS_SLVACCCTL15						(SYS_BASE + 0x0000013C)
#define	SYS_RAM0_ECC						(SYS_BASE + 0x00000200)
#define	SYS_RAM0_EN							(SYS_BASE + 0x00000204)
#define	SYS_RAM0_TEST						(SYS_BASE + 0x00000208)
#define	SYS_RAM0_MON						(SYS_BASE + 0x0000020C)
#define	SYS_RAM1_ECC						(SYS_BASE + 0x00000210)
#define	SYS_RAM1_EN							(SYS_BASE + 0x00000214)
#define	SYS_RAM1_TEST						(SYS_BASE + 0x00000218)
#define	SYS_RAM1_MON						(SYS_BASE + 0x0000021C)
#define	SYS_WDT0_CTRL						(SYS_BASE + 0x00000220)
#define	SYS_WDT1_CTRL						(SYS_BASE + 0x00000230)
#define	SYS_WDT2_CTRL						(SYS_BASE + 0x00000240)
#define	SYS_WDT3_CTRL						(SYS_BASE + 0x00000250)
#define	SYS_GPU_COHE						(SYS_BASE + 0x00000300)
#define	SYS_GPU_STRP						(SYS_BASE + 0x00000304)
#define	SYS_GPU_TEXT						(SYS_BASE + 0x00000308)
#define	SYS_H264_CFG0						(SYS_BASE + 0x00000310)
#define	SYS_H264_CFG1						(SYS_BASE + 0x00000314)
#define	SYS_H264_CFG2						(SYS_BASE + 0x00000318)
#define	SYS_H264_MON						(SYS_BASE + 0x0000031C)
#define	SYS_H264_BSTOP						(SYS_BASE + 0x00000320)
#define	SYS_GETH0_CFG						(SYS_BASE + 0x00000330)
#define	SYS_GETH1_CFG						(SYS_BASE + 0x00000340)
#define	SYS_I2C0_CFG						(SYS_BASE + 0x00000400)
#define	SYS_I2C1_CFG						(SYS_BASE + 0x00000410)
#define	SYS_I2C2_CFG						(SYS_BASE + 0x00000420)
#define	SYS_I2C3_CFG						(SYS_BASE + 0x00000430)
#define	SYS_CANFD_CFG						(SYS_BASE + 0x00000440)
#define	SYS_SCIF0_CFG						(SYS_BASE + 0x00000450)
#define	SYS_SCIF1_CFG						(SYS_BASE + 0x00000460)
#define	SYS_SCIF2_CFG						(SYS_BASE + 0x00000470)
#define	SYS_SCIF3_CFG						(SYS_BASE + 0x00000480)
#define	SYS_SCIF4_CFG						(SYS_BASE + 0x00000490)
#define	SYS_SCI0_CFG						(SYS_BASE + 0x000004A0)
#define	SYS_SCI1_CFG						(SYS_BASE + 0x000004B0)
#define	SYS_CM33_STAT						(SYS_BASE + 0x00000800)
#define	SYS_CM33_CFG0						(SYS_BASE + 0x00000804)
#define	SYS_CM33_CFG1						(SYS_BASE + 0x00000808)
#define	SYS_CM33_CFG2						(SYS_BASE + 0x0000080C)
#define	SYS_CM33_CFG3						(SYS_BASE + 0x00000810)
#define	SYS_CM33_LOCK						(SYS_BASE + 0x00000814)
#define	SYS_CM33_CTL						(SYS_BASE + 0x00000818)
#define	SYS_CA55_CFG_AArch0					(SYS_BASE + 0x00000840)
#define	SYS_CA55_CFG_AArch1					(SYS_BASE + 0x00000844)
#define	SYS_CA55_CFG_Endian0				(SYS_BASE + 0x00000848)
#define	SYS_CA55_CFG_Endian1				(SYS_BASE + 0x0000084C)
#define	SYS_CA55_CFG_Thumb0					(SYS_BASE + 0x00000850)
#define	SYS_CA55_CFG_Thumb1					(SYS_BASE + 0x00000854)
#define	SYS_CA55_CFG_RVAL0					(SYS_BASE + 0x00000858)
#define	SYS_CA55_CFG_RVAH0					(SYS_BASE + 0x0000085C)
#define	SYS_CA55_CFG_RVAL1					(SYS_BASE + 0x00000860)
#define	SYS_CA55_CFG_RVAH1					(SYS_BASE + 0x00000864)
#define	SYS_CA55_CFG_VA0					(SYS_BASE + 0x00000868)
#define	SYS_CA55_CFG_VA1					(SYS_BASE + 0x0000086C)
#define	SYS_BBG_CTRL_ENABLE					(SYS_BASE + 0x00000900)
#define	SYS_BBG_CTRL						(SYS_BASE + 0x00000904)
#define	SYS_BBG_CTRL_MON					(SYS_BASE + 0x00000908)
#define	SYS_BBG_OFFSET0						(SYS_BASE + 0x0000090C)
#define	SYS_BBG_OFFSET1						(SYS_BASE + 0x00000910)
#define	SYS_BBG_OFFSET2						(SYS_BASE + 0x00000914)
#define	SYS_BBG_OFFSET3						(SYS_BASE + 0x00000918)
#define	SYS_BBG_OFFSET4						(SYS_BASE + 0x0000091C)
#define	SYS_BBG_OFFSET5						(SYS_BASE + 0x00000920)
#define	SYS_BBG_OFFSET6						(SYS_BASE + 0x00000924)
#define	SYS_BBG_OFFSET7						(SYS_BASE + 0x00000928)
#define	SYS_BBG_OFFSET_CTRL					(SYS_BASE + 0x00000930)
#define	SYS_BBG_PFREQ_MON					(SYS_BASE + 0x00000934)
#define	SYS_BBG_NFREQ_MON					(SYS_BASE + 0x00000938)
#define	SYS_BBG_TEMP_MON					(SYS_BASE + 0x0000093C)
#define	SYS_BBG_VOLT_MON					(SYS_BASE + 0x00000940)
#define	SYS_LSI_MODE						(SYS_BASE + 0x00000A00)
#define	SYS_LSI_DEVID						(SYS_BASE + 0x00000A04)
#define	SYS_LSI_PRR							(SYS_BASE + 0x00000A08)
#define	SYS_LSI_OTPSECEN					(SYS_BASE + 0x00000A0C)
#define	SYS_LSI_OTPSECMODE					(SYS_BASE + 0x00000A10)
#define	SYS_LSI_OTPJAM						(SYS_BASE + 0x00000A14)
#define	SYS_LSI_OTPCORE						(SYS_BASE + 0x00000A18)
#define	SYS_LSI_OTPPOC						(SYS_BASE + 0x00000A20)
#define	SYS_JAUTH_JUDGE						(SYS_BASE + 0x00000B00)
#define	SYS_AOF0							(SYS_BASE + 0x00000C00)
#define	SYS_AOF1							(SYS_BASE + 0x00000C04)
#define	SYS_AOF2							(SYS_BASE + 0x00000C08)
#define	SYS_AOF3							(SYS_BASE + 0x00000C0C)
#define	SYS_AOF4							(SYS_BASE + 0x00000C10)
#define	SYS_AOF5							(SYS_BASE + 0x00000C14)
#define	SYS_AOF6							(SYS_BASE + 0x00000C18)
#define	SYS_AOF7							(SYS_BASE + 0x00000C1C)
#define	SYS_AOF8							(SYS_BASE + 0x00000C20)
#define	SYS_LP_CTL0							(SYS_BASE + 0x00000D00)
#define	SYS_LP_CTL1							(SYS_BASE + 0x00000D04)
#define	SYS_LP_CTL2							(SYS_BASE + 0x00000D08)
#define	SYS_LP_CTL3							(SYS_BASE + 0x00000D0C)
#define	SYS_LP_CTL4							(SYS_BASE + 0x00000D10)
#define	SYS_LP_CTL5							(SYS_BASE + 0x00000D14)
#define	SYS_LP_CTL6							(SYS_BASE + 0x00000D18)
#define	SYS_LP_CTL7							(SYS_BASE + 0x00000D1C)
#define	SYS_LP_CTL8							(SYS_BASE + 0x00000D20)
#define	SYS_LP_CM33CTL0						(SYS_BASE + 0x00000D24)
#define	SYS_LP_CM33CTL1						(SYS_BASE + 0x00000D28)
#define	SYS_LP_CM33CTL2						(SYS_BASE + 0x00000D2C)
#define	SYS_LP_CM33CPG						(SYS_BASE + 0x00000D30)
#define	SYS_LP_CA55_CTL0					(SYS_BASE + 0x00000D34)
#define	SYS_LP_CA55CK_CTL1					(SYS_BASE + 0x00000D38)
#define	SYS_LP_CA55CK_CTL2					(SYS_BASE + 0x00000D3C)
#define	SYS_LP_CA55CK_CTL3					(SYS_BASE + 0x00000D40)
#define	SYS_LP_CA55CPGC0					(SYS_BASE + 0x00000D44)
#define	SYS_LP_CA55CPGC1					(SYS_BASE + 0x00000D48)
#define	SYS_LP_GPU_CTL						(SYS_BASE + 0x00000D50)
#define	SYS_GPREG_0							(SYS_BASE + 0x00000E00)
#define	SYS_GPREG_1							(SYS_BASE + 0x00000E04)
#define	SYS_GPREG_2							(SYS_BASE + 0x00000E08)
#define	SYS_GPREG_3							(SYS_BASE + 0x00000E0C)
#define	SYS_RESREG_0						(SYS_BASE + 0x00000E10)
#define	SYS_RESREG_1						(SYS_BASE + 0x00000E14)
#define	SYS_RESREG_2						(SYS_BASE + 0x00000E18)
#define	SYS_RESREG_3						(SYS_BASE + 0x00000E1C)


#define MSTACCCTL0_DMAC0_AWPU				(1 << 0)
#define MSTACCCTL0_DMAC0_AWNS				(1 << 1)
#define MSTACCCTL0_DMAC0_AWSEL				(1 << 3)
#define MSTACCCTL0_DMAC0_ARRU				(1 << 4)
#define MSTACCCTL0_DMAC0_ARNS				(1 << 5)
#define MSTACCCTL0_DMAC0_ARSEL				(1 << 7)
#define MSTACCCTL0_DMAC1_AWPU				(1 << 8)
#define MSTACCCTL0_DMAC1_AWNS				(1 << 9)
#define MSTACCCTL0_DMAC1_AWSEL				(1 << 11)
#define MSTACCCTL0_DMAC1_ARRU				(1 << 12)
#define MSTACCCTL0_DMAC1_ARNS				(1 << 13)
#define MSTACCCTL0_DMAC1_ARSEL				(1 << 15)
#define MSTACCCTL0_GPU_AWPU					(1 << 16)
#define MSTACCCTL0_GPU_AWNS					(1 << 17)
#define MSTACCCTL0_GPU_AWSEL				(1 << 19)
#define MSTACCCTL0_GPU_ARRU					(1 << 20)
#define MSTACCCTL0_GPU_ARNS					(1 << 21)
#define MSTACCCTL0_GPU_ARSEL				(1 << 23)
#define MSTACCCTL1_SDHI0_AWPU				(1 << 0)
#define MSTACCCTL1_SDHI0_AWNS				(1 << 1)
#define MSTACCCTL1_SDHI0_AWSEL				(1 << 3)
#define MSTACCCTL1_SDHI0_ARRU				(1 << 4)
#define MSTACCCTL1_SDHI0_ARNS				(1 << 5)
#define MSTACCCTL1_SDHI0_ARSEL				(1 << 7)
#define MSTACCCTL1_SDHI1_AWPU				(1 << 8)
#define MSTACCCTL1_SDHI1_AWNS				(1 << 9)
#define MSTACCCTL1_SDHI1_AWSEL				(1 << 11)
#define MSTACCCTL1_SDHI1_ARRU				(1 << 12)
#define MSTACCCTL1_SDHI1_ARNS				(1 << 13)
#define MSTACCCTL1_SDHI1_ARSEL				(1 << 15)
#define MSTACCCTL1_GEther0_AWPU				(1 << 16)
#define MSTACCCTL1_GEther0_AWNS				(1 << 17)
#define MSTACCCTL1_GEther0_AWSEL			(1 << 19)
#define MSTACCCTL1_GEther0_ARRU				(1 << 20)
#define MSTACCCTL1_GEther0_ARNS				(1 << 21)
#define MSTACCCTL1_GEther0_ARSEL			(1 << 23)
#define MSTACCCTL1_GEther1_AWPU				(1 << 24)
#define MSTACCCTL1_GEther1_AWNS				(1 << 25)
#define MSTACCCTL1_GEther1_AWSEL			(1 << 27)
#define MSTACCCTL1_GEther1_ARRU				(1 << 28)
#define MSTACCCTL1_GEther1_ARNS				(1 << 29)
#define MSTACCCTL1_GEther1_ARSEL			(1 << 31)
#define MSTACCCTL2_USB2_0H_AWPU				(1 << 0)
#define MSTACCCTL2_USB2_0H_AWNS				(1 << 1)
#define MSTACCCTL2_USB2_0H_AWSEL			(1 << 3)
#define MSTACCCTL2_USB2_0H_ARRU				(1 << 4)
#define MSTACCCTL2_USB2_0H_ARNS				(1 << 5)
#define MSTACCCTL2_USB2_0H_ARSEL			(1 << 7)
#define MSTACCCTL2_USB2_0D_AWPU				(1 << 8)
#define MSTACCCTL2_USB2_0D_AWNS				(1 << 9)
#define MSTACCCTL2_USB2_0D_AWSEL			(1 << 11)
#define MSTACCCTL2_USB2_0D_ARRU				(1 << 12)
#define MSTACCCTL2_USB2_0D_ARNS				(1 << 13)
#define MSTACCCTL2_USB2_0D_ARSEL			(1 << 15)
#define MSTACCCTL2_USB2_1H_AWPU				(1 << 16)
#define MSTACCCTL2_USB2_1H_AWNS				(1 << 17)
#define MSTACCCTL2_USB2_1H_AWSEL			(1 << 19)
#define MSTACCCTL2_USB2_1H_ARRU				(1 << 20)
#define MSTACCCTL2_USB2_1H_ARNS				(1 << 21)
#define MSTACCCTL2_USB2_1H_ARSEL			(1 << 23)
#define MSTACCCTL3_H264_AWPU				(1 << 0)
#define MSTACCCTL3_H264_AWNS				(1 << 1)
#define MSTACCCTL3_H264_AWSEL				(1 << 3)
#define MSTACCCTL3_H264_ARRU				(1 << 4)
#define MSTACCCTL3_H264_ARNS				(1 << 5)
#define MSTACCCTL3_H264_ARSEL				(1 << 7)
#define MSTACCCTL3_LCDC_AWPU				(1 << 8)
#define MSTACCCTL3_LCDC_AWNS				(1 << 9)
#define MSTACCCTL3_LCDC_AWSEL				(1 << 11)
#define MSTACCCTL3_LCDC_ARRU				(1 << 12)
#define MSTACCCTL3_LCDC_ARNS				(1 << 13)
#define MSTACCCTL3_LCDC_ARSEL				(1 << 15)
#define MSTACCCTL3_DSI_AWPU					(1 << 16)
#define MSTACCCTL3_DSI_AWNS					(1 << 17)
#define MSTACCCTL3_DSI_AWSEL				(1 << 19)
#define MSTACCCTL3_DSI_ARRU					(1 << 20)
#define MSTACCCTL3_DSI_ARNS					(1 << 21)
#define MSTACCCTL3_DSI_ARSEL				(1 << 23)
#define MSTACCCTL4_ISU_AWPU					(1 << 0)
#define MSTACCCTL4_ISU_AWNS					(1 << 1)
#define MSTACCCTL4_ISU_AWSEL				(1 << 3)
#define MSTACCCTL4_ISU_ARRU					(1 << 4)
#define MSTACCCTL4_ISU_ARNS					(1 << 5)
#define MSTACCCTL4_ISU_ARSEL				(1 << 7)
#define MSTACCCTL4_CRU_VD_AWPU				(1 << 16)
#define MSTACCCTL4_CRU_VD_AWNS				(1 << 17)
#define MSTACCCTL4_CRU_VD_AWSEL				(1 << 19)
#define MSTACCCTL4_CRU_VD_ARRU				(1 << 20)
#define MSTACCCTL4_CRU_VD_ARNS				(1 << 21)
#define MSTACCCTL4_CRU_VD_ARSEL				(1 << 23)
#define MSTACCCTL4_CRU_ST_AWPU				(1 << 24)
#define MSTACCCTL4_CRU_ST_AWNS				(1 << 25)
#define MSTACCCTL4_CRU_ST_AWSEL				(1 << 27)
#define MSTACCCTL4_CRU_ST_ARRU				(1 << 28)
#define MSTACCCTL4_CRU_ST_ARNS				(1 << 29)
#define MSTACCCTL4_CRU_ST_ARSEL				(1 << 31)
#define MSTACCCTL5_DRP0_AWPU				(1 << 0)
#define MSTACCCTL5_DRP0_AWNS				(1 << 1)
#define MSTACCCTL5_DRP0_AWSEL				(1 << 3)
#define MSTACCCTL5_DRP0_ARRU				(1 << 4)
#define MSTACCCTL5_DRP0_ARNS				(1 << 5)
#define MSTACCCTL5_DRP0_ARSEL				(1 << 7)
#define MSTACCCTL5_DRP1_AWPU				(1 << 8)
#define MSTACCCTL5_DRP1_AWNS				(1 << 9)
#define MSTACCCTL5_DRP1_AWSEL				(1 << 11)
#define MSTACCCTL5_DRP1_ARRU				(1 << 12)
#define MSTACCCTL5_DRP1_ARNS				(1 << 13)
#define MSTACCCTL5_DRP1_ARSEL				(1 << 15)
#define MSTACCCTL5_DRP2_AWPU				(1 << 16)
#define MSTACCCTL5_DRP2_AWNS				(1 << 17)
#define MSTACCCTL5_DRP2_AWSEL				(1 << 19)
#define MSTACCCTL5_DRP2_ARRU				(1 << 20)
#define MSTACCCTL5_DRP2_ARNS				(1 << 21)
#define MSTACCCTL5_DRP2_ARSEL				(1 << 23)
#define MSTACCCTL5_DRP3_AWPU				(1 << 24)
#define MSTACCCTL5_DRP3_AWNS				(1 << 25)
#define MSTACCCTL5_DRP3_AWSEL				(1 << 27)
#define MSTACCCTL5_DRP3_ARRU				(1 << 28)
#define MSTACCCTL5_DRP3_ARNS				(1 << 29)
#define MSTACCCTL5_DRP3_ARSEL				(1 << 31)
#define SLVACCCTL0_SRAM0_SL_00				(0 << 0)
#define SLVACCCTL0_SRAM0_SL_01				(1 << 0)
#define SLVACCCTL0_SRAM0_SL_10				(2 << 0)
#define SLVACCCTL0_SRAM0_SL_11				(3 << 0)
#define SLVACCCTL0_SRAM1_SL_00				(0 << 2)
#define SLVACCCTL0_SRAM1_SL_01				(1 << 2)
#define SLVACCCTL0_SRAM1_SL_10				(2 << 2)
#define SLVACCCTL0_SRAM1_SL_11				(3 << 2)
#define SLVACCCTL0_GPV_ACPU_SL_10			(2 << 4)
#define SLVACCCTL0_GPV_ACPU_SL_11			(3 << 4)
#define SLVACCCTL0_GPV_MCPU_SL_10			(2 << 6)
#define SLVACCCTL0_GPV_MCPU_SL_11			(3 << 6)
#define SLVACCCTL0_GPV_REG0_SL_10			(2 << 8)
#define SLVACCCTL0_GPV_REG0_SL_11			(3 << 8)
#define SLVACCCTL0_GPV_REG1_SL_10			(2 << 10)
#define SLVACCCTL0_GPV_REG1_SL_11			(3 << 10)
#define SLVACCCTL0_GPV_PERIVIDEO_SL_10		(2 << 12)
#define SLVACCCTL0_GPV_PERIVIDEO_SL_11		(3 << 12)
#define SLVACCCTL0_GPV_PERICPU_SL_10		(2 << 14)
#define SLVACCCTL0_GPV_PERICPU_SL_11		(3 << 14)
#define SLVACCCTL0_GPV_PERIDDR_SL_10		(2 << 16)
#define SLVACCCTL0_GPV_PERIDDR_SL_11		(3 << 16)
#define SLVACCCTL0_GPV_PERICOM_SL_10		(2 << 18)
#define SLVACCCTL0_GPV_PERICOM_SL_11		(3 << 18)
#define SLVACCCTL0_GPV_MXCOM_SL_10			(2 << 20)
#define SLVACCCTL0_GPV_MXCOM_SL_11			(3 << 20)
#define SLVACCCTL0_GPV_MXVIDEO_SL_10		(2 << 22)
#define SLVACCCTL0_GPV_MXVIDEO_SL_11		(3 << 22)
#define SLVACCCTL0_GPV_MXDRP_SL_10			(2 << 24)
#define SLVACCCTL0_GPV_MXDRP_SL_11			(3 << 24)
#define SLVACCCTL0_GPV_PERISTP_SL_10		(2 << 26)
#define SLVACCCTL0_GPV_PERISTP_SL_11		(3 << 26)
#define SLVACCCTL1_TZC0_SL_10				(2 << 0)
#define SLVACCCTL1_TZC0_SL_11				(3 << 0)
#define SLVACCCTL1_TZC1_SL_10				(2 << 2)
#define SLVACCCTL1_TZC1_SL_11				(3 << 2)
#define SLVACCCTL1_TZC2_SL_10				(2 << 4)
#define SLVACCCTL1_TZC2_SL_11				(3 << 4)
#define SLVACCCTL1_TZC3_SL_10				(2 << 6)
#define SLVACCCTL1_TZC3_SL_11				(3 << 6)
#define SLVACCCTL1_CST_SL_00				(0 << 10)
#define SLVACCCTL1_CST_SL_01				(1 << 10)
#define SLVACCCTL1_CST_SL_10				(2 << 10)
#define SLVACCCTL1_CST_SL_11				(3 << 10)
#define SLVACCCTL1_CPG_SL_00				(0 << 12)
#define SLVACCCTL1_CPG_SL_01				(1 << 12)
#define SLVACCCTL1_CPG_SL_10				(2 << 12)
#define SLVACCCTL1_CPG_SL_11				(3 << 12)
#define SLVACCCTL1_SYSC_SL_00				(0 << 14)
#define SLVACCCTL1_SYSC_SL_01				(1 << 14)
#define SLVACCCTL1_SYSC_SL_10				(2 << 14)
#define SLVACCCTL1_SYSC_SL_11				(3 << 14)
#define SLVACCCTL1_SYC_SL_00				(0 << 16)
#define SLVACCCTL1_SYC_SL_01				(1 << 16)
#define SLVACCCTL1_SYC_SL_10				(2 << 16)
#define SLVACCCTL1_SYC_SL_11				(3 << 16)
#define SLVACCCTL1_GIC_SL_00				(0 << 18)
#define SLVACCCTL1_GIC_SL_01				(1 << 18)
#define SLVACCCTL1_GIC_SL_10				(2 << 18)
#define SLVACCCTL1_GIC_SL_11				(3 << 18)
#define SLVACCCTL1_IA55_IM33_SL_00			(0 << 20)
#define SLVACCCTL1_IA55_IM33_SL_01			(1 << 20)
#define SLVACCCTL1_IA55_IM33_SL_10			(2 << 20)
#define SLVACCCTL1_IA55_IM33_SL_11			(3 << 20)
#define SLVACCCTL1_GPIO_SL_00				(0 << 22)
#define SLVACCCTL1_GPIO_SL_01				(1 << 22)
#define SLVACCCTL1_GPIO_SL_10				(2 << 22)
#define SLVACCCTL1_GPIO_SL_11				(3 << 22)
#define SLVACCCTL1_MHU_SL_00				(0 << 24)
#define SLVACCCTL1_MHU_SL_01				(1 << 24)
#define SLVACCCTL1_MHU_SL_10				(2 << 24)
#define SLVACCCTL1_MHU_SL_11				(3 << 24)
#define SLVACCCTL1_DMAC0_SL_00				(0 << 26)
#define SLVACCCTL1_DMAC0_SL_01				(1 << 26)
#define SLVACCCTL1_DMAC0_SL_10				(2 << 26)
#define SLVACCCTL1_DMAC0_SL_11				(3 << 26)
#define SLVACCCTL1_DMAC1_SL_00				(0 << 28)
#define SLVACCCTL1_DMAC1_SL_01				(1 << 28)
#define SLVACCCTL1_DMAC1_SL_10				(2 << 28)
#define SLVACCCTL1_DMAC1_SL_11				(3 << 28)
#define SLVACCCTL2_OSTM0_SL_00				(0 << 0)
#define SLVACCCTL2_OSTM0_SL_01				(1 << 0)
#define SLVACCCTL2_OSTM0_SL_10				(2 << 0)
#define SLVACCCTL2_OSTM0_SL_11				(3 << 0)
#define SLVACCCTL2_OSTM1_SL_00				(0 << 2)
#define SLVACCCTL2_OSTM1_SL_01				(1 << 2)
#define SLVACCCTL2_OSTM1_SL_10				(2 << 2)
#define SLVACCCTL2_OSTM1_SL_11				(3 << 2)
#define SLVACCCTL2_OSTM2_SL_00				(0 << 4)
#define SLVACCCTL2_OSTM2_SL_01				(1 << 4)
#define SLVACCCTL2_OSTM2_SL_10				(2 << 4)
#define SLVACCCTL2_OSTM2_SL_11				(3 << 4)
#define SLVACCCTL2_WDT0_SL_00				(0 << 6)
#define SLVACCCTL2_WDT0_SL_01				(1 << 6)
#define SLVACCCTL2_WDT0_SL_10				(2 << 6)
#define SLVACCCTL2_WDT0_SL_11				(3 << 6)
#define SLVACCCTL2_WDT1_SL_00				(0 << 8)
#define SLVACCCTL2_WDT1_SL_01				(1 << 8)
#define SLVACCCTL2_WDT1_SL_10				(2 << 8)
#define SLVACCCTL2_WDT1_SL_11				(3 << 8)
#define SLVACCCTL2_WDT2_SL_00				(0 << 10)
#define SLVACCCTL2_WDT2_SL_01				(1 << 10)
#define SLVACCCTL2_WDT2_SL_10				(2 << 10)
#define SLVACCCTL2_WDT2_SL_11				(3 << 10)
#define SLVACCCTL2_WDT3_SL_00				(0 << 12)
#define SLVACCCTL2_WDT3_SL_01				(1 << 12)
#define SLVACCCTL2_WDT3_SL_10				(2 << 12)
#define SLVACCCTL2_WDT3_SL_11				(3 << 12)
#define SLVACCCTL2_MTU3A_SL_00				(0 << 14)
#define SLVACCCTL2_MTU3A_SL_01				(1 << 14)
#define SLVACCCTL2_MTU3A_SL_10				(2 << 14)
#define SLVACCCTL2_MTU3A_SL_11				(3 << 14)
#define SLVACCCTL2_POE3_SL_00				(0 << 16)
#define SLVACCCTL2_POE3_SL_01				(1 << 16)
#define SLVACCCTL2_POE3_SL_10				(2 << 16)
#define SLVACCCTL2_POE3_SL_11				(3 << 16)
#define SLVACCCTL2_GPT_SL_00				(0 << 18)
#define SLVACCCTL2_GPT_SL_01				(1 << 18)
#define SLVACCCTL2_GPT_SL_10				(2 << 18)
#define SLVACCCTL2_GPT_SL_11				(3 << 18)
#define SLVACCCTL2_POEG_SL_00				(0 << 20)
#define SLVACCCTL2_POEG_SL_01				(1 << 20)
#define SLVACCCTL2_POEG_SL_10				(2 << 20)
#define SLVACCCTL2_POEG_SL_11				(3 << 20)
#define SLVACCCTL2_DDR_SL_00				(0 << 22)
#define SLVACCCTL2_DDR_SL_01				(1 << 22)
#define SLVACCCTL2_DDR_SL_10				(2 << 22)
#define SLVACCCTL2_DDR_SL_11				(3 << 22)
#define SLVACCCTL3_GPU_SL_00				(0 << 0)
#define SLVACCCTL3_GPU_SL_01				(1 << 0)
#define SLVACCCTL3_GPU_SL_10				(2 << 0)
#define SLVACCCTL3_GPU_SL_11				(3 << 0)
#define SLVACCCTL3_H264_SL_00				(0 << 2)
#define SLVACCCTL3_H264_SL_01				(1 << 2)
#define SLVACCCTL3_H264_SL_10				(2 << 2)
#define SLVACCCTL3_H264_SL_11				(3 << 2)
#define SLVACCCTL3_CRU_SL_00				(0 << 4)
#define SLVACCCTL3_CRU_SL_01				(1 << 4)
#define SLVACCCTL3_CRU_SL_10				(2 << 4)
#define SLVACCCTL3_CRU_SL_11				(3 << 4)
#define SLVACCCTL3_ISU_SL_00				(0 << 6)
#define SLVACCCTL3_ISU_SL_01				(1 << 6)
#define SLVACCCTL3_ISU_SL_10				(2 << 6)
#define SLVACCCTL3_ISU_SL_11				(3 << 6)
#define SLVACCCTL3_DSIPHY_SL_00				(0 << 8)
#define SLVACCCTL3_DSIPHY_SL_01				(1 << 8)
#define SLVACCCTL3_DSIPHY_SL_10				(2 << 8)
#define SLVACCCTL3_DSIPHY_SL_11				(3 << 8)
#define SLVACCCTL3_DSILINK_SL_00			(0 << 10)
#define SLVACCCTL3_DSILINK_SL_01			(1 << 10)
#define SLVACCCTL3_DSILINK_SL_10			(2 << 10)
#define SLVACCCTL3_DSILINK_SL_11			(3 << 10)
#define SLVACCCTL3_LCDC_SL_00				(0 << 12)
#define SLVACCCTL3_LCDC_SL_01				(1 << 12)
#define SLVACCCTL3_LCDC_SL_10				(2 << 12)
#define SLVACCCTL3_LCDC_SL_11				(3 << 12)
#define SLVACCCTL3_DRP_SL_00				(0 << 14)
#define SLVACCCTL3_DRP_SL_01				(1 << 14)
#define SLVACCCTL3_DRP_SL_10				(2 << 14)
#define SLVACCCTL3_DRP_SL_11				(3 << 14)
#define SLVACCCTL3_USBT_SL_00				(0 << 16)
#define SLVACCCTL3_USBT_SL_01				(1 << 16)
#define SLVACCCTL3_USBT_SL_10				(2 << 16)
#define SLVACCCTL3_USBT_SL_11				(3 << 16)
#define SLVACCCTL3_USB20_SL_00				(0 << 18)
#define SLVACCCTL3_USB20_SL_01				(1 << 18)
#define SLVACCCTL3_USB20_SL_10				(2 << 18)
#define SLVACCCTL3_USB20_SL_11				(3 << 18)
#define SLVACCCTL3_USB21_SL_00				(0 << 20)
#define SLVACCCTL3_USB21_SL_01				(1 << 20)
#define SLVACCCTL3_USB21_SL_10				(2 << 20)
#define SLVACCCTL3_USB21_SL_11				(3 << 20)
#define SLVACCCTL3_SDHI0_SL_00				(0 << 22)
#define SLVACCCTL3_SDHI0_SL_01				(1 << 22)
#define SLVACCCTL3_SDHI0_SL_10				(2 << 22)
#define SLVACCCTL3_SDHI0_SL_11				(3 << 22)
#define SLVACCCTL3_SDHI1_SL_00				(0 << 24)
#define SLVACCCTL3_SDHI1_SL_01				(1 << 24)
#define SLVACCCTL3_SDHI1_SL_10				(2 << 24)
#define SLVACCCTL3_SDHI1_SL_11				(3 << 24)
#define SLVACCCTL3_ETH0_SL_00				(0 << 26)
#define SLVACCCTL3_ETH0_SL_01				(1 << 26)
#define SLVACCCTL3_ETH0_SL_10				(2 << 26)
#define SLVACCCTL3_ETH0_SL_11				(3 << 26)
#define SLVACCCTL3_ETH1_SL_00				(0 << 28)
#define SLVACCCTL3_ETH1_SL_01				(1 << 28)
#define SLVACCCTL3_ETH1_SL_10				(2 << 28)
#define SLVACCCTL3_ETH1_SL_11				(3 << 28)
#define SLVACCCTL4_I2C0_SL_00				(0 << 0)
#define SLVACCCTL4_I2C0_SL_01				(1 << 0)
#define SLVACCCTL4_I2C0_SL_10				(2 << 0)
#define SLVACCCTL4_I2C0_SL_11				(3 << 0)
#define SLVACCCTL4_I2C1_SL_00				(0 << 2)
#define SLVACCCTL4_I2C1_SL_01				(1 << 2)
#define SLVACCCTL4_I2C1_SL_10				(2 << 2)
#define SLVACCCTL4_I2C1_SL_11				(3 << 2)
#define SLVACCCTL4_I2C2_SL_00				(0 << 4)
#define SLVACCCTL4_I2C2_SL_01				(1 << 4)
#define SLVACCCTL4_I2C2_SL_10				(2 << 4)
#define SLVACCCTL4_I2C2_SL_11				(3 << 4)
#define SLVACCCTL4_I2C3_SL_00				(0 << 6)
#define SLVACCCTL4_I2C3_SL_01				(1 << 6)
#define SLVACCCTL4_I2C3_SL_10				(2 << 6)
#define SLVACCCTL4_I2C3_SL_11				(3 << 6)
#define SLVACCCTL4_CANFD_SL_00				(0 << 8)
#define SLVACCCTL4_CANFD_SL_01				(1 << 8)
#define SLVACCCTL4_CANFD_SL_10				(2 << 8)
#define SLVACCCTL4_CANFD_SL_11				(3 << 8)
#define SLVACCCTL4_RSPI_SL_00				(0 << 10)
#define SLVACCCTL4_RSPI_SL_01				(1 << 10)
#define SLVACCCTL4_RSPI_SL_10				(2 << 10)
#define SLVACCCTL4_RSPI_SL_11				(3 << 10)
#define SLVACCCTL4_SCIF0_SL_00				(0 << 16)
#define SLVACCCTL4_SCIF0_SL_01				(1 << 16)
#define SLVACCCTL4_SCIF0_SL_10				(2 << 16)
#define SLVACCCTL4_SCIF0_SL_11				(3 << 16)
#define SLVACCCTL4_SCIF1_SL_00				(0 << 18)
#define SLVACCCTL4_SCIF1_SL_01				(1 << 18)
#define SLVACCCTL4_SCIF1_SL_10				(2 << 18)
#define SLVACCCTL4_SCIF1_SL_11				(3 << 18)
#define SLVACCCTL4_SCIF2_SL_00				(0 << 20)
#define SLVACCCTL4_SCIF2_SL_01				(1 << 20)
#define SLVACCCTL4_SCIF2_SL_10				(2 << 20)
#define SLVACCCTL4_SCIF2_SL_11				(3 << 20)
#define SLVACCCTL4_SCIF3_SL_00				(0 << 22)
#define SLVACCCTL4_SCIF3_SL_01				(1 << 22)
#define SLVACCCTL4_SCIF3_SL_10				(2 << 22)
#define SLVACCCTL4_SCIF3_SL_11				(3 << 22)
#define SLVACCCTL4_SCIF4_SL_00				(0 << 24)
#define SLVACCCTL4_SCIF4_SL_01				(1 << 24)
#define SLVACCCTL4_SCIF4_SL_10				(2 << 24)
#define SLVACCCTL4_SCIF4_SL_11				(3 << 24)
#define SLVACCCTL4_SCI0_SL_00				(0 << 26)
#define SLVACCCTL4_SCI0_SL_01				(1 << 26)
#define SLVACCCTL4_SCI0_SL_10				(2 << 26)
#define SLVACCCTL4_SCI0_SL_11				(3 << 26)
#define SLVACCCTL4_SCI1_SL_00				(0 << 28)
#define SLVACCCTL4_SCI1_SL_01				(1 << 28)
#define SLVACCCTL4_SCI1_SL_10				(2 << 28)
#define SLVACCCTL4_SCI1_SL_11				(3 << 28)
#define SLVACCCTL4_IRDA_SL_00				(0 << 30)
#define SLVACCCTL4_IRDA_SL_01				(1 << 30)
#define SLVACCCTL4_IRDA_SL_10				(2 << 30)
#define SLVACCCTL4_IRDA_SL_11				(3 << 30)
#define SLVACCCTL5_SSIF_SL_00				(0 << 0)
#define SLVACCCTL5_SSIF_SL_01				(1 << 0)
#define SLVACCCTL5_SSIF_SL_10				(2 << 0)
#define SLVACCCTL5_SSIF_SL_11				(3 << 0)
#define SLVACCCTL5_SRC_SL_00				(0 << 4)
#define SLVACCCTL5_SRC_SL_01				(1 << 4)
#define SLVACCCTL5_SRC_SL_10				(2 << 4)
#define SLVACCCTL5_SRC_SL_11				(3 << 4)
#define SLVACCCTL6_ADC_SL_00				(0 << 0)
#define SLVACCCTL6_ADC_SL_01				(1 << 0)
#define SLVACCCTL6_ADC_SL_10				(2 << 0)
#define SLVACCCTL6_ADC_SL_11				(3 << 0)
#define SLVACCCTL6_TSU_SL_00				(0 << 2)
#define SLVACCCTL6_TSU_SL_01				(1 << 2)
#define SLVACCCTL6_TSU_SL_10				(2 << 2)
#define SLVACCCTL6_TSU_SL_11				(3 << 2)
#define SLVACCCTL7_TSIP_SL_00				(0 << 0)
#define SLVACCCTL7_TSIP_SL_01				(1 << 0)
#define SLVACCCTL7_TSIP_SL_10				(2 << 0)
#define SLVACCCTL7_TSIP_SL_11				(3 << 0)
#define SLVACCCTL7_OTP_SL_00				(0 << 2)
#define SLVACCCTL7_OTP_SL_01				(1 << 2)
#define SLVACCCTL7_OTP_SL_10				(2 << 2)
#define SLVACCCTL7_OTP_SL_11				(3 << 2)
#define SLVACCCTL8_CM33_SL_00				(0 << 0)
#define SLVACCCTL8_CM33_SL_01				(1 << 0)
#define SLVACCCTL8_CM33_SL_10				(2 << 0)
#define SLVACCCTL8_CM33_SL_11				(3 << 0)
#define SLVACCCTL8_CA55_SL_00				(0 << 2)
#define SLVACCCTL8_CA55_SL_01				(1 << 2)
#define SLVACCCTL8_CA55_SL_10				(2 << 2)
#define SLVACCCTL8_CA55_SL_11				(3 << 2)
#define SLVACCCTL9_BBG_SL_00				(0 << 0)
#define SLVACCCTL9_BBG_SL_01				(1 << 0)
#define SLVACCCTL9_BBG_SL_10				(2 << 0)
#define SLVACCCTL9_BBG_SL_11				(3 << 0)
#define SLVACCCTL10_LSI_S_00				(0 << 0)
#define SLVACCCTL10_LSI_S_01				(1 << 0)
#define SLVACCCTL10_LSI_S_10				(2 << 0)
#define SLVACCCTL10_LSI_S_11				(3 << 0)
#define SLVACCCTL11_JAUTH_SL_00				(0 << 0)
#define SLVACCCTL11_JAUTH_SL_01				(1 << 0)
#define SLVACCCTL11_JAUTH_SL_10				(2 << 0)
#define SLVACCCTL11_JAUTH_SL_11				(3 << 0)
#define SLVACCCTL12_AOF_SL_00				(0 << 0)
#define SLVACCCTL12_AOF_SL_01				(1 << 0)
#define SLVACCCTL12_AOF_SL_10				(2 << 0)
#define SLVACCCTL12_AOF_SL_11				(3 << 0)
#define SLVACCCTL13LP_SL_00					(0 << 0)
#define SLVACCCTL13LP_SL_01					(1 << 0)
#define SLVACCCTL13LP_SL_10					(2 << 0)
#define SLVACCCTL13LP_SL_11					(3 << 0)
#define SLVACCCTL14_GPREG_SL_00				(0 << 0)
#define SLVACCCTL14_GPREG_SL_01				(1 << 0)
#define SLVACCCTL14_GPREG_SL_10				(2 << 0)
#define SLVACCCTL14_GPREG_SL_11				(3 << 0)
#define SLVACCCTL15_RESREG_SL_00			(0 << 0)
#define SLVACCCTL15_RESREG_SL_01			(1 << 0)
#define SLVACCCTL15_RESREG_SL_10			(2 << 0)
#define SLVACCCTL15_RESREG_SL_11			(3 << 0)
#define RAM0_ECC_VECCEN						(1 << 0)
#define RAM0_ECC_EC7TERVE					(1 << 1)
#define RAM0_EN_VCEN						(1 << 0)
#define RAM0_EN_VLWEN						(1 << 1)
#define RAM0_TEST_READTEST					(1 << 0)
#define RAM0_MON_RAMON_O					(1 << 0)
#define RAM1_ECC_VECCEN						(1 << 0)
#define RAM1_ECC_EC7TERVE					(1 << 1)
#define RAM1_EN_VCEN						(1 << 0)
#define RAM1_EN_VLWEN						(1 << 1)
#define RAM1_TEST_READTEST					(1 << 0)
#define RAM1_MON_RAMON_O					(1 << 0)
#define WDT0_CTRL_WDTSTOP					(1 << 0)
#define WDT0_CTRL_WDTSTOPMASK				(1 << 16)
#define WDT1_CTRL_WDTSTOP					(1 << 0)
#define WDT1_CTRL_WDTSTOPMASK				(1 << 16)
#define WDT2_CTRL_WDTSTOP					(1 << 0)
#define WDT2_CTRL_WDTSTOPMASK				(1 << 16)
#define WDT3_CTRL_WDTSTOP					(1 << 0)
#define WDT3_CTRL_WDTSTOPMASK				(1 << 16)
#define GPU_COHE_COHERENCY					(1 << 0)
#define GPU_TEXT_TEXFMTENABLE				(1 << 0)
#define H264_CFG0_SYNC_AB_RAW_VCPLF_00		(0 << 24)
#define H264_CFG0_SYNC_AB_RAW_VCPLF_01		(1 << 24)
#define H264_CFG0_SYNC_AB_RAW_VCPLF_10		(2 << 24)
#define H264_CFG0_SYNC_AB_RAW_VCPLF_11		(3 << 24)
#define H264_CFG1_VPI_CAXI2_ENABLE_N		(1 << 0)
#define H264_CFG2_VPI_CAXI_DPIC_STALL		(1 << 0)
#define H264_MON_VPO_CAXI_DPIC_VALID		(1 << 0)
#define H264_MON_VPO_CAXI_DPIC_MBL_START	(1 << 8)
#define H264_MON_VPO_CAXI_DPIC_2D_START		(1 << 16)
#define H264_BSTOP_FCI_CL_ISREQ_P			(1 << 0)
#define H264_BSTOP_FCO_CL_ISACK_P			(1 << 16)
#define GETH0_CFG_AVB_MIIMG_PIMODE			(1 << 0)
#define GETH0_CFG_FEC_MIIMG_PIMODE			(1 << 16)
#define GETH0_CFG_FEC_GIGA_ENABLE			(1 << 24)
#define GETH1_CFG_AVB_MIIMG_PIMODE			(1 << 0)
#define GETH1_CFG_FEC_MIIMG_PIMODE			(1 << 16)
#define GETH1_CFG_FEC_GIGA_ENABLE			(1 << 24)
#define I2C0_CFG_af_bypass					(1 << 0)
#define I2C0_CFG_c2dloop					(1 << 8)
#define I2C0_CFG_d2cloop					(1 << 9)
#define I2C1_CFG_af_bypass					(1 << 0)
#define I2C1_CFG_c2dloop					(1 << 8)
#define I2C1_CFG_d2cloop					(1 << 9)
#define I2C2_CFG_af_bypass					(1 << 0)
#define I2C2_CFG_c2dloop					(1 << 8)
#define I2C2_CFG_d2cloop					(1 << 9)
#define I2C3_CFG_af_bypass					(1 << 0)
#define I2C3_CFG_c2dloop					(1 << 8)
#define I2C3_CFG_d2cloop					(1 << 9)
#define CANFD_CFG_RS_CANFD_MODE				(1 << 0)
#define CANFD_CFG_RS_CANFD_NON_ISO_SEL		(1 << 1)
#define CANFD_CFG_RS_CANFD_NON_ISO_EN		(1 << 2)
#define SCIF0_CFG_e1_iotestmd				(1 << 0)
#define SCIF1_CFG_e1_iotestmd				(1 << 0)
#define SCIF2_CFG_e1_iotestmd				(1 << 0)
#define SCIF3_CFG_e1_iotestmd				(1 << 0)
#define SCIF4_CFG_e1_iotestmd				(1 << 0)
#define SCI0_CFG_SY_TM32					(1 << 0)
#define SCI1_CFG__SY_TM32					(1 << 0)
#define CM33_STAT_CORECLKEN					(1 << 0)
#define CM33_LOCK_LOCKSVTAIRCR				(1 << 0)
#define CM33_LOCK_LOCKNSVTOR				(1 << 1)
#define CM33_LOCK_LOCKSMPU					(1 << 2)
#define CM33_LOCK_LOCKNSMPU					(1 << 3)
#define CM33_LOCK_LOCKSAU					(1 << 4)
#define CM33_CTL_CPUWAIT					(1 << 0)
#define CA55_CFG_AArch0_AA64nAA32_0			(1 << 0)
#define CA55_CFG_AArch1_AA64nAA32_1			(1 << 1)
#define CA55_CFG_Endian0_CFGEND0			(1 << 0)
#define CA55_CFG_Endian1_CFGEND1			(1 << 1)
#define CA55_CFG_Thumb0_CFGTE0				(1 << 0)
#define CA55_CFG_Thumb1_CFGTE1				(1 << 1)
#define CA55_CFG_VA0_VINITHI0				(1 << 0)
#define CA55_CFG_VA1_VINITHI1				(1 << 1)
#define BBG_CTRL_ENABLE_REG_EN				(1 << 0)
#define BBG_CTRL_REG_EN_CP					(1 << 15)
#define BBG_CTRL_REG_EN_VBBP				(1 << 13)
#define BBG_CTRL_REG_EN_VBBN				(1 << 14)
#define BBG_CTRL_MON_EN_CP_STATE			(1 << 15)
#define BBG_CTRL_MON_EN_VBBP_STATE			(1 << 13)
#define BBG_CTRL_MON_EN_VBBN_STATE			(1 << 14)
#define BBG_OFFSET_CTRL_EN_OFFSET			(1 << 15)
#define BBG_OFFSET_INDEX_SEL_00				(0 << 0)
#define BBG_OFFSET_INDEX_SEL_01				(1 << 0)
#define BBG_OFFSET_INDEX_SEL_10				(2 << 0)
#define BBG_OFFSET_INDEX_SEL_11				(3 << 0)
#define BBG_OFFSET_P_TYPE_SEL_00			(0 << 2)
#define BBG_OFFSET_P_TYPE_SEL_01			(1 << 2)
#define BBG_OFFSET_P_TYPE_SEL_10			(2 << 2)
#define BBG_OFFSET_P_TYPE_SEL_11			(3 << 2)
#define BBG_OFFSET_N_TYPE_SEL_00			(0 << 4)
#define BBG_OFFSET_N_TYPE_SEL_01			(1 << 4)
#define BBG_OFFSET_N_TYPE_SEL_10			(2 << 4)
#define BBG_OFFSET_N_TYPE_SEL_11			(3 << 4)
#define BBG_OFFSET_R0_VALID_INV				(1 << 6)
#define BBG_OFFSET_R1_VALID_INV				(1 << 7)
#define BBG_OFFSET_R2_VALID_INV				(1 << 8)
#define BBG_OFFSET_R0_VALID_NAND			(1 << 9)
#define BBG_OFFSET_R1_VALID_NAND			(1 << 10)
#define BBG_OFFSET_R2_VALID_NAND			(1 << 11)
#define BBG_OFFSET_R0_VALID_NOR				(1 << 12)
#define BBG_OFFSET_R1_VALID_NOR				(1 << 13)
#define BBG_OFFSET_R2_VALID_NOR				(1 << 14)
#define BBG_PFREQ_MON_P_FREQ_VALID			(1 << 15)
#define BBG_NFREQ_MON_N_FREQ_VALID			(1 << 15)
#define BBG_TEMP_MON_TEMP_VALID				(1 << 15)
#define BBG_VOLT_MON_VOLT_VALID				(1 << 15)
#define LSI_MODE_STAT_CPUHOLD				(1 << 8)
#define LSI_MODE_STAT_DEBUGEN				(1 << 9)
#define LSI_MODE_STAT_MD_CLKS				(1 << 12)
#define LSI_MODE_STAT_MD_OSCDRV_00			(0 << 14)
#define LSI_MODE_STAT_MD_OSCDRV_01			(1 << 14)
#define LSI_MODE_STAT_MD_OSCDRV_10			(2 << 14)
#define LSI_MODE_STAT_MD_OSCDRV_11			(3 << 14)
#define LSI_MODE_STAT_STAT_SEC_EN			(1 << 16)
#define LSI_PRR_CA55_1CPU					(1 << 0)
#define LSI_PRR_CM33_DIS					(1 << 4)
#define LSI_PRR_GPU_DIS						(1 << 8)
#define LSI_OTPSECEN_SECEN					(1 << 0)
#define LSI_OTPSECMODE_SECBT_SD				(1 << 0)
#define LSI_OTPSECMODE_SECBT_EMMC18			(1 << 1)
#define LSI_OTPSECMODE_SECBT_EMMC33			(1 << 2)
#define LSI_OTPSECMODE_SECBT_SPI18			(1 << 3)
#define LSI_OTPSECMODE_SECBT_SPI33			(1 << 4)
#define LSI_OTPJAM_JAM_00					(0 << 0)
#define LSI_OTPJAM_JAM_01					(1 << 0)
#define LSI_OTPJAM_JAM_10					(2 << 0)
#define LSI_OTPJAM_JAM_11					(3 << 0)
#define LSI_OTPCORE_CA55_FREQ_00			(0 << 0)
#define LSI_OTPCORE_CA55_FREQ_01			(1 << 0)
#define LSI_OTPCORE_CA55_FREQ_10			(2 << 0)
#define LSI_OTPCORE_CA55_FREQ_11			(3 << 0)
#define LSI_OTPPOC_SD_E_00					(0 << 0)
#define LSI_OTPPOC_SD_E_01					(1 << 0)
#define LSI_OTPPOC_SD_E_10					(2 << 0)
#define LSI_OTPPOC_SD_E_11					(3 << 0)
#define LSI_OTPPOC_EMMC18_E_00				(0 << 2)
#define LSI_OTPPOC_EMMC18_E_01				(1 << 2)
#define LSI_OTPPOC_EMMC18_E_10				(2 << 2)
#define LSI_OTPPOC_EMMC18_E_11				(3 << 2)
#define LSI_OTPPOC_EMMC33_E_00				(0 << 4)
#define LSI_OTPPOC_EMMC33_E_01				(1 << 4)
#define LSI_OTPPOC_EMMC33_E_10				(2 << 4)
#define LSI_OTPPOC_EMMC33_E_11				(3 << 4)
#define LSI_OTPPOC_SPI18_E_00				(0 << 6)
#define LSI_OTPPOC_SPI18_E_01				(1 << 6)
#define LSI_OTPPOC_SPI18_E_10				(2 << 6)
#define LSI_OTPPOC_SPI18_E_11				(3 << 6)
#define LSI_OTPPOC_SPI33_E_00				(0 << 8)
#define LSI_OTPPOC_SPI33_E_01				(1 << 8)
#define LSI_OTPPOC_SPI33_E_10				(2 << 8)
#define LSI_OTPPOC_SPI33_E_11				(3 << 8)
#define LSI_OTPPOC_SCIF_E_00				(0 << 10)
#define LSI_OTPPOC_SCIF_E_01				(1 << 10)
#define LSI_OTPPOC_SCIF_E_10				(2 << 10)
#define LSI_OTPPOC_SCIF_E_11				(3 << 10)
#define LP_CTL0_MAIN_CPU					(1 << 0)
#define LP_CTL1_STBY						(1 << 0)
#define LP_CTL1_CA55SLEEP_REQ_00			(0 << 8)
#define LP_CTL1_CA55SLEEP_REQ_01			(1 << 8)
#define LP_CTL1_CA55SLEEP_REQ_10			(2 << 8)
#define LP_CTL1_CA55SLEEP_REQ_11			(3 << 8)
#define LP_CTL1_CM33SLEEP_REQ				(1 << 12)
#define LP_CTL1_STBY_CA55ST					(1 << 16)
#define LP_CTL1_STBY_CM33ST					(1 << 17)
#define LP_CTL1_CA55SLEEP_ACK_00			(0 << 24)
#define LP_CTL1_CA55SLEEP_ACK_01			(1 << 24)
#define LP_CTL1_CA55SLEEP_ACK_10			(2 << 24)
#define LP_CTL1_CA55SLEEP_ACK_11			(3 << 24)
#define LP_CTL1_CM33SLEEP_ACK				(1 << 28)
#define LP_CTL2_CA55_STBYCTL				(1 << 0)
#define LP_CTL3_U0DP_F						(1 << 0)
#define LP_CTL3_U0DM_F						(1 << 1)
#define LP_CTL3_U0VBUSIN_F					(1 << 2)
#define LP_CTL3_U0OVRCLR_F					(1 << 3)
#define LP_CTL3_U1DP_F						(1 << 8)
#define LP_CTL3_U1DM_F						(1 << 9)
#define LP_CTL3_U1OVRCLR_F					(1 << 11)
#define LP_CTL3_NMI_F						(1 << 24)
#define LP_CTL4_U0DP_E						(1 << 0)
#define LP_CTL4_U0DM_E						(1 << 1)
#define LP_CTL4_U0VBUSIN_E					(1 << 2)
#define LP_CTL4_U0OVRCLR_E					(1 << 3)
#define LP_CTL4_U1DP_E						(1 << 8)
#define LP_CTL4_U1DM_E						(1 << 9)
#define LP_CTL4_U1OVRCLR_E					(1 << 11)
#define LP_CTL4_IRQ_E0						(1 << 16)
#define LP_CTL4_IRQ_E1						(1 << 17)
#define LP_CTL4_IRQ_E2						(1 << 18)
#define LP_CTL4_IRQ_E3						(1 << 19)
#define LP_CTL4_IRQ_E4						(1 << 20)
#define LP_CTL4_IRQ_E5						(1 << 21)
#define LP_CTL4_IRQ_E6						(1 << 22)
#define LP_CTL4_IRQ_E7						(1 << 23)
#define LP_CTL4_NMI_E						(1 << 24)
#define LP_CTL5_Q4_DENY_F					(1 << 0)
#define LP_CTL5_Q9_DENY_F					(1 << 1)
#define LP_CTL5_Q10_DENY_F					(1 << 2)
#define LP_CTL5_STBY_F						(1 << 4)
#define LP_CTL5_CA55SLEEP0_F				(1 << 8)
#define LP_CTL5_CA55SLEEP1_F				(1 << 9)
#define LP_CTL5_CM33SLEEP_F					(1 << 10)
#define LP_CTL5_CA55STBYDONE_F				(1 << 16)
#define LP_CTL5_CM33STBYR_F					(1 << 20)
#define LP_CTL6_Q4_DENY_E					(1 << 0)
#define LP_CTL6_Q9_DENY_E					(1 << 1)
#define LP_CTL6_Q10_DENY_E					(1 << 2)
#define LP_CTL6_STBY_E						(1 << 4)
#define LP_CTL6_CA55STBYDONE_E				(1 << 5)
#define LP_CTL6_CM33STBYR_E					(1 << 6)
#define LP_CTL6_CA55SLEEP0_E				(1 << 8)
#define LP_CTL6_CA55SLEEP1_E				(1 << 9)
#define LP_CTL6_CM33SLEEP_E					(1 << 10)
#define LP_CTL7_IM33_MASK					(1 << 0)
#define LP_CTL8_SUBCPU_RTRIG				(1 << 0)
#define LP_CM33CTL0_SLEEPING				(1 << 0)
#define LP_CM33CTL0_SLEEPDEEP				(1 << 4)
#define LP_CM33CTL0_WAKEUP					(1 << 8)
#define LP_CM33CTL0_SYSRESETREQ				(1 << 9)
#define LP_CM33CTL0_SLEEPHOLDREQn			(1 << 16)
#define LP_CM33CTL0_SLEEPHOLDACKn			(1 << 17)
#define LP_CM33CTL0_WICENREQ				(1 << 24)
#define LP_CM33CTL0_WICENACK				(1 << 25)
#define LP_CM33CTL1_COREQACTIVE				(1 << 0)
#define LP_CM33CTL1_DBGQACTIVE				(1 << 4)
#define LP_CM33CTL1_COREQREQn				(1 << 8)
#define LP_CM33CTL1_DBGQREQn				(1 << 12)
#define LP_CM33CTL1_COREQACCEPTn			(1 << 16)
#define LP_CM33CTL1_QDBGACCEPTn				(1 << 20)
#define LP_CM33CTL1_COREQDENY				(1 << 24)
#define LP_CM33CTL1_DBGQDENY				(1 << 28)
#define LP_CA55CK_CTL1_QACTIVE_Q_CLK_SLV	(1 << 1)
#define LP_CA55CK_CTL1_QACTIVE_Q_CLK_MST	(1 << 2)
#define LP_CA55CK_CTL1_PCLKQACTIVE			(1 << 8)
#define LP_CA55CK_CTL1_ATCLKQACTIVE			(1 << 9)
#define LP_CA55CK_CTL1_GICCLKQACTIVE		(1 << 10)
#define LP_CA55CK_CTL1_PDBGCLKQACTIVE		(1 << 11)
#define LP_CA55CK_CTL2_QREQn_Q_CLK_SLV		(1 << 1)
#define LP_CA55CK_CTL2_QREQn_Q_CLK_MST		(1 << 2)
#define LP_CA55CK_CTL2_PCLKQREQn			(1 << 8)
#define LP_CA55CK_CTL2_ATCLKQREQn			(1 << 9)
#define LP_CA55CK_CTL2_GICCLKQREQn			(1 << 10)
#define LP_CA55CK_CTL2_PDBGCLKQREQn			(1 << 11)
#define LP_CA55CK_CTL3_SCLKQACCEPTn			(1 << 0)
#define LP_CA55CK_CTL3_QACCEPTn_Q_CLK_SLV	(1 << 1)
#define LP_CA55CK_CTL3_QACCEPTn_Q_CLK_MST	(1 << 2)
#define LP_CA55CK_CTL3_PCLKQACCEPTn			(1 << 8)
#define LP_CA55CK_CTL3_ATCLKQACCEPTn		(1 << 9)
#define LP_CA55CK_CTL3_GICCLKQACCEPTn		(1 << 10)
#define LP_CA55CK_CTL3_PDBGCLKQACCEPTn		(1 << 11)
#define LP_CA55CK_CTL3_SCLKQDENY			(1 << 16)
#define LP_CA55CK_CTL3_QDENY_Q_CLK_SLV		(1 << 17)
#define LP_CA55CK_CTL3_QDENY_Q_CLK_MST		(1 << 18)
#define LP_CA55CK_CTL3_PCLKQDENY			(1 << 24)
#define LP_CA55CK_CTL3_ATCLKQDENY			(1 << 25)
#define LP_CA55CK_CTL3_GICCLKQDENY			(1 << 26)
#define LP_CA55CK_CTL3_PDBGCLKQDENY			(1 << 27)
#define LP_GPU_CTL_QACTIVE_GPU				(1 << 0)
#define LP_GPU_CTL_QACTIVE_AXI_SLV			(1 << 1)
#define LP_GPU_CTL_QACTIVE_AXI_MST			(1 << 2)
#define LP_GPU_CTL_QACTIVE_ACE_SLV			(1 << 3)
#define LP_GPU_CTL_QACTIVE_ACE_MST			(1 << 4)
#define LP_GPU_CTL_QREQn_GPU				(1 << 8)
#define LP_GPU_CTL_QREQn_AXI_SLV			(1 << 9)
#define LP_GPU_CTL_QREQn_AXI_MST			(1 << 10)
#define LP_GPU_CTL_QREQn_ACE_SLV			(1 << 11)
#define LP_GPU_CTL_QREQn_ACE_MST			(1 << 12)
#define LP_GPU_CTL_QACCEPTn_GPU				(1 << 16)
#define LP_GPU_CTL_QACCEPTn_AXI_SLV			(1 << 17)
#define LP_GPU_CTL_QACCEPTn_AXI_MST			(1 << 18)
#define LP_GPU_CTL_QACCEPTn_ACE_SLV			(1 << 19)
#define LP_GPU_CTL_QACCEPTn_ACE_MST			(1 << 20)
#define LP_GPU_CTL_QDENY_GPU				(1 << 24)
#define LP_GPU_CTL_QDENY_AXI_SLV			(1 << 25)
#define LP_GPU_CTL_QDENY_AXI_MST			(1 << 26)
#define LP_GPU_CTL_QDENY_ACE_SLV			(1 << 27)
#define LP_GPU_CTL_QDENY_ACE_MST			(1 << 28)

#endif	/* __RZF_DEV_SYS_REGS_H__ */
