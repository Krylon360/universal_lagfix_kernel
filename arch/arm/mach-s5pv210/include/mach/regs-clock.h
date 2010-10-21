/* linux/arch/arm/mach-s5pv210/include/mach/regs-clock.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_REGS_CLOCK_H
#define __ASM_ARCH_REGS_CLOCK_H __FILE__

#include <mach/map.h>

#define S5P_CLKREG(x)		(S3C_VA_SYS + (x))

#define S5P_IECREG(x)		(S5PC11X_VA_IEC + (x))
#define S5P_APCREG(x)		(S5PC11X_VA_APC + (x))

#define S5P_APLL_LOCK		S5P_CLKREG(0x00)
#define S5P_MPLL_LOCK		S5P_CLKREG(0x08)
#define S5P_EPLL_LOCK		S5P_CLKREG(0x10)
#define S5P_VPLL_LOCK		S5P_CLKREG(0x20)

#define S5P_APLL_CON		S5P_CLKREG(0x100)
#define S5P_MPLL_CON		S5P_CLKREG(0x108)
#define S5P_EPLL_CON		S5P_CLKREG(0x110)
#define S5P_EPLL_CON_K		S5P_CLKREG(0x114)
#define S5P_VPLL_CON		S5P_CLKREG(0x120)

#define S5P_CLK_SRC0		S5P_CLKREG(0x200)
#define S5P_CLK_SRC1		S5P_CLKREG(0x204)
#define S5P_CLK_SRC2		S5P_CLKREG(0x208)
#define S5P_CLK_SRC3		S5P_CLKREG(0x20C)
#define S5P_CLK_SRC4		S5P_CLKREG(0x210)
#define S5P_CLK_SRC5		S5P_CLKREG(0x214)
#define S5P_CLK_SRC6		S5P_CLKREG(0x218)

#define S5P_CLK_SRC_MASK0	S5P_CLKREG(0x280)
#define S5P_CLK_SRC_MASK1	S5P_CLKREG(0x284)

#define S5P_CLK_DIV0		S5P_CLKREG(0x300)
#define S5P_CLK_DIV1		S5P_CLKREG(0x304)
#define S5P_CLK_DIV2		S5P_CLKREG(0x308)
#define S5P_CLK_DIV3		S5P_CLKREG(0x30C)
#define S5P_CLK_DIV4		S5P_CLKREG(0x310)
#define S5P_CLK_DIV5		S5P_CLKREG(0x314)
#define S5P_CLK_DIV6		S5P_CLKREG(0x318)
#define S5P_CLK_DIV7		S5P_CLKREG(0x31C)

#define S5P_CLKGATE_MAIN0	S5P_CLKREG(0x400)
#define S5P_CLKGATE_MAIN1	S5P_CLKREG(0x404)
#define S5P_CLKGATE_MAIN2	S5P_CLKREG(0x408)

#define S5P_CLKGATE_PERI0	S5P_CLKREG(0x420)
#define S5P_CLKGATE_PERI1	S5P_CLKREG(0x424)

#define S5P_CLKGATE_SCLK0	S5P_CLKREG(0x440)
#define S5P_CLKGATE_SCLK1	S5P_CLKREG(0x444)
#define S5P_CLKGATE_IP0		S5P_CLKREG(0x460)
#define S5P_CLKGATE_IP1		S5P_CLKREG(0x464)
#define S5P_CLKGATE_IP2		S5P_CLKREG(0x468)
#define S5P_CLKGATE_IP3		S5P_CLKREG(0x46C)
#define S5P_CLKGATE_IP4		S5P_CLKREG(0x470)

#define S5P_CLKGATE_BLOCK	S5P_CLKREG(0x480)
#if defined(CONFIG_CPU_S5PV210_EVT1)
#define S5P_CLKGATE_IP5		S5P_CLKREG(0x484)
#else
#define S5P_CLKGATE_BUS0	S5P_CLKREG(0x484)
#define S5P_CLKGATE_BUS1	S5P_CLKREG(0x488)
#endif
#define S5P_CLK_OUT		S5P_CLKREG(0x500)

#define S5P_CLK_DIV_STAT0	S5P_CLKREG(0x1000)
#define S5P_CLK_DIV_STAT1 	S5P_CLKREG(0x1004)
#define S5P_CLK_MUX_STAT0	S5P_CLKREG(0x1100)
#define S5P_CLK_MUX_STAT1	S5P_CLKREG(0x1104)

#define S5P_ARM_MCS		S5P_CLKREG(0x6100)

#define S5P_MIXER_OUT_SEL	S5P_CLKREG(0x7004)
#define S5P_MDNIE_SEL		S5P_CLKREG(0x7008)

#define S5P_EPLL_EN     (1<<31)
#define S5P_EPLL_MASK   0xffffffff 
#define S5P_EPLLVAL(_v,_m,_p,_s)   ((_v) << 27 | (_m) << 16 | ((_p) << 8) | ((_s)))

#define S5P_EPLL_MASK_VSEL		(0x1<<27)
#define S5P_EPLL_MASK_M			(0x1FF<<16)
#define S5P_EPLL_MASK_P			(0x3F<<8)
#define S5P_EPLL_MASK_S			(0x3<<0)

/* CLKSRC0 */
#define S5P_CLKSRC0_APLL_MASK		(0x1<<0)
#define S5P_CLKSRC0_APLL_SHIFT		(0)
#define S5P_CLKSRC0_MPLL_MASK		(0x1<<4)
#define S5P_CLKSRC0_MPLL_SHIFT		(4)
#define S5P_CLKSRC0_EPLL_MASK		(0x1<<8)
#define S5P_CLKSRC0_EPLL_SHIFT		(8)
#define S5P_CLKSRC0_VPLL_MASK		(0x1<<12)
#define S5P_CLKSRC0_VPLL_SHIFT		(12)
#define S5P_CLKSRC0_MUX200_MASK		(0x1<<16)
#define S5P_CLKSRC0_MUX200_SHIFT	(16)
#define S5P_CLKSRC0_MUX166_MASK		(0x1<<20)
#define S5P_CLKSRC0_MUX166_SHIFT	(20)
#define S5P_CLKSRC0_MUX133_MASK		(0x1<<24)
#define S5P_CLKSRC0_MUX133_SHIFT	(24)
#define S5P_CLKSRC0_ONENAND_MASK	(0x1<<28)
#define S5P_CLKSRC0_ONENAND_SHIFT	(28)

