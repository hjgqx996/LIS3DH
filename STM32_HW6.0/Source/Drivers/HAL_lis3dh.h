/**
  * @file    HAL_LIS331DLH.h
  * @author  AMS VMA RF application team
  * @version V2.2
  * @date    01/11/2011
  * @brief   Hardware Abstraction Layer for LIS331DLH.
  * @details
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * THIS SOURCE CODE IS PROTECTED BY A LICENSE.
  * FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
  * IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */

/* Define to prevent recursive inclusion*/
#ifndef __HAL_LIS331DLH_H
#define __HAL_LIS331DLH_H

#ifdef __cplusplus
 extern "C" {
#endif 
  
/* Includes */
#include "stm32l1xx.h"
#include "platform.h"

/**
* @addtogroup LIS331DLH
* @{
*/
   
/**
* @addtogroup  LIS331DLH_SPI_Define
* @{
*/
#define LIS_SPI                  PT_BMA250E_SPI
#define LIS_RCC_Periph_SPI       PT_RCC_APBxPeriph_SPI_BMA250E
#define LIS_SPI_Port             PT_BMA250E_SPI_PORT
#define LIS_SPI_AF               PT_BMA250E_SPI_AF
#define LIS_SPI_MISO_Pin         PT_BMA250E_SPI_SOMI_PIN
#define LIS_SPI_MISO_SOURCE      PT_BMA250E_SPI_SOMI_PINSOURCE
#define LIS_SPI_M0SI_Pin         PT_BMA250E_SPI_SIMO_PIN
#define LIS_SPI_MOSI_SOURCE      PT_BMA250E_SPI_SIMO_PINSOURCE
#define LIS_SPI_SCK_Pin          PT_BMA250E_SPI_SCLK_PIN
#define LIS_SPI_SCK_SOURCE       PT_BMA250E_SPI_SCLK_PINSOURCE
#define LIS_SPI_CS_Pin           PT_BMA250E_SPI_STE_PIN
#define LIS_SPI_CS_Port          PT_BMA250E_SPI_STE_PORT
#define LIS_RCC_Port_SPI         PT_BMA250E_SPI_STE_GPIO_CLK

 /**
*@}
*/ /* end of group LIS331DLH_SPI_Define */ 



/**
* @addtogroup Accelerometer_Interrupt_Pin_Define
* @{
*/
#define LIS_A_INT2_PIN           	  PT_BMA250E_INT2_GPIO_PIN
#define LIS_A_INT2_GPIO_PORT     	  PT_BMA250E_INT2_GPIO_PORT
#define LIS_A_INT2_GPIO_CLK      	  PT_BMA250E_INT2_GPIO_CLK
#define LIS_A_INT2_EXTI_LINE     	  PT_BMA250E_INT2_EXTI_LINE
#define LIS_A_INT2_EXTI_PIN_SOURCE 	  PT_BMA250E_INT2_EXTI_PIN
#define LIS_A_INT2_EXTI_PORT_SOURCE   PT_BMA250E_INT2_EXTI_PORT
#define LIS_A_INT2_EXTI_IRQn		  EXTI15_10_IRQn
#define LIS3DH_INT2_IRQHandler        EXTI15_10_IRQHandler

#define LIS_A_INT1_PIN           	  PT_BMA250E_INT1_GPIO_PIN
#define LIS_A_INT1_GPIO_PORT     	  PT_BMA250E_INT1_GPIO_PORT
#define LIS_A_INT1_GPIO_CLK      	  PT_BMA250E_INT1_GPIO_CLK
#define LIS_A_INT1_EXTI_LINE     	  PT_BMA250E_INT1_EXTI_LINE
#define LIS_A_INT1_EXTI_PIN_SOURCE 	  PT_BMA250E_INT1_EXTI_PIN
#define LIS_A_INT1_EXTI_PORT_SOURCE   PT_BMA250E_INT1_EXTI_PORT
#define LIS_A_INT1_EXTI_IRQn		  EXTI3_IRQn
#define LIS3DH_INT1_IRQHandler        EEXTI3_IRQHandler


/**
*@}
*/ /* end of group Accelerometer_Interrupt_Pin_Define */


/**
*@}
*/ /* end of group LIS331DLH */



#endif /* __HAL_LIS331DLH_H */

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
