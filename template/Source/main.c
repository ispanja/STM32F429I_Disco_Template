/* main.c */ 
#include <main.h> 
/*
Systick example with periodic cycle turn on and off red and green LED.
*/

int main(void) 
{
	systickInit(1000); 	// 1000 for delay in miliseconds
 	gpio_init();  	
	while(1) 
 	{ 		
 

 	 	gpio_led_state(LED3_GREEN_ID, 0); 	// turn off green led 	
 	 	gpio_led_state(LED4_RED_ID, 1);  		// turn on 	red led
		delay_ms(2000); 		
		 	
		gpio_led_state(LED3_GREEN_ID, 1); 	// turn on green led
 	 	gpio_led_state(LED4_RED_ID, 0); 	 	// turn off red led
 	 	delay_ms(1000);	
 	 	
 	} 	 
}