/* CLKSRC1 */
#define S5P_CLKSRC1_HDMI_MASK		(0x1<<0)
#define S5P_CLKSRC1_HDMI_SHIFT		(0)
#define S5P_CLKSRC1_MIXER_MASK		(0x1<<4)
#define S5P_CLKSRC1_MIXER_SHIFT		(4)
#define S5P_CLKSRC1_DAC_MASK		(0x1<<8)
#define S5P_CLKSRC1_DAC_SHIFT		(8)
#define S5P_CLKSRC1_CAM0_MASK		(0xF<<12)
#define S5P_CLKSRC1_CAM0_SHIFT		(12)
#define S5P_CLKSRC1_CAM1_MASK		(0xF<<16)
#define S5P_CLKSRC1_CAM1_SHIFT		(16)
#define S5P_CLKSRC1_FIMD_MASK		(0xF<<20)
#define S5P_CLKSRC1_FIMD_SHIFT		(20)
#define S5P_CLKSRC1_CSIS_MASK		(0xF<<24)
#define S5P_CLKSRC1_CSIS_SHIFT		(24)
#define S5P_CLKSRC1_VPLLSRC_MASK	(0x1<<28)
#define S5P_CLKSRC1_VPLLSRC_SHIFT	(28)

/* CLKSRC2 */
#define S5P_CLKSRC2_G3D_MASK		(0x3<<0)
#define S5P_CLKSRC2_G3D_SHIFT		(0)
#define S5P_CLKSRC2_MFC_MASK		(0x3<<4)
#define S5P_CLKSRC2_MFC_SHIFT		(4)
#define S5P_CLKSRC2_G2D_MASK		(0x3<<8)
#define S5P_CLKSRC2_G2D_SHIFT		(8)

/* CLKSRC3 */
#define S5P_CLKSRC3_MDNIE_MASK		(0xF<<0)
#define S5P_CLKSRC3_MDNIE_SHIFT		(0)
#define S5P_CLKSRC3_MDINE_PWMCLK_MASK	(0xF<<4)
#define S5P_CLKSRC3_MDINE_PWMCLK_SHIFT	(4)
#define S5P_CLKSRC3_FIMC0_LCLK_MASK	(0xF<<12)
#define S5P_CLKSRC3_FIMC0_LCLK_SHIFT	(12)
#define S5P_CLKSRC3_FIMC1_LCLK_MASK	(0xF<<16)
#define S5P_CLKSRC3_FIMC1_LCLK_SHIFT	(16)
#define S5P_CLKSRC3_FIMC2_LCLK_MASK	(0xF<<20)
#define S5P_CLKSRC3_FIMC2_LCLK_SHIFT	(20)

/* CLKSRC4 */
#define S5P_CLKSRC4_MMC0_MASK		(0xF<<0)
#define S5P_CLKSRC4_MMC0_SHIFT		(0)
#define S5P_CLKSRC4_MMC1_MASK		(0xF<<4)
#define S5P_CLKSRC4_MMC1_SHIFT		(4)
#define S5P_CLKSRC4_MMC2_MASK		(0xF<<8)
#define S5P_CLKSRC4_MMC2_SHIFT		(8)
#define S5P_CLKSRC4_MMC3_MASK		(0xF<<12)
#define S5P_CLKSRC4_MMC3_SHIFT		(12)
#define S5P_CLKSRC4_UART0_MASK		(0xF<<16)
#define S5P_CLKSRC4_UART0_SHIFT		(16)
#define S5P_CLKSRC4_UART1_MASK		(0xF<<20)
#define S5P_CLKSRC4_UART1_SHIFT		(20)
#define S5P_CLKSRC4_UART2_MASK		(0xF<<24)
#define S5P_CLKSRC4_UART2_SHIFT		(24)
#define S5P_CLKSRC4_UART3_MASK		(0xF<<28)
#define S5P_CLKSRC4_UART3_SHIFT		(28)

