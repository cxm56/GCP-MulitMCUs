#ifndef  __HW_IRQ_HANDLER_H
#define  __HW_IRQ_HANDLER_H

#include "chip.h"

typedef enum
{
    //系统滴答
    LPC_IRQ_TRG_SYSTICK_UPDATE = 0,
    LPC_IRQ_TRG_SYSTICK_OS,
    
    //串口
    LPC_IRQ_TRG_UART0,
    LPC_IRQ_TRG_UART1,
    LPC_IRQ_TRG_UART2,
    LPC_IRQ_TRG_UART3,

    //DMA通道
    LPC_IRQ_TRG_DMA_CH1,
    LPC_IRQ_TRG_DMA_CH2,
    LPC_IRQ_TRG_DMA_CH3,
    LPC_IRQ_TRG_DMA_CH4,
    LPC_IRQ_TRG_DMA_CH5,
    LPC_IRQ_TRG_DMA_CH6,
    LPC_IRQ_TRG_DMA_CH7,
    LPC_IRQ_TRG_DMA_CH8,
    
    //GPIO中断
    LPC_IRQ_TRG_GPIOINT0_00,
    LPC_IRQ_TRG_GPIOINT0_01,
    LPC_IRQ_TRG_GPIOINT0_02,
    LPC_IRQ_TRG_GPIOINT0_03,
    LPC_IRQ_TRG_GPIOINT0_04,
    LPC_IRQ_TRG_GPIOINT0_05,
    LPC_IRQ_TRG_GPIOINT0_06,
    LPC_IRQ_TRG_GPIOINT0_07,
    LPC_IRQ_TRG_GPIOINT0_08,
    LPC_IRQ_TRG_GPIOINT0_09,
    LPC_IRQ_TRG_GPIOINT0_10,
    LPC_IRQ_TRG_GPIOINT0_11,
    LPC_IRQ_TRG_GPIOINT0_12,
    LPC_IRQ_TRG_GPIOINT0_13,
    LPC_IRQ_TRG_GPIOINT0_14,
    LPC_IRQ_TRG_GPIOINT0_15,
    LPC_IRQ_TRG_GPIOINT0_16,
    LPC_IRQ_TRG_GPIOINT0_17,
    LPC_IRQ_TRG_GPIOINT0_18,
    LPC_IRQ_TRG_GPIOINT0_19,
    LPC_IRQ_TRG_GPIOINT0_20,
    LPC_IRQ_TRG_GPIOINT0_21,
    LPC_IRQ_TRG_GPIOINT0_22,
    LPC_IRQ_TRG_GPIOINT0_23,
    LPC_IRQ_TRG_GPIOINT0_24,
    LPC_IRQ_TRG_GPIOINT0_25,
    LPC_IRQ_TRG_GPIOINT0_26,
    LPC_IRQ_TRG_GPIOINT0_27,
    LPC_IRQ_TRG_GPIOINT0_28,
    LPC_IRQ_TRG_GPIOINT0_29,
    LPC_IRQ_TRG_GPIOINT0_30,
    LPC_IRQ_TRG_GPIOINT0_31,

    LPC_IRQ_TRG_GPIOINT2_00,
    LPC_IRQ_TRG_GPIOINT2_01,
    LPC_IRQ_TRG_GPIOINT2_02,
    LPC_IRQ_TRG_GPIOINT2_03,
    LPC_IRQ_TRG_GPIOINT2_04,
    LPC_IRQ_TRG_GPIOINT2_05,
    LPC_IRQ_TRG_GPIOINT2_06,
    LPC_IRQ_TRG_GPIOINT2_07,
    LPC_IRQ_TRG_GPIOINT2_08,
    LPC_IRQ_TRG_GPIOINT2_09,
    LPC_IRQ_TRG_GPIOINT2_10,
    LPC_IRQ_TRG_GPIOINT2_11,
    LPC_IRQ_TRG_GPIOINT2_12,
    LPC_IRQ_TRG_GPIOINT2_13,
    LPC_IRQ_TRG_GPIOINT2_14,
    LPC_IRQ_TRG_GPIOINT2_15,
    LPC_IRQ_TRG_GPIOINT2_16,
    LPC_IRQ_TRG_GPIOINT2_17,
    LPC_IRQ_TRG_GPIOINT2_18,
    LPC_IRQ_TRG_GPIOINT2_19,
    LPC_IRQ_TRG_GPIOINT2_20,
    LPC_IRQ_TRG_GPIOINT2_21,
    LPC_IRQ_TRG_GPIOINT2_22,
    LPC_IRQ_TRG_GPIOINT2_23,
    LPC_IRQ_TRG_GPIOINT2_24,
    LPC_IRQ_TRG_GPIOINT2_25,
    LPC_IRQ_TRG_GPIOINT2_26,
    LPC_IRQ_TRG_GPIOINT2_27,
    LPC_IRQ_TRG_GPIOINT2_28,
    LPC_IRQ_TRG_GPIOINT2_29,
    LPC_IRQ_TRG_GPIOINT2_30,
    LPC_IRQ_TRG_GPIOINT2_31,
    
    //以太网
    LPC_IRQ_TRG_ENET,
    
}LPC_IRQ_TRIGGER_SOURCE;



#ifdef __cplusplus
extern "C" {
#endif


/**
  * @brief  中断回调指针初始化
  * @param  None
  * @retval None
  */
void HW_IRQ_Init(void);
      

/**
  * @brief  设置中断触发回调
  * @param  ptr 回调指针
  * @param  ulTrgSource 触发源
  * @retval None
  */
void HW_IRQ_SetTrgCallback(void (*ptr)(void), uint32_t ulTrgSource);


/**
  * @brief  释放中断触发回调
  * @param  ulTrgSource 触发源
  * @retval None
  */
void HW_IRQ_ReleaseTrgCallback(uint32_t ulTrgSource);


#ifdef __cplusplus
}
#endif

#endif /* __HW_IRQ_HANDLER_H */
