#include "uart.h"
unsigned char string_buff[100] = "learn_in_depth_kollaly" ;
unsigned char const string2[100] = "create_ro_data" ;
unsigned char const string3[100] = "change only this file" ;


void main(void){
	
	uart_sendString(string_buff);
	
}