/* CLKSRC5 */
#define S5P_CLKSRC5_SPI0_MASK		(0xF<<0)
#define S5P_CLKSRC5_SPI0_SHIFT		(0)
#define S5P_CLKSRC5_SPI1_MASK		(0xF<<4)
#define S5P_CLKSRC5_SPI1_SHIFT		(4)
#define S5P_CLKSRC5_SPI2_MASK		(0xF<<8)
#define S5P_CLKSRC5_SPI2_SHIFT		(8)
#define S5P_CLKSRC5_PWM_MASK		(0xF<<12)
#define S5P_CLKSRC5_PWM_SHIFT		(12)

/* CLKSRC6 */
#define S5P_CLKSRC6_AUDIO0_MASK		(0xF<<0)
#define S5P_CLKSRC6_AUDIO0_SHIFT	(0)
#define S5P_CLKSRC6_AUDIO1_MASK		(0xF<<4)
#define S5P_CLKSRC6_AUDIO1_SHIFT	(4)
#define S5P_CLKSRC6_AUDIO2_MASK		(0xF<<8)
#define S5P_CLKSRC6_AUDIO2_SHIFT	(8)
#define S5P_CLKSRC6_SPDIF_MASK		(0x3<<12)
#define S5P_CLKSRC6_SPDIF_SHIFT		(12)
#define S5P_CLKSRC6_HPM_MASK		(0x1<<16)
#define S5P_CLKSRC6_HPM_SHIFT		(16)
#define S5P_CLKSRC6_PWI_MASK		(0xF<<20)
#define S5P_CLKSRC6_PWI_SHIFT		(20)
#define S5P_CLKSRC6_ONEDRAM_MASK	(0x3<<24)
#define S5P_CLKSRC6_ONEDRAM_SHIFT	(24)

/* CLKSRC_MASK0 */
#define S5P_CLKSRC_MASK0_HDMI		(1<<0)
#define S5P_CLKSRC_MASK0_MIXER		(1<<1)
#define S5P_CLKSRC_MASK0_DAC		(1<<2)
#define S5P_CLKSRC_MASK0_CAM0		(1<<3)
#define S5P_CLKSRC_MASK0_CAM1		(1<<4)
#define S5P_CLKSRC_MASK0_FIMD		(1<<5)
#define S5P_CLKSRC_MASK0_CSIS		(1<<6)
#define S5P_CLKSRC_MASK0_FINVPLL	(1<<7)
#define S5P_CLKSRC_MASK0_MMC0		(1<<8)
#define S5P_CLKSRC_MASK0_MMC1		(1<<9)
#define S5P_CLKSRC_MASK0_MMC2		(1<<10)
#define S5P_CLKSRC_MASK0_MMC3		(1<<11)
#define S5P_CLKSRC_MASK0_UART0		(1<<12)
#define S5P_CLKSRC_MASK0_UART1		(1<<13)
#define S5P_CLKSRC_MASK0_UART2		(1<<14)
#define S5P_CLKSRC_MASK0_UART3		(1<<15)
#define S5P_CLKSRC_MASK0_SPI0		(1<<16)
#define S5P_CLKSRC_MASK0_SPI1		(1<<17)
#define S5P_CLKSRC_MASK0_SPI2		(1<<18)
#define S5P_CLKSRC_MASK0_PWM		(1<<19)
#define S5P_CLKSRC_MASK0_AUDIO0		(1<<24)
#define S5P_CLKSRC_MASK0_AUDIO1		(1<<25)
#define S5P_CLKSRC_MASK0_AUDIO2		(1<<26)
#define S5P_CLKSRC_MASK0_SPDIF		(0x1<<27)
 
/* CLKSRC_MASK1 */
#define S5P_CLKSRC_MASK1_MDNIE		(1<<0)
#define S5P_CLKSRC_MASK1_MDNIE_PWM	(1<<1)
#define S5P_CLKSRC_MASK1_FIMC0_LCLK	(1<<2)
#define S5P_CLKSRC_MASK1_FIMC1_LCLK	(1<<3)
#define S5P_CLKSRC_MASK1_FIMC2_LCLK	(1<<4)


