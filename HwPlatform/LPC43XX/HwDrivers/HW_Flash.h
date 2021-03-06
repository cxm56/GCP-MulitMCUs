#ifndef  __HW_FLASH_H
#define  __HW_FLASH_H

#include "chip.h"

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * FALSH相关操作接口函数
 ****************************************************************************/

/**
  * @brief  FLASH初始化
  * @param  None
  * @retval Flash操作结果
  */
int32_t HW_FLASH_Init(void);


/**
  * @brief  FLASH扇区号获取
  * @param  ulFlashAddr Flash地址
  * @retval 扇区号,-1表示无效结果
  */
int32_t HW_FLASH_GetSector(uint32_t ulFlashAddr);


/**
  * @brief  FLASH擦除
  * @param  ulFlashBank   FLASH块
  * @param  ulStartSector 开始扇区
  * @param  ulEndSector   结束扇区
  * @retval Flash操作结果
  * @note   当擦除一个扇区时,开始扇区等于结束扇区
  */
int32_t HW_FLASH_Erase(uint32_t ulFlashBank, uint32_t ulStartSector, uint32_t ulEndSector);


/**
  * @brief  FLASH写入
  * @param  ulFlashAddr Flash地址
  * @param  pWriteBuff 写入缓冲区的指针
  * @param  ulByteSize 字节数
  * @retval Flash操作结果
  * @note   写入的数据的字节数应当为 256, 512, 1024 或 4096
  */
int32_t HW_FLASH_Write(uint32_t ulFlashAddr, uint8_t *pWriteBuff, uint32_t ulByteSize);


/**
  * @brief  FLASH读取
  * @param  ulFlashAddr Flash地址
  * @param  pRecvBuff 读取缓冲区的指针
  * @param  ulByteSize 字节数
  * @retval 读取的字节数,-1为读取失败(flash地址无效)
  */
int32_t HW_FLASH_Read(uint32_t ulFlashAddr, uint8_t *pRecvBuff, uint32_t ulByteSize);


#ifdef __cplusplus
}
#endif

#endif /* __HW_FLASH_H */