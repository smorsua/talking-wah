/*******************************************************************************
Copyright (c) 2020 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @brief: This file contains I2C command sequence to be followed for discovery 
*         and configuration of A2B nodes for an A2B schematic
* @version: $Revision$
* @date: Thursday, May 21, 2020-2:51:44 PM
* I2C Command File Version - 1.0.0
* A2B DLL version- 19.3.0
* A2B Stack DLL version- 19.3.0.0
* SigmaStudio version- 4.05.000.1779
* Developed by: Automotive Software and Systems team, Bangalore, India
* THIS IS A SIGMASTUDIO GENERATED FILE
*****************************************************************************/

/*! \addtogroup ADI_A2B_DISCOVERY_CONFIG ADI_A2B_DISCOVERY_CONFIG 
* @{
*/
#ifndef _ADI_A2B_I2C_LIST_H_ 
#define _ADI_A2B_I2C_LIST_H_ 

/*! \struct ADI_A2B_DISCOVERY_CONFIG 
A2B discovery config unit structure 
*/
typedef struct 
 { 
/*!  Device address */
	unsigned char nDeviceAddr;

/*!  Operation code */
	unsigned char eOpCode;

/*! Reg Sub address width (in bytes) */
	unsigned char nAddrWidth;

/*! Reg Sub address */
	unsigned int nAddr;

/*! Reg data width (in bytes) */
	unsigned char nDataWidth;

/*! Reg data count (in bytes) */
	unsigned short nDataCount;

/*! Config Data */
	unsigned char* paConfigData;


} ADI_A2B_DISCOVERY_CONFIG;

#define WRITE   ((unsigned char) 0x00u)
#define READ    ((unsigned char) 0x01u)
#define DELAY   ((unsigned char) 0x02u)
#define INVALID ((unsigned char) 0xffu)

#define CONFIG_LEN (151) 


