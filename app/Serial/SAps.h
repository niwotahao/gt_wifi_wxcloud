/*********************************************************************************************************
*FileName:	SAps.c
*Processor: zigbee RF MCU
*Complier:	IAR |KEIL |AVR GCC|HT-TECH
*Company:   
**********************************************************************************************************
*Author			Date				Comment
*LXP			2014/3/11			Original
*********************************************************************************************************/
#ifndef _S_APS_H_
#define _S_APS_H_


/********************************************************************************************************

********************************************************************************************************/
#define COM_P2D_ONOFF_CMD 					0x01
#define COM_P2D_TIMER_MODE_CMD				0x02
#define COM_P2D_RUN_MODE_CMD				0x03

#define COM_P2D_SET_ALL_CMD					0x6F

#define COM_P2D_GET_ONOFF_CMD				0x71
#define COM_P2D_GET_TIMER_MODE_CMD			0x72
#define COM_P2D_GET_RUN_MODE_CMD			0x73
/*
#define COM_P2D_UP_WORK_STATE_CMD			0x74
#define COM_P2D_UP_FIRE_POWER_CMD			0x75
#define COM_P2D_UP_ALARM_CMD				0x76
*/

#define COM_P2D_GET_ALL_CMD					0xDF

#define COM_P2D_GET_PROTOCOL_VER_CMD		0xE0
#define COM_P2D_GET_DEVICE_MODEL_CMD 		0xE1

#define COM_P2D_RESET_CMD					0xFF
#define COM_P2D_UP_SMART_CONF_CMD			0xFE
#define COM_P2D_SET_SMART_CONF_STATE_CMD	0xFD
/********************************************************************************************************

********************************************************************************************************/
#define COM_D2P_ONOFF_CMD 					0x01
#define COM_D2P_TIMER_MODE_CMD				0x02
#define COM_D2P_RUN_MODE_CMD				0x03

#define COM_D2P_SET_ALL_CMD					0x6F

#define COM_D2P_GET_ONOFF_CMD				0x71
#define COM_D2P_GET_TIMER_MODE_CMD			0x72
#define COM_D2P_GET_RUN_MODE_CMD			0x73

#define COM_D2P_UP_WORK_STATE_CMD			0x74
#define COM_D2P_UP_FIRE_POWER_CMD			0x75
#define COM_D2P_UP_ALARM_CMD				0x76

#define COM_D2P_GET_ALL_CMD					0xDF

#define COM_D2P_GET_PROTOCOL_VER_CMD		0xE0
#define COM_D2P_GET_DEVICE_MODEL_CMD 		0xE1

#define COM_D2P_RESET_CMD					0xFF
#define COM_D2P_UP_SMART_CONF_CMD			0xFE
#define COM_D2P_SET_SMART_CONF_STATE_CMD	0xFD
/********************************************************************************************************

********************************************************************************************************/
extern void Serial_vTx(uint8 eComCmd,uint8 len,uint8 *pBuf);
extern void Serial_vRxSplit(uint8 len,uint8 *pBuf);
/********************************************************************************************************

********************************************************************************************************/


/********************************************************************************************************

********************************************************************************************************/
#endif