/* CLKDIV0 */
#define S5P_CLKDIV0_APLL_SHIFT		(0)
#define S5P_CLKDIV0_APLL_MASK		(0x7 << S5P_CLKDIV0_APLL_SHIFT)
#define S5P_CLKDIV0_A2M_SHIFT		(4)
#define S5P_CLKDIV0_A2M_MASK		(0x7 << S5P_CLKDIV0_A2M_SHIFT)
#define S5P_CLKDIV0_HCLK200_SHIFT	(8)
#define S5P_CLKDIV0_HCLK200_MASK	(0x7 << S5P_CLKDIV0_HCLK200_SHIFT)
#define S5P_CLKDIV0_PCLK100_SHIFT	(12)
#define S5P_CLKDIV0_PCLK100_MASK	(0x7 << S5P_CLKDIV0_PCLK100_SHIFT)
#define S5P_CLKDIV0_HCLK166_SHIFT	(16)
#define S5P_CLKDIV0_HCLK166_MASK	(0xF << S5P_CLKDIV0_HCLK166_SHIFT)
#define S5P_CLKDIV0_PCLK83_SHIFT	(20)
#define S5P_CLKDIV0_PCLK83_MASK		(0x7 << S5P_CLKDIV0_PCLK83_SHIFT)
#define S5P_CLKDIV0_HCLK133_SHIFT	(24)
#define S5P_CLKDIV0_HCLK133_MASK	(0xF << S5P_CLKDIV0_HCLK133_SHIFT)
#define S5P_CLKDIV0_PCLK66_SHIFT	(28)
#define S5P_CLKDIV0_PCLK66_MASK		(0x7 << S5P_CLKDIV0_PCLK66_SHIFT)


/* CLKDIV1 */
#define S5P_CLKDIV1_TBLK_MASK		(0xF<<0)
#define S5P_CLKDIV1_TBLK_SHIFT		(0)
#define S5P_CLKDIV1_FIMC_MASK		(0xF<<8)
#define S5P_CLKDIV1_FIMC_SHIFT		(8)
#define S5P_CLKDIV1_CAM0_MASK		(0xF<<12)
#define S5P_CLKDIV1_CAM0_SHIFT		(12)
#define S5P_CLKDIV1_CAM1_MASK		(0xF<<16)
#define S5P_CLKDIV1_CAM1_SHIFT		(16)
#define S5P_CLKDIV1_FIMD_MASK		(0xF<<20)
#define S5P_CLKDIV1_FIMD_SHIFT		(20)
#define S5P_CLKDIV1_CSIS_MASK		(0xF<<28)
#define S5P_CLKDIV1_CSIS_SHIFT		(28)

/* CLKDIV2 */
#define S5P_CLKDIV2_G3D_MASK		(0xF<<0)
#define S5P_CLKDIV2_G3D_SHIFT		(0)
#define S5P_CLKDIV2_MFC_MASK		(0xF<<4)
#define S5P_CLKDIV2_MFC_SHIFT		(4)
#define S5P_CLKDIV2_G2D_MASK		(0xF<<8)
#define S5P_CLKDIV2_G2D_SHIFT		(8)

/* CLKDIV3 */
#define S5P_CLKDIV3_MDINE_MASK		(0xf<<0)
#define S5P_CLKDIV3_MDINE_SHIFT		(0)
#define S5P_CLKDIV3_MDINE_PWM_MASK	(0x3f<<4)
#define S5P_CLKDIV3_MDINE_PWM_SHIFT	(4)
#define S5P_CLKDIV3_FIMC0_LCLK_MASK	(0xf<<12)
#define S5P_CLKDIV3_FIMC0_LCLK_SHIFT	(12)
#define S5P_CLKDIV3_FIMC1_LCLK_MASK	(0xf<<16)
#define S5P_CLKDIV3_FIMC1_LCLK_SHIFT	(16)
#define S5P_CLKDIV3_FIMC2_LCLK_MASK	(0xf<<20)
#define S5P_CLKDIV3_FIMC2_LCLK_SHIFT	(20)

/* CLKDIV4 */
#define S5P_CLKDIV4_MMC0_MASK		(0xF<<0)
#define S5P_CLKDIV4_MMC0_SHIFT		(0)
#define S5P_CLKDIV4_MMC1_MASK		(0xF<<4)
#define S5P_CLKDIV4_MMC1_SHIFT		(4)
#define S5P_CLKDIV4_MMC2_MASK		(0xF<<8)
#define S5P_CLKDIV4_MMC2_SHIFT		(8)
#define S5P_CLKDIV4_MMC3_MASK		(0xF<<12)
#define S5P_CLKDIV4_MMC3_SHIFT		(12)
#define S5P_CLKDIV4_UART0_MASK		(0xF<<16)
#define S5P_CLKDIV4_UART0_SHIFT		(16)
#define S5P_CLKDIV4_UART1_MASK		(0xf<<20)
#define S5P_CLKDIV4_UART1_SHIFT		(20)
#define S5P_CLKDIV4_UART2_MASK		(0xf<<24)
#define S5P_CLKDIV4_UART2_SHIFT		(24)
#define S5P_CLKDIV4_UART3_MASK		(0xf<<28)
#define S5P_CLKDIV4_UART3_SHIFT		(28)

/* CLKDIV5 */
#define S5P_CLKDIV5_SPI0_MASK		(0xF<<0)
#define S5P_CLKDIV5_SPI0_SHIFT		(0)
#define S5P_CLKDIV5_SPI1_MASK		(0xF<<4)
#define S5P_CLKDIV5_SPI1_SHIFT		(4)
#define S5P_CLKDIV5_SPI2_MASK		(0xF<<8)
#define S5P_CLKDIV5_SPI2_SHIFT		(8)
#define S5P_CLKDIV5_PWM_MASK		(0xF<<12)
#define S5P_CLKDIV5_PWM_SHIFT		(12)

