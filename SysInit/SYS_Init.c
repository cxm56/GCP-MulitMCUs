/**
  ******************************************************************************
  * @file    SYS_Init.c
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.11.08
  * @brief   System some model initialize
  ******************************************************************************
  * @attention
  * 
  * 
  * 
  * 
  ******************************************************************************
  */
  
/***********************************<INCLUDES>**********************************/
#include "SYS_Init.h"
#include "DataType/DataType.h"
//#include "CMU/CMU_Interface.h"
//#include "CMU/CMU_DataStructDef.h"

#include "SysPeripheral/SysTimer/SysTimer.h"
#include "SysPeripheral/SysCtrl/SysCtrl.h"
#include "SysPeripheral/IRQ/IRQ_Man.h"
#include "SysPeripheral/GPIO/GPIO_Man.h"

#include <stdlib.h>


/**
  * @brief  系统初始化
  * @param  None
  * @retval 0-成功 非0-失败
  */
uBit32 SYS_Init(void)
{
    //上电延时
    SysTime_SimpleDelay(60000);
    
    //初始化中断接口
    IRQ_Init();
    
    //初始化系统时钟
    SysTime_Init(1, false, 0);
    
    return 0;
}


/**
  * @brief  系统主任务处理
  * @param  None
  * @retval None
  */
void SYS_MainTaskHandler(void)
{

    //IO状态更新处理
    GPIO_MAN_UpdateProc();
    
    //系统复位管理
    SysCtrl_ResetHandler();
    
}

