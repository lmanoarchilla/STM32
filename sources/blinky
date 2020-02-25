//**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f0xx.h"
#include "stm32f0308_discovery.h"
__IO uint8_t UserButtonPressed = 0x00;

int main(void)
{

	HAL_Init();

	BSP_LED_Init(LED4);
	BSP_LED_Init(LED3);

	BSP_LED_On(LED3);
	BSP_LED_On(LED4);

	while(1){

		BSP_LED_Toggle(LED4);
		HAL_Delay(1000);
		BSP_LED_Toggle(LED3);
	}
}