/* CLKDIV6 */
#define S5P_CLKDIV6_AUDIO0_MASK		(0xF<<0)
#define S5P_CLKDIV6_AUDIO0_SHIFT	(0)
#define S5P_CLKDIV6_AUDIO1_MASK		(0xF<<4)
#define S5P_CLKDIV6_AUDIO1_SHIFT	(4)
#define S5P_CLKDIV6_AUDIO2_MASK		(0xF<<8)
#define S5P_CLKDIV6_AUDIO2_SHIFT	(8)
#define S5P_CLKDIV6_ONENAND_MASK	(0x7<<12)
#define S5P_CLKDIV6_ONENAND_SHIFT	(12)
#define S5P_CLKDIV6_COPY_MASK		(0x7<<16)
#define S5P_CLKDIV6_COPY_SHIFT		(16)
#define S5P_CLKDIV6_HPM_MASK		(0x7<<20)
#define S5P_CLKDIV6_HPM_SHIFT		(20)
#define S5P_CLKDIV6_PWI_MASK		(0xf<<24)
#define S5P_CLKDIV6_PWI_SHIFT		(24)
#define S5P_CLKDIV6_ONEDRAM_MASK	(0xf<<28)
#define S5P_CLKDIV6_ONEDRAM_SHIFT	(28)

/* Special Clock Gate Registers */
#define	S5P_CLKGATE_SCLK_FIMC_LCLK	(1<<5)

/* IP Clock Gate 0 Registers */
#define S5P_CLKGATE_IP0_CSIS		(1<<31)	
#define S5P_CLKGATE_IP0_IPC		(1<<30)
#define S5P_CLKGATE_IP0_ROTATOR		(1<<29)
#define S5P_CLKGATE_IP0_JPEG		(1<<28)
#define S5P_CLKGATE_IP0_FIMC2		(1<<26)
#define S5P_CLKGATE_IP0_FIMC1		(1<<25)
#define S5P_CLKGATE_IP0_FIMC0		(1<<24)
#define S5P_CLKGATE_IP0_MFC		(1<<16)
#define S5P_CLKGATE_IP0_G2D		(1<<12)
#define S5P_CLKGATE_IP0_G3D		(1<<8)
#define S5P_CLKGATE_IP0_IMEM		(1<<5)
#define S5P_CLKGATE_IP0_PDMA1		(1<<4)
#define S5P_CLKGATE_IP0_PDMA0		(1<<3)
#define S5P_CLKGATE_IP0_MDMA		(1<<2)
#define S5P_CLKGATE_IP0_DMC1		(1<<1)
#define S5P_CLKGATE_IP0_DMC0		(1<<0)

/* IP Clock Gate 1 Registers */
#define S5P_CLKGATE_IP1_NFCON		(1<<28)	
#define S5P_CLKGATE_IP1_SROMC		(1<<26)
#define S5P_CLKGATE_IP1_CFCON		(1<<25)
#define S5P_CLKGATE_IP1_NANDXL		(1<<24)
#define S5P_CLKGATE_IP1_USBHOST		(1<<17)
#define S5P_CLKGATE_IP1_USBOTG		(1<<16)
#define S5P_CLKGATE_IP1_HDMI		(1<<11)
#define S5P_CLKGATE_IP1_TVENC		(1<<10)
#define S5P_CLKGATE_IP1_MIXER		(1<<9)
#define S5P_CLKGATE_IP1_VP		(1<<8)
#define S5P_CLKGATE_IP1_DSIM		(1<<2)
#define S5P_CLKGATE_IP1_MIE		(1<<1)
#define S5P_CLKGATE_IP1_FIMD		(1<<0)

/* IP Clock Gate 2 Registers */
#define S5P_CLKGATE_IP2_TZIC3		(1<<31)	
#define S5P_CLKGATE_IP2_TZIC2		(1<<30)
#define S5P_CLKGATE_IP2_TZIC1		(1<<29)
#define S5P_CLKGATE_IP2_TZIC0		(1<<28)
#define S5P_CLKGATE_IP2_VIC3		(1<<27)
#define S5P_CLKGATE_IP2_VIC2		(1<<26)
#define S5P_CLKGATE_IP2_VIC1		(1<<25)
#define S5P_CLKGATE_IP2_VIC0		(1<<24)
#define S5P_CLKGATE_IP2_TSI		(1<<20)
#define S5P_CLKGATE_IP2_HSMMC3		(1<<19)
#define S5P_CLKGATE_IP2_HSMMC2		(1<<18)
#define S5P_CLKGATE_IP2_HSMMC1		(1<<17)
#define S5P_CLKGATE_IP2_HSMMC0		(1<<16)
#define S5P_CLKGATE_IP2_SECJTAG		(1<<11)
#define S5P_CLKGATE_IP2_HOSTIF		(1<<10)
#define S5P_CLKGATE_IP2_MODEM		(1<<9)
#define S5P_CLKGATE_IP2_CORESIGHT	(1<<8)
#define S5P_CLKGATE_IP2_SDM		(1<<1)
#define S5P_CLKGATE_IP2_SECSS		(1<<0)

