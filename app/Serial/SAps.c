/*********************************************************************************************************
*FileName:	SApp.c
*Processor: zigbee RF MCU
*Complier:	IAR |KEIL |AVR GCC|HT-TECH
*Company:   
**********************************************************************************************************
*Author			Date				Comment
*LXP			2014/3/11			Original
*********************************************************************************************************/
#include "SAps.h"

/********************************************************************************************************

********************************************************************************************************/
uint8 ComTxBuf[20];

/********************************************************************************************************

********************************************************************************************************/
void Serial_vMain(void)
{
	uint8 txData[10];

	txData[0] = 0x01;
	Serial_vTx(COM_P2D_ONOFF_CMD,1,txData);

	txData[0] =
	txData[1] =
	txData[2] =
	txData[3] =
	txData[4] =
	Serial_vTx(COM_P2D_TIMER_MODE_CMD,uint8 len,txData);
	txData[0] =
	txData[1] =
	Serial_vTx(COM_P2D_RUN_MODE_CMD,2,txData);

	txData[0] =
	txData[1] =
	txData[2] =
	txData[3] =
	txData[4] =
	txData[5] =
	txData[6] =
	txData[7] =
	Serial_vTx(COM_P2D_SET_ALL_CMD,uint8 len,txData);


	Serial_vTx(COM_P2D_GET_ONOFF_CMD,0,txData);
	Serial_vTx(COM_P2D_GET_TIMER_MODE_CMD,0,txData);
	Serial_vTx(COM_P2D_GET_RUN_MODE_CMD,0,txData);
	Serial_vTx(COM_P2D_GET_ALL_CMD,0,txData);
	Serial_vTx(COM_P2D_GET_PROTOCOL_VER_CMD,0,txData);
	Serial_vTx(COM_P2D_GET_DEVICE_MODEL_CMD,0,txData);

	txData[0] =
	Serial_vTx(COM_P2D_RESET_CMD,1,txData);

	txData[0] =
	Serial_vTx(COM_P2D_UP_SMART_CONF_CMD,1,txData);

	txData[0] =
	Serial_vTx(COM_P2D_SET_SMART_CONF_STATE_CMD,1,txData);
}
/********************************************************************************************************

********************************************************************************************************/
void Serial_vTx(uint8 eComCmd,uint8 len,uint8 *pBuf)
{	
	uint8 i,n = 0;

	ComTxBuf[n++] = eComCmd;                  /**<  串口命令 */
	/**> 这里违背了低地址先发的原则，上位机调整过来了，这里就不改 */
	for(i=0;i<len;i++)
	{
		ComTxBuf[n++] = pBuf[i];             /**<  数据包 */
	}
	Serial_vLoadingTx(SERIAL_PC_TX_CMD,n,(uint8*)ComTxBuf);
}
/********************************************************************************************************

********************************************************************************************************/
void Serial_vRxSplit(uint8 len,uint8 *pBuf)
{
	uint8 dCmd;

	dCmd = *pBuf++;			/**<  串口数据命令 */

    len = len - 1;
    /**< dCmd + pBuf[x] */
    
	switch(dCmd)
	{
		case COM_D2P_ONOFF_CMD:
			break;
		case COM_D2P_TIMER_MODE_CMD:
			break;
		case COM_D2P_RUN_MODE_CMD:
			break;
		case COM_D2P_SET_ALL_CMD:
			break;
		case COM_D2P_GET_ONOFF_CMD:
			break;
		case COM_D2P_GET_TIMER_MODE_CMD:
			break;
		case COM_D2P_GET_RUN_MODE_CMD:
			break;
		case COM_D2P_UP_WORK_STATE_CMD:
			break;
		case COM_D2P_UP_FIRE_POWER_CMD:
			break;
		case COM_D2P_UP_ALARM_CMD:
			break;
		case COM_D2P_GET_ALL_CMD:
			break;
		case COM_D2P_GET_PROTOCOL_VER_CMD:
			break;
		case COM_D2P_GET_DEVICE_MODEL_CMD:
			break;
		case COM_D2P_RESET_CMD:
			break;
		case COM_D2P_UP_SMART_CONF_CMD:
			break;
		case COM_D2P_SET_SMART_CONF_STATE_CMD:
			break;
		default:
			break;
	}
}
/********************************************************************************************************

********************************************************************************************************/
