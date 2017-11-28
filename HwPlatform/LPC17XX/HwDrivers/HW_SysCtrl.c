/**
  ******************************************************************************
  * @file    HW_SysCtrl.h
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.10.19
  * @brief   MCU Ctrl Interface
  ******************************************************************************
  * @attention
  * 
  * 
  * 
  * 
  ******************************************************************************
  */
   
   
/***********************************<INCLUDES>**********************************/
#include "HW_SysCtrl.h"
#include "chip.h"

/*****************************************************************************
 * 全局变量
 ****************************************************************************/

//系统晶振频率以及RTC晶振频率
const uint32_t OscRateIn = 12000000;
const uint32_t RTCOscRateIn = 32768;


/*****************************************************************************
 * 系统初始化
 ****************************************************************************/

/**
  * @brief  系统初始化(在main函数之前中执行).
  * @param  None
  * @retval None
  * @note   由于库函数提供的系统初始化函数中,会将芯片内核频率设置为120M,而
  *         LPC1752最高内核频率是100M,直接调用库函数进行系统初始化会导致系
  *         统不稳定,所以在这里重新实现其内核的初始化.
  */
void Board_SystemInit(void)
{
    //配置系统时钟
    Chip_SetupXtalClocking();
    
    //初始化 GPIO
    Chip_GPIO_Init(LPC_GPIO);
    Chip_IOCON_Init(LPC_IOCON);
    
    //初始化DMA
    Chip_GPDMA_Init(LPC_GPDMA); 

}


/*****************************************************************************
 * 系统相关控制接口
 ****************************************************************************/

/**
  * @brief  系统复位函数
  * @param  None
  * @retval None
  */
void HW_SystemReset(void)
{
    NVIC_SystemReset(); //复位
    
}