/* IP Clock Gate 3 Registers */
#define S5P_CLKGATE_IP3_PCM2		(1<<30)
#define S5P_CLKGATE_IP3_PCM1		(1<<29)
#define S5P_CLKGATE_IP3_PCM0		(1<<28)
#define S5P_CLKGATE_IP3_SYSCON		(1<<27)
#define S5P_CLKGATE_IP3_GPIO		(1<<26)
#define S5P_CLKGATE_IP3_TSADC		(1<<24)
#define S5P_CLKGATE_IP3_PWM		(1<<23)
#define S5P_CLKGATE_IP3_WDT		(1<<22)
#define S5P_CLKGATE_IP3_KEYIF		(1<<21)
#define S5P_CLKGATE_IP3_UART3		(1<<20)
#define S5P_CLKGATE_IP3_UART2		(1<<19)
#define S5P_CLKGATE_IP3_UART1		(1<<18)
#define S5P_CLKGATE_IP3_UART0		(1<<17)
#define S5P_CLKGATE_IP3_SYSTIMER	(1<<16)
#define S5P_CLKGATE_IP3_RTC		(1<<15)
#define S5P_CLKGATE_IP3_SPI2		(1<<14)
#define S5P_CLKGATE_IP3_SPI1		(1<<13)
#define S5P_CLKGATE_IP3_SPI0		(1<<12)
#define S5P_CLKGATE_IP3_I2C_HDMI_PHY	(1<<11)
#define S5P_CLKGATE_IP3_I2C_HDMI_DDC	(1<<10)
#define S5P_CLKGATE_IP3_I2C2		(1<<9)
#define S5P_CLKGATE_IP3_I2C1		(1<<8)
#define S5P_CLKGATE_IP3_I2C0		(1<<7)
#define S5P_CLKGATE_IP3_I2S2		(1<<6)
#define S5P_CLKGATE_IP3_I2S1		(1<<5)
#define S5P_CLKGATE_IP3_I2S0		(1<<4)	
#define S5P_CLKGATE_IP3_AC97		(1<<1)
#define S5P_CLKGATE_IP3_SPDIF		(1<<0)

/* IP Clock Gate 4 Registers */
#define S5P_CLKGATE_IP4_TZPC3		(1<<8)
#define S5P_CLKGATE_IP4_TZPC2		(1<<7)
#define S5P_CLKGATE_IP4_TZPC1		(1<<6)
#define S5P_CLKGATE_IP4_TZPC0		(1<<5)
#define S5P_CLKGATE_IP4_SECKEY		(1<<3)
#define S5P_CLKGATE_IP4_IEM_APC		(1<<2)
#define S5P_CLKGATE_IP4_IEM_IEC		(1<<1)
#define S5P_CLKGATE_IP4_CHIP_ID		(1<<0)

/* Block Clock Gate Registers */
#define S5P_CLKGATE_BLOCK_INTC		(1<<10)
#define S5P_CLKGATE_BLOCK_HSMMC		(1<<9)
#define S5P_CLKGATE_BLOCK_DEBUG		(1<<8)
#define S5P_CLKGATE_BLOCK_SECURITY	(1<<7)
#define S5P_CLKGATE_BLOCK_MEMORY	(1<<6)
#define S5P_CLKGATE_BLOCK_USB		(1<<5)
#define S5P_CLKGATE_BLOCK_TV		(1<<4)
#define S5P_CLKGATE_BLOCK_LCD		(1<<3)
#define S5P_CLKGATE_BLOCK_IMG		(1<<2)
#define S5P_CLKGATE_BLOCK_MFC		(1<<1)
#define S5P_CLKGATE_BLOCK_G3D		(1<<0)

/* IP Clock Gate 5 Registers */
#define S5P_CLKGATE_IP5_JPEG		(1<<29)


/* Bus Clock Gate Registers (hidden) */

/* register for EINT on PM Driver */
#define S5P_APM_REG(x)          ((x) + 0xE0200C00)

#define S5P_APM_BASE            S5P_APM_REG(0x000)

#define S5P_APM_GPH0CON         (0x000)
#define S5P_APM_GPH0DAT         (0x004)
#define S5P_APM_GPH0PUD         (0x008)
#define S5P_APM_GPH0DRV         (0x00C)
#define S5P_APM_GPH1CON         (0x020)
#define S5P_APM_GPH1DAT         (0x024)
#define S5P_APM_GPH1PUD         (0x028)
#define S5P_APM_GPH1DRV         (0x02C)
#define S5P_APM_GPH2CON         (0x040)
#define S5P_APM_GPH2DAT         (0x044)
#define S5P_APM_GPH2PUD         (0x048)
#define S5P_APM_GPH2DRV         (0x04C)
#define S5P_APM_GPH3CON         (0x060)
#define S5P_APM_GPH3DAT         (0x064)
#define S5P_APM_GPH3PUD         (0x068)
#define S5P_APM_GPH3DRV         (0x06C)
#define S5P_APM_WEINT0_CON      (0x200)
#define S5P_APM_WEINT1_CON      (0x204)
#define S5P_APM_WEINT2_CON      (0x208)
#define S5P_APM_WEINT3_CON      (0x20C)
#define S5P_APM_WEINT0_FLTCON0  (0x280)
#define S5P_APM_WEINT0_FLTCON1  (0x284)
#define S5P_APM_WEINT1_FLTCON0  (0x288)
#define S5P_APM_WEINT1_FLTCON1  (0x28C)
#define S5P_APM_WEINT2_FLTCON0  (0x290)
#define S5P_APM_WEINT2_FLTCON1  (0x294)
#define S5P_APM_WEINT3_FLTCON0  (0x298)
#define S5P_APM_WEINT3_FLTCON1  (0x29C)
#define S5P_APM_WEINT0_MASK     (0x300)
#define S5P_APM_WEINT1_MASK     (0x304)
#define S5P_APM_WEINT2_MASK     (0x308)
#define S5P_APM_WEINT3_MASK     (0x30C)
#define S5P_APM_WEINT0_PEND     (0x340)
#define S5P_APM_WEINT1_PEND     (0x344)
#define S5P_APM_WEINT2_PEND     (0x348)
#define S5P_APM_WEINT3_PEND     (0x34C)