static unsigned char gaConfig_A2BMasterNodeWDZ_CONTROL_Data0[1] =
{
	0x84u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_A2BDelay_Data1[1] =
{
	0x19u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTTYPE_Data2[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTMSK0_Data3[1] =
{
	0x7Fu	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTMSK1_Data4[1] =
{
	0x78u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTMSK2_Data5[1] =
{
	0x0Fu	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_RESPCYCS_Data6[1] =
{
	0x89u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_CONTROL_Data7[1] =
{
	0x01u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2SGCFG_Data8[1] =
{
	0xA2u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_SWCTL_Data9[1] =
{
	0x01u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_DISCVRY_Data10[1] =
{
	0x89u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_A2BDelay_Data11[1] =
{
	0x32u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTPND2_Data12[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_INTPND2_Data13[1] =
{
	0x01u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADR_Data14[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_VENDOR_Data0[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_PRODUCT_Data1[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_VERSION_Data2[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_SWCTL_Data15[1] =
{
	0x21u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADR_Data16[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_BCDNSLOTS_Data3[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_LDNSLOTS_Data4[1] =
{
	0x80u	
};

static unsigned char gaConfig_AD242xSlaveNode0_LUPSLOTS_Data5[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2CCFG_Data6[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xSlaveNode0_SYNCOFFSET_Data7[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2SGCFG_Data8[1] =
{
	0xA0u	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2SCFG_Data9[1] =
{
	0x0Bu	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2SRATE_Data10[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_PDMCTL_Data11[1] =
{
	0x18u	
};

static unsigned char gaConfig_AD242xSlaveNode0_ERRMGMT_Data12[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIODAT_Data13[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOOEN_Data14[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOIEN_Data15[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_PINTEN_Data16[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_PINTINV_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_PINCFG_Data18[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_TESTMODE_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_CLK1CFG_Data20[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_CLK2CFG_Data21[1] =
{
	0x81u	
};

static unsigned char gaConfig_AD242xSlaveNode0_UPMASK0_Data22[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_UPMASK1_Data23[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_UPMASK2_Data24[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_UPMASK3_Data25[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_UPOFFSET_Data26[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_DNMASK0_Data27[1] =
{
	0x0Fu	
};

static unsigned char gaConfig_AD242xSlaveNode0_DNMASK1_Data28[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_DNMASK2_Data29[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_DNMASK3_Data30[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_DNOFFSET_Data31[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD0MSK_Data32[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD1MSK_Data33[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD2MSK_Data34[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD3MSK_Data35[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD4MSK_Data36[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD5MSK_Data37[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD6MSK_Data38[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIOD7MSK_Data39[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIODINV_Data40[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_GPIODEN_Data41[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_MBOX0CTL_Data42[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_MBOX1CTL_Data43[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_SUSCFG_Data44[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2SRRSOFFS_Data45[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_I2SRRCTL_Data46[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_INTMSK0_Data47[1] =
{
	0x7Fu	
};

static unsigned char gaConfig_AD242xSlaveNode0_INTMSK1_Data48[1] =
{
	0x7Fu	
};

static unsigned char gaConfig_AD242xSlaveNode0_BECCTL_Data49[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADRSet_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_CHIPSet_Data50[1] =
{
	0x10u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADREnable_Data18[1] =
{
	0x20u	
};

static unsigned char gaConfig_AudioSink1_POWERCTRL_Data0[1] =
{
	0xA1u	
};

static unsigned char gaConfig_AudioSink1_AMPDAC_Data1[1] =
{
	0x8Au	
};

static unsigned char gaConfig_AudioSink1_DACCTRL_Data2[1] =
{
	0x02u	
};

static unsigned char gaConfig_AudioSink1_VOLLEFT_Data3[1] =
{
	0x40u	
};

static unsigned char gaConfig_AudioSink1_VOLRIGHT_Data4[1] =
{
	0x40u	
};

static unsigned char gaConfig_AudioSink1_SAICTRL1_Data5[1] =
{
	0x10u	
};

static unsigned char gaConfig_AudioSink1_SAICTRL2_Data6[1] =
{
	0x07u	
};

static unsigned char gaConfig_AudioSink1_SLOTLEFT_Data7[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink1_SLOTRIGHT_Data8[1] =
{
	0x01u	
};

static unsigned char gaConfig_AudioSink1_LIMLEFT_Data9[1] =
{
	0xA0u	
};

static unsigned char gaConfig_AudioSink1_LIMLEFT_Data10[1] =
{
	0x51u	
};

static unsigned char gaConfig_AudioSink1_LIMLEFT_Data11[1] =
{
	0x22u	
};

static unsigned char gaConfig_AudioSink1_LIMRIGHT_Data12[1] =
{
	0xA8u	
};

static unsigned char gaConfig_AudioSink1_LIMRIGHT_Data13[1] =
{
	0x51u	
};

static unsigned char gaConfig_AudioSink1_LIMRIGHT_Data14[1] =
{
	0x22u	
};

static unsigned char gaConfig_AudioSink1_CLIPLEFT_Data15[1] =
{
	0xFFu	
};

static unsigned char gaConfig_AudioSink1_CLIPRIGHT_Data16[1] =
{
	0xFFu	
};

static unsigned char gaConfig_AudioSink1_FAULTCTRL1_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink1_FAULTCTRL2_Data18[1] =
{
	0x30u	
};

static unsigned char gaConfig_AudioSink1_SOFTRESET_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink1_POWERCTRL_Data20[1] =
{
	0xA0u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADRDisable_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xSlaveNode0_CHIPSet_Data51[1] =
{
	0x11u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADREnable_Data20[1] =
{
	0x20u	
};

static unsigned char gaConfig_AudioSink2_POWERCTRL_Data0[1] =
{
	0xA1u	
};

static unsigned char gaConfig_AudioSink2_AMPDAC_Data1[1] =
{
	0x8Au	
};

static unsigned char gaConfig_AudioSink2_DACCTRL_Data2[1] =
{
	0x02u	
};

static unsigned char gaConfig_AudioSink2_VOLLEFT_Data3[1] =
{
	0x40u	
};

static unsigned char gaConfig_AudioSink2_VOLRIGHT_Data4[1] =
{
	0x40u	
};

static unsigned char gaConfig_AudioSink2_SAICTRL1_Data5[1] =
{
	0x10u	
};

static unsigned char gaConfig_AudioSink2_SAICTRL2_Data6[1] =
{
	0x07u	
};

static unsigned char gaConfig_AudioSink2_SLOTLEFT_Data7[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink2_SLOTRIGHT_Data8[1] =
{
	0x01u	
};

static unsigned char gaConfig_AudioSink2_LIMLEFT_Data9[1] =
{
	0xA0u	
};

static unsigned char gaConfig_AudioSink2_LIMLEFT_Data10[1] =
{
	0x51u	
};

static unsigned char gaConfig_AudioSink2_LIMLEFT_Data11[1] =
{
	0x22u	
};

static unsigned char gaConfig_AudioSink2_LIMRIGHT_Data12[1] =
{
	0xA8u	
};

static unsigned char gaConfig_AudioSink2_LIMRIGHT_Data13[1] =
{
	0x51u	
};

static unsigned char gaConfig_AudioSink2_LIMRIGHT_Data14[1] =
{
	0x22u	
};

static unsigned char gaConfig_AudioSink2_CLIPLEFT_Data15[1] =
{
	0xFFu	
};

static unsigned char gaConfig_AudioSink2_CLIPRIGHT_Data16[1] =
{
	0xFFu	
};

static unsigned char gaConfig_AudioSink2_FAULTCTRL1_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink2_FAULTCTRL2_Data18[1] =
{
	0x30u	
};

static unsigned char gaConfig_AudioSink2_SOFTRESET_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AudioSink2_POWERCTRL_Data20[1] =
{
	0xA0u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADRDisable_Data21[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2CCFG_Data22[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2SCFG_Data23[1] =
{
	0x19u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2STXOFFSET_Data24[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2SRXOFFSET_Data25[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_PDMCTL_Data26[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_ERRMGMT_Data27[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIODAT_Data28[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOOEN_Data29[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOIEN_Data30[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_PINTEN_Data31[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_PINTINV_Data32[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_PINCFG_Data33[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_TESTMODE_Data34[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_CLK1CFG_Data35[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_CLK2CFG_Data36[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD0MSK_Data37[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD1MSK_Data38[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD2MSK_Data39[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD3MSK_Data40[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD4MSK_Data41[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD5MSK_Data42[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD6MSK_Data43[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIOD7MSK_Data44[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIODINV_Data45[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_GPIODEN_Data46[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2SRRCTL_Data47[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_BECCTL_Data48[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_DNSLOTS_Data49[1] =
{
	0x04u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_UPSLOTS_Data50[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_SWCTL_Data51[1] =
{
	0x01u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_NODEADR_Data52[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_SLOTFMT_Data53[1] =
{
	0x44u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_DATCTL_Data54[1] =
{
	0x03u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_I2SRRATE_Data55[1] =
{
	0x00u	
};

static unsigned char gaConfig_A2BMasterNodeWDZ_CONTROL_Data56[1] =
{
	0x01u	
};

ADI_A2B_DISCOVERY_CONFIG gaA2BConfig[CONFIG_LEN] =
{

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_CONTROL_Data0[0]},	/* CONTROL */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_A2BDelay_Data1[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x00000017u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTTYPE_Data2[0]},	/* INTTYPE */
	{0x68u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTMSK0_Data3[0]},	/* INTMSK0 */
	{0x68u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTMSK1_Data4[0]},	/* INTMSK1 */
	{0x68u,	WRITE,	0x01u,	0x0000001Du,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTMSK2_Data5[0]},	/* INTMSK2 */
	{0x68u,	WRITE,	0x01u,	0x0000000Fu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_RESPCYCS_Data6[0]},	/* RESPCYCS */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_CONTROL_Data7[0]},	/* CONTROL */
	{0x68u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2SGCFG_Data8[0]},	/* I2SGCFG */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_SWCTL_Data9[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000013u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_DISCVRY_Data10[0]},	/* DISCVRY */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_A2BDelay_Data11[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTPND2_Data12[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_INTPND2_Data13[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADR_Data14[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD242x Slave Node0 --*/
	{0x69u,	READ,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_VENDOR_Data0[0]},	/* VENDOR */
	{0x69u,	READ,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_PRODUCT_Data1[0]},	/* PRODUCT */
	{0x69u,	READ,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_VERSION_Data2[0]},	/* VERSION */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_SWCTL_Data15[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADR_Data16[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD242x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x0000000Au,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_BCDNSLOTS_Data3[0]},	/* BCDNSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_LDNSLOTS_Data4[0]},	/* LDNSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000000Cu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_LUPSLOTS_Data5[0]},	/* LUPSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000003Fu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2CCFG_Data6[0]},	/* I2CCFG */
	{0x69u,	WRITE,	0x01u,	0x00000046u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_SYNCOFFSET_Data7[0]},	/* SYNCOFFSET */
	{0x69u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2SGCFG_Data8[0]},	/* I2SGCFG */
	{0x69u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2SCFG_Data9[0]},	/* I2SCFG */
	{0x69u,	WRITE,	0x01u,	0x00000043u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2SRATE_Data10[0]},	/* I2SRATE */
	{0x69u,	WRITE,	0x01u,	0x00000047u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_PDMCTL_Data11[0]},	/* PDMCTL */
	{0x69u,	WRITE,	0x01u,	0x00000048u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_ERRMGMT_Data12[0]},	/* ERRMGMT */
	{0x69u,	WRITE,	0x01u,	0x0000004Au,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIODAT_Data13[0]},	/* GPIODAT */
	{0x69u,	WRITE,	0x01u,	0x0000004Du,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOOEN_Data14[0]},	/* GPIOOEN */
	{0x69u,	WRITE,	0x01u,	0x0000004Eu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOIEN_Data15[0]},	/* GPIOIEN */
	{0x69u,	WRITE,	0x01u,	0x00000050u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_PINTEN_Data16[0]},	/* PINTEN */
	{0x69u,	WRITE,	0x01u,	0x00000051u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_PINTINV_Data17[0]},	/* PINTINV */
	{0x69u,	WRITE,	0x01u,	0x00000052u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_PINCFG_Data18[0]},	/* PINCFG */
	{0x69u,	WRITE,	0x01u,	0x00000020u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_TESTMODE_Data19[0]},	/* TESTMODE */
	{0x69u,	WRITE,	0x01u,	0x00000059u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_CLK1CFG_Data20[0]},	/* CLK1CFG */
	{0x69u,	WRITE,	0x01u,	0x0000005Au,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_CLK2CFG_Data21[0]},	/* CLK2CFG */
	{0x69u,	WRITE,	0x01u,	0x00000060u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_UPMASK0_Data22[0]},	/* UPMASK0 */
	{0x69u,	WRITE,	0x01u,	0x00000061u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_UPMASK1_Data23[0]},	/* UPMASK1 */
	{0x69u,	WRITE,	0x01u,	0x00000062u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_UPMASK2_Data24[0]},	/* UPMASK2 */
	{0x69u,	WRITE,	0x01u,	0x00000063u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_UPMASK3_Data25[0]},	/* UPMASK3 */
	{0x69u,	WRITE,	0x01u,	0x00000064u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_UPOFFSET_Data26[0]},	/* UPOFFSET */
	{0x69u,	WRITE,	0x01u,	0x00000065u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_DNMASK0_Data27[0]},	/* DNMASK0 */
	{0x69u,	WRITE,	0x01u,	0x00000066u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_DNMASK1_Data28[0]},	/* DNMASK1 */
	{0x69u,	WRITE,	0x01u,	0x00000067u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_DNMASK2_Data29[0]},	/* DNMASK2 */
	{0x69u,	WRITE,	0x01u,	0x00000068u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_DNMASK3_Data30[0]},	/* DNMASK3 */
	{0x69u,	WRITE,	0x01u,	0x00000069u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_DNOFFSET_Data31[0]},	/* DNOFFSET */
	{0x69u,	WRITE,	0x01u,	0x00000081u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD0MSK_Data32[0]},	/* GPIOD0MSK */
	{0x69u,	WRITE,	0x01u,	0x00000082u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD1MSK_Data33[0]},	/* GPIOD1MSK */
	{0x69u,	WRITE,	0x01u,	0x00000083u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD2MSK_Data34[0]},	/* GPIOD2MSK */
	{0x69u,	WRITE,	0x01u,	0x00000084u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD3MSK_Data35[0]},	/* GPIOD3MSK */
	{0x69u,	WRITE,	0x01u,	0x00000085u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD4MSK_Data36[0]},	/* GPIOD4MSK */
	{0x69u,	WRITE,	0x01u,	0x00000086u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD5MSK_Data37[0]},	/* GPIOD5MSK */
	{0x69u,	WRITE,	0x01u,	0x00000087u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD6MSK_Data38[0]},	/* GPIOD6MSK */
	{0x69u,	WRITE,	0x01u,	0x00000088u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIOD7MSK_Data39[0]},	/* GPIOD7MSK */
	{0x69u,	WRITE,	0x01u,	0x0000008Au,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIODINV_Data40[0]},	/* GPIODINV */
	{0x69u,	WRITE,	0x01u,	0x00000080u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_GPIODEN_Data41[0]},	/* GPIODEN */
	{0x69u,	WRITE,	0x01u,	0x00000090u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_MBOX0CTL_Data42[0]},	/* MBOX0CTL */
	{0x69u,	WRITE,	0x01u,	0x00000096u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_MBOX1CTL_Data43[0]},	/* MBOX1CTL */
	{0x69u,	WRITE,	0x01u,	0x0000005Cu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_SUSCFG_Data44[0]},	/* SUSCFG */
	{0x69u,	WRITE,	0x01u,	0x00000058u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2SRRSOFFS_Data45[0]},	/* I2SRRSOFFS */
	{0x69u,	WRITE,	0x01u,	0x00000057u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_I2SRRCTL_Data46[0]},	/* I2SRRCTL */
	{0x69u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_INTMSK0_Data47[0]},	/* INTMSK0 */
	{0x69u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_INTMSK1_Data48[0]},	/* INTMSK1 */
	{0x69u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_BECCTL_Data49[0]},	/* BECCTL */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADRSet_Data17[0]},	/* NODEADR - Set the node address */

	/*-- COMMANDS FOR DEVICE - AD242x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_CHIPSet_Data50[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADREnable_Data18[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - Audio Sink1 --*/
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_POWERCTRL_Data0[0]},	/* IC 1.POWER_CTRL Register.POWER_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000005u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_AMPDAC_Data1[0]},	/* IC 1.AMP_DAC_CTRL Register.AMP_DAC_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000006u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_DACCTRL_Data2[0]},	/* IC 1.DAC_CTRL Register.DAC_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000007u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_VOLLEFT_Data3[0]},	/* IC 1.VOL_LEFT_CTRL Register.VOL_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000008u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_VOLRIGHT_Data4[0]},	/* IC 1.VOL_RIGHT_CTRL Register.VOL_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_SAICTRL1_Data5[0]},	/* IC 1.SAI_CTRL1 Register.SAI_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x0000000Au,	0x01u,	0x0001u,	&gaConfig_AudioSink1_SAICTRL2_Data6[0]},	/* IC 1.SAI_CTRL2 Register.SAI_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_AudioSink1_SLOTLEFT_Data7[0]},	/* IC 1.SLOT_LEFT_CTRL Register.SLOT_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x0000000Cu,	0x01u,	0x0001u,	&gaConfig_AudioSink1_SLOTRIGHT_Data8[0]},	/* IC 1.SLOT_RIGHT_CTRL Register.SLOT_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x0000000Eu,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMLEFT_Data9[0]},	/* IC 1.LIM_LEFT_CTRL1 Register.LIM_LEFT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x0000000Fu,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMLEFT_Data10[0]},	/* IC 1.LIM_LEFT_CTRL2 Register.LIM_LEFT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x00000010u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMLEFT_Data11[0]},	/* IC 1.LIM_LEFT_CTRL3 Register.LIM_LEFT_CTRL3 */
	{0x69u,	WRITE,	0x01u,	0x00000011u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMRIGHT_Data12[0]},	/* IC 1.LIM_RIGHT_CTRL1 Register.LIM_RIGHT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMRIGHT_Data13[0]},	/* IC 1.LIM_RIGHT_CTRL2 Register.LIM_RIGHT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x00000013u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_LIMRIGHT_Data14[0]},	/* IC 1.LIM_RIGHT_CTRL3 Register.LIM_RIGHT_CTRL3 */
	{0x69u,	WRITE,	0x01u,	0x00000014u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_CLIPLEFT_Data15[0]},	/* IC 1.CLIP_LEFT_CTRL Register.CLIP_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000015u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_CLIPRIGHT_Data16[0]},	/* IC 1.CLIP_RIGHT_CTRL Register.CLIP_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000016u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_FAULTCTRL1_Data17[0]},	/* IC 1.FAULT_CTRL1 Register.FAULT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x00000017u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_FAULTCTRL2_Data18[0]},	/* IC 1.FAULT_CTRL2 Register.FAULT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_AudioSink1_SOFTRESET_Data19[0]},	/* IC 1.SOFT_RESET Register.SOFT_RESET */
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AudioSink1_POWERCTRL_Data20[0]},	/* IC 1.POWER_CTRL Register.POWER_CTRL */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADRDisable_Data19[0]},	/* NODEADR - Disable PERI */

	/*-- COMMANDS FOR DEVICE - AD242x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xSlaveNode0_CHIPSet_Data51[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADREnable_Data20[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - Audio Sink2 --*/
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_POWERCTRL_Data0[0]},	/* IC 1.POWER_CTRL Register.POWER_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000005u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_AMPDAC_Data1[0]},	/* IC 1.AMP_DAC_CTRL Register.AMP_DAC_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000006u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_DACCTRL_Data2[0]},	/* IC 1.DAC_CTRL Register.DAC_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000007u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_VOLLEFT_Data3[0]},	/* IC 1.VOL_LEFT_CTRL Register.VOL_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000008u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_VOLRIGHT_Data4[0]},	/* IC 1.VOL_RIGHT_CTRL Register.VOL_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_SAICTRL1_Data5[0]},	/* IC 1.SAI_CTRL1 Register.SAI_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x0000000Au,	0x01u,	0x0001u,	&gaConfig_AudioSink2_SAICTRL2_Data6[0]},	/* IC 1.SAI_CTRL2 Register.SAI_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_AudioSink2_SLOTLEFT_Data7[0]},	/* IC 1.SLOT_LEFT_CTRL Register.SLOT_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x0000000Cu,	0x01u,	0x0001u,	&gaConfig_AudioSink2_SLOTRIGHT_Data8[0]},	/* IC 1.SLOT_RIGHT_CTRL Register.SLOT_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x0000000Eu,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMLEFT_Data9[0]},	/* IC 1.LIM_LEFT_CTRL1 Register.LIM_LEFT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x0000000Fu,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMLEFT_Data10[0]},	/* IC 1.LIM_LEFT_CTRL2 Register.LIM_LEFT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x00000010u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMLEFT_Data11[0]},	/* IC 1.LIM_LEFT_CTRL3 Register.LIM_LEFT_CTRL3 */
	{0x69u,	WRITE,	0x01u,	0x00000011u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMRIGHT_Data12[0]},	/* IC 1.LIM_RIGHT_CTRL1 Register.LIM_RIGHT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMRIGHT_Data13[0]},	/* IC 1.LIM_RIGHT_CTRL2 Register.LIM_RIGHT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x00000013u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_LIMRIGHT_Data14[0]},	/* IC 1.LIM_RIGHT_CTRL3 Register.LIM_RIGHT_CTRL3 */
	{0x69u,	WRITE,	0x01u,	0x00000014u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_CLIPLEFT_Data15[0]},	/* IC 1.CLIP_LEFT_CTRL Register.CLIP_LEFT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000015u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_CLIPRIGHT_Data16[0]},	/* IC 1.CLIP_RIGHT_CTRL Register.CLIP_RIGHT_CTRL */
	{0x69u,	WRITE,	0x01u,	0x00000016u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_FAULTCTRL1_Data17[0]},	/* IC 1.FAULT_CTRL1 Register.FAULT_CTRL1 */
	{0x69u,	WRITE,	0x01u,	0x00000017u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_FAULTCTRL2_Data18[0]},	/* IC 1.FAULT_CTRL2 Register.FAULT_CTRL2 */
	{0x69u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_AudioSink2_SOFTRESET_Data19[0]},	/* IC 1.SOFT_RESET Register.SOFT_RESET */
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AudioSink2_POWERCTRL_Data20[0]},	/* IC 1.POWER_CTRL Register.POWER_CTRL */

	/*-- COMMANDS FOR DEVICE - A2B Master Node WDZ --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADRDisable_Data21[0]},	/* NODEADR - Disable PERI */
	{0x68u,	WRITE,	0x01u,	0x0000003Fu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2CCFG_Data22[0]},	/* I2CCFG */
	{0x68u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2SCFG_Data23[0]},	/* I2SCFG */
	{0x68u,	WRITE,	0x01u,	0x00000044u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2STXOFFSET_Data24[0]},	/* I2STXOFFSET */
	{0x68u,	WRITE,	0x01u,	0x00000045u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2SRXOFFSET_Data25[0]},	/* I2SRXOFFSET */
	{0x68u,	WRITE,	0x01u,	0x00000047u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_PDMCTL_Data26[0]},	/* PDMCTL */
	{0x68u,	WRITE,	0x01u,	0x00000048u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_ERRMGMT_Data27[0]},	/* ERRMGMT */
	{0x68u,	WRITE,	0x01u,	0x0000004Au,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIODAT_Data28[0]},	/* GPIODAT */
	{0x68u,	WRITE,	0x01u,	0x0000004Du,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOOEN_Data29[0]},	/* GPIOOEN */
	{0x68u,	WRITE,	0x01u,	0x0000004Eu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOIEN_Data30[0]},	/* GPIOIEN */
	{0x68u,	WRITE,	0x01u,	0x00000050u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_PINTEN_Data31[0]},	/* PINTEN */
	{0x68u,	WRITE,	0x01u,	0x00000051u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_PINTINV_Data32[0]},	/* PINTINV */
	{0x68u,	WRITE,	0x01u,	0x00000052u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_PINCFG_Data33[0]},	/* PINCFG */
	{0x68u,	WRITE,	0x01u,	0x00000020u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_TESTMODE_Data34[0]},	/* TESTMODE */
	{0x68u,	WRITE,	0x01u,	0x00000059u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_CLK1CFG_Data35[0]},	/* CLK1CFG */
	{0x68u,	WRITE,	0x01u,	0x0000005Au,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_CLK2CFG_Data36[0]},	/* CLK2CFG */
	{0x68u,	WRITE,	0x01u,	0x00000081u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD0MSK_Data37[0]},	/* GPIOD0MSK */
	{0x68u,	WRITE,	0x01u,	0x00000082u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD1MSK_Data38[0]},	/* GPIOD1MSK */
	{0x68u,	WRITE,	0x01u,	0x00000083u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD2MSK_Data39[0]},	/* GPIOD2MSK */
	{0x68u,	WRITE,	0x01u,	0x00000084u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD3MSK_Data40[0]},	/* GPIOD3MSK */
	{0x68u,	WRITE,	0x01u,	0x00000085u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD4MSK_Data41[0]},	/* GPIOD4MSK */
	{0x68u,	WRITE,	0x01u,	0x00000086u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD5MSK_Data42[0]},	/* GPIOD5MSK */
	{0x68u,	WRITE,	0x01u,	0x00000087u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD6MSK_Data43[0]},	/* GPIOD6MSK */
	{0x68u,	WRITE,	0x01u,	0x00000088u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIOD7MSK_Data44[0]},	/* GPIOD7MSK */
	{0x68u,	WRITE,	0x01u,	0x0000008Au,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIODINV_Data45[0]},	/* GPIODINV */
	{0x68u,	WRITE,	0x01u,	0x00000080u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_GPIODEN_Data46[0]},	/* GPIODEN */
	{0x68u,	WRITE,	0x01u,	0x00000057u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2SRRCTL_Data47[0]},	/* I2SRRCTL */
	{0x68u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_BECCTL_Data48[0]},	/* BECCTL */
	{0x68u,	WRITE,	0x01u,	0x0000000Du,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_DNSLOTS_Data49[0]},	/* DNSLOTS */
	{0x68u,	WRITE,	0x01u,	0x0000000Eu,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_UPSLOTS_Data50[0]},	/* UPSLOTS */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_SWCTL_Data51[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_NODEADR_Data52[0]},	/* NODEADR */
	{0x68u,	WRITE,	0x01u,	0x00000010u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_SLOTFMT_Data53[0]},	/* SLOTFMT */
	{0x68u,	WRITE,	0x01u,	0x00000011u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_DATCTL_Data54[0]},	/* DATCTL */
	{0x68u,	WRITE,	0x01u,	0x00000056u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_I2SRRATE_Data55[0]},	/* I2SRRATE */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_A2BMasterNodeWDZ_CONTROL_Data56[0]},	/* CONTROL */
};

#endif /* _ADI_A2B_I2C_LIST_H_ */

