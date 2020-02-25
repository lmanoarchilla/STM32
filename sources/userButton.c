/**
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
	BSP_PB_Init(BUTTON_USER,BUTTON_MODE_GPIO);

	BSP_LED_On(LED4);
	BSP_LED_On(LED3);


	while(1){
	if (BSP_PB_GetState(BUTTON_USER) != GPIO_PIN_RESET){//key pressed
		BSP_LED_Off(LED4);
		BSP_LED_Off(LED3);



	}else{
		BSP_LED_On(LED4);
		BSP_LED_On(LED3);
	}

	}
}