/* Clk Div Stat0 Registers*/
#define S5P_CLK_DIV_STAT0_DIV_UART3    	(1<<31)
#define S5P_CLK_DIV_STAT0_DIV_UART2    	(1<<30)
#define S5P_CLK_DIV_STAT0_DIV_UART1    	(1<<29)
#define S5P_CLK_DIV_STAT0_DIV_UART0    	(1<<28)
#define S5P_CLK_DIV_STAT0_DIV_MMC3    	(1<<27)
#define S5P_CLK_DIV_STAT0_DIV_MMC2    	(1<<26)
#define S5P_CLK_DIV_STAT0_DIV_MMC1    	(1<<25)
#define S5P_CLK_DIV_STAT0_DIV_MMC0    	(1<<24)

#define S5P_CLK_DIV_STAT0_DIV_FIMC2_LCLK    	(1<<22)
#define S5P_CLK_DIV_STAT0_DIV_FIMC1_LCLK    	(1<<21)
#define S5P_CLK_DIV_STAT0_DIV_FIMC0_LCLK    	(1<<20)
#define S5P_CLK_DIV_STAT0_DIV_MDNIE_PWM    	(1<<19)
#define S5P_CLK_DIV_STAT0_DIV_MDNIE    	(1<<18)
#define S5P_CLK_DIV_STAT0_DIV_MFC    	(1<<17)
#define S5P_CLK_DIV_STAT0_DIV_G3D    	(1<<16)
#define S5P_CLK_DIV_STAT0_DIV_CSIS    	(1<<15)
#define S5P_CLK_DIV_STAT0_DIV_FIMD    	(1<<13)
#define S5P_CLK_DIV_STAT0_DIV_CAM1    	(1<<12)
#define S5P_CLK_DIV_STAT0_DIV_CAM0    	(1<<11)
#define S5P_CLK_DIV_STAT0_DIV_FIMC    	(1<<10)
#define S5P_CLK_DIV_STAT0_DIV_TBLK    	(1<<8)
#define S5P_CLK_DIV_STAT0_DIV_PCLK_PSYS    	(1<<7)
#define S5P_CLK_DIV_STAT0_DIV_HCLK_PSYS    	(1<<6)
#define S5P_CLK_DIV_STAT0_DIV_PCLK_DSYS    	(1<<5)
#define S5P_CLK_DIV_STAT0_DIV_HCLK_DSYS    	(1<<4)
#define S5P_CLK_DIV_STAT0_DIV_PCLK_MSYS    	(1<<3)
#define S5P_CLK_DIV_STAT0_DIV_HCLK_MSYS    	(1<<2)
#define S5P_CLK_DIV_STAT0_DIV_A2M    	(1<<1)
#define S5P_CLK_DIV_STAT0_DIV_APLL    	(1<<0)

/* Clk Div Stat1 Registers*/
#define S5P_CLK_DIV_STAT1_DIV_G2D    	(1<<20)
#define S5P_CLK_DIV_STAT1_DIV_DPM    	(1<<17)
#define S5P_CLK_DIV_STAT1_DIV_DVSEM    	(1<<16)
#define S5P_CLK_DIV_STAT1_DIV_ONEDRAM    	(1<<15)
#define S5P_CLK_DIV_STAT1_DIV_PWI    	(1<<14)
#define S5P_CLK_DIV_STAT1_DIV_HPM    	(1<<13)
#define S5P_CLK_DIV_STAT1_DIV_COPY    	(1<<12)
#define S5P_CLK_DIV_STAT1_DIV_ONENAND    	(1<<11)
#define S5P_CLK_DIV_STAT1_DIV_AUDIO2    	(1<<10)
#define S5P_CLK_DIV_STAT1_DIV_AUDIO1    	(1<<9)
#define S5P_CLK_DIV_STAT1_DIV_AUDIO0    	(1<<8)

#define S5P_CLK_DIV_STAT1_DIV_PWM    	(1<<3)
#define S5P_CLK_DIV_STAT1_DIV_SPI2    	(1<<2)
#define S5P_CLK_DIV_STAT1_DIV_SPI1    	(1<<1)
#define S5P_CLK_DIV_STAT1_DIV_SPI0    	(1<<0)

