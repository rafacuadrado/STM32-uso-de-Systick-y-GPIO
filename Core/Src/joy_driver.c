/*
 * joy_driver.c
 *
 *  Created on: Sep 30, 2025
 *      Author: pablo
 */

#include "stm32l4xx_hal.h"

uint8_t cont=0;
uint8_t pulsado=0;

uint8_t antes = 1;
uint8_t actual = 0;


uint8_t ReadJoy(){

	//Queremos que cada vez que reciba un 0

	uint8_t deteccion = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);

	if(deteccion == 1 && antes == 0) {
		actual = 1;
		antes
		return actual;
	}else if(deteccion ==1 && antes ===1){
		cont++;
		pulsado=1;
	}else if(deteccion==0 && pulsado==1) {
		return 0;
	}

	return cont;
}
