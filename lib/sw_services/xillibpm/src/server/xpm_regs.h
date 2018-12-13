/******************************************************************************
*
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
* Naming Convention: <MODULE>_<REGISTER>[_<FIELD>[_<DESC>]]
*     <MODULE>       Module name (e.g. can or usb)
*     <REGISTER>     Register within the current module
*     [_<FIELD>]     Bit field within a register
*     [_<DESC>]      Type of bit field define:
*         SHIFT:     Least significant bit for the field
*         WIDTH:     Size of field in bites
*         MASK:      A masking over a range of bits or a bit to
*                    be used for setting or clearing
*
******************************************************************************/

#ifndef XPM_REGS_H
#define XPM_REGS_H

/**
 * PMC_GLOBAL Base Address
 */
#define PMC_GLOBAL_BASEADDR      0XF1110000
/**
 * PMC_IOU_SLCR Base Address
 */
#define PMC_IOU_SLCR_BASEADDR 	 0XF1060000

/**
 * Register: PMC_GLOBAL_DOMAIN_ISO_CNTRL
 */
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL    ( ( PMC_GLOBAL_BASEADDR ) + 0X00010000 )

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_SHIFT   18
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_MASK    0X00040000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_SHIFT   17
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_MASK    0X00020000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_SHIFT   16
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_MASK    0X00010000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_SHIFT   15
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_MASK    0X00008000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_SHIFT   14
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_MASK    0X00004000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_SHIFT   13
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_MASK    0X00002000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_SHIFT   12
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_MASK    0X00001000

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_SHIFT   11
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_MASK    0X00000800

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_SHIFT   10
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_MASK    0X00000400

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_SHIFT   9
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_MASK    0X00000200

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_SHIFT   8
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_MASK    0X00000100

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_SHIFT   7
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_MASK    0X00000080

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_SHIFT   6
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_MASK    0X00000040

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_SHIFT   5
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_MASK    0X00000020

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_SHIFT   4
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_MASK    0X00000010

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_SHIFT   3
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_MASK    0X00000008

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_SHIFT   2
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_MASK    0X00000004

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_SHIFT   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_MASK    0X00000002

#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_SHIFT   0
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_WIDTH   1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_MASK    0X00000001



#define PMC_IOU_SLCR_WPROT0 ( ( PMC_IOU_SLCR_BASEADDR ) + 0X00000828 )

#define APU_DUAL_RVBARADDR0L_OFFSET	0x40
#define APU_DUAL_RVBARADDR0H_OFFSET	0x44

#define RPU_0_CFG_OFFSET		0x00000100U
#define RPU_1_CFG_OFFSET		0x00000200U
#define RPU_GLBL_CNTL_OFFSET		0x00000000U

#define CRL_PSM_RST_MODE_OFFSET		0x00000370U

#endif /* XPM_REGS_H */