/* Registers related to power management */
#define S5P_PWR_CFG		S5P_CLKREG(0xC000)
#define S5P_EINT_WAKEUP_MASK	S5P_CLKREG(0xC004)
#define S5P_WAKEUP_MASK 	S5P_CLKREG(0xC008)
#define S5P_PWR_MODE		S5P_CLKREG(0xC00C)
#define S5P_NORMAL_CFG		S5P_CLKREG(0xC010)
#define S5P_IDLE_CFG		S5P_CLKREG(0xC020)
#define S5P_STOP_CFG		S5P_CLKREG(0xC030)
#define S5P_STOP_MEM_CFG	S5P_CLKREG(0xC034)
#define S5P_SLEEP_CFG		S5P_CLKREG(0xC040)

#define S5P_OSC_FREQ		S5P_CLKREG(0xC100)
#define S5P_OSC_STABLE		S5P_CLKREG(0xC104)
#define S5P_PWR_STABLE		S5P_CLKREG(0xC108)
#define S5P_MTC_STABLE		S5P_CLKREG(0xC110)
#define S5P_CLAMP_STABLE	S5P_CLKREG(0xC114)

#define S5P_WAKEUP_STAT		S5P_CLKREG(0xC200)
#define S5P_BLK_PWR_STAT	S5P_CLKREG(0xC204)
#define S5P_ABB_VALUE 	S5P_CLKREG(0xC300)

#define S5P_OTHERS		S5P_CLKREG(0xE000)
#define S5P_OM_STAT		S5P_CLKREG(0xE100)
#define S5P_MIE_CONTROL		S5P_CLKREG(0xE800)
#define S5P_HDMI_CONTROL	S5P_CLKREG(0xE804)
#define S5P_USB_PHY_CONTROL	S5P_CLKREG(0xE80C)
#define S5P_HDMI_PHY_CONTROL	S5P_CLKREG(0xE804)
#define S5P_DAC_CONTROL		S5P_CLKREG(0xE810)
#define S5P_MIPI_PHY_CONTROL 	S5P_CLKREG(0xE814)
#define S5P_ADC_CONTROL 	S5P_CLKREG(0xE818)
#define S5P_PSHOLD_CONTROL 	S5P_CLKREG(0xE81C)

#define S5P_INFORM0		S5P_CLKREG(0xF000)
#define S5P_INFORM1		S5P_CLKREG(0xF004)
#define S5P_INFORM2		S5P_CLKREG(0xF008)
#define S5P_INFORM3		S5P_CLKREG(0xF00C)
#define S5P_INFORM4		S5P_CLKREG(0xF010)
#define S5P_INFORM5		S5P_CLKREG(0xF014)
#define S5P_INFORM6		S5P_CLKREG(0xF018)
#define S5P_INFORM7		S5P_CLKREG(0xF01C)

#define S5P_RST_STAT		S5P_CLKREG(0xA000)
#define S5P_OSC_CON		S5P_CLKREG(0x8000)
#define S5P_MIPI_PHY_CON0	S5P_CLKREG(0x7200)
#define S5P_MIPI_PHY_CON1	S5P_CLKREG(0x7204)
#define S5P_MIPI_CONTROL	S5P_CLKREG(0xE814)

#define S5P_IDLE_CFG_TL_MASK	(3 << 30)
#define S5P_IDLE_CFG_TM_MASK	(3 << 28)
#define S5P_IDLE_CFG_TL_ON	(2 << 30)
#define S5P_IDLE_CFG_TM_ON	(2 << 28)
#define S5P_IDLE_CFG_DIDLE	(1 << 0)

#define S5P_CFG_WFI_CLEAN		(~(3 << 8))
#define S5P_CFG_WFI_IDLE		(1 << 8)
#define S5P_CFG_WFI_STOP		(2 << 8)
#define S5P_CFG_WFI_SLEEP		(3 << 8)

#define S5P_OTHER_SYS_INT		24
#define S5P_OTHER_STA_TYPE		23
#define S5P_OTHER_SYSC_INTOFF		(1 << 0)
#define STA_TYPE_EXPON			0
#define STA_TYPE_SFR			1

#define S5P_PWR_STA_EXP_SCALE		0
#define S5P_PWR_STA_CNT			4

#define S5P_PWR_STABLE_COUNT		85500

#define S5P_SLEEP_CFG_OSC_EN		(1 << 0)
#define S5P_SLEEP_CFG_USBOSC_EN		(1 << 1)

/* OTHERS Resgister */
#define S5P_OTHERS_USB_SIG_MASK		(1 << 16)
#define S5P_OTHERS_MIPI_DPHY_EN		(1 << 28)

/* MIPI */
#define S5P_MIPI_DPHY_EN		(3)

/* S5P_DAC_CONTROL */
#define S5P_DAC_ENABLE			(1)
#define S5P_DAC_DISABLE			(0)

#endif /* __ASM_ARCH_REGS_CLOCK_H */
