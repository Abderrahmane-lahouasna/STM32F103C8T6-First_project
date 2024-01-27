

#include <stdint.h>
#include"Stm32F103C8T6.h"


int main(void)
{
   RCC->APB2ENR |=(1<<4);//enable clock access GPIOC
   GPIOC->CRH &=~(1<<20);
   GPIOC->CRH |=(1<<21);
   GPIOC->CRH &=~(1<<22);
   GPIOC->CRH &=~(1<<23);
    /* Loop forever */
	for(;;){
		GPIOC->ODR |=(1<<13);
		for(int i=0;i<100000;i++){
        }
		GPIOC->ODR &=~(1<<13);
		for(int i=0;i<100000;i++){
        }
	}
}
