

/*
startup.c
Abdelrahman Elkollaly
*/

#include <stdint.h>

void Reset_handler();
extern int main ();
void Default_handler(){
	Reset_handler();
}



void NMI_handler() __attribute__((weak,alias("Default_handler")));
void Hfault_handler() __attribute__((weak,alias("Default_handler")));
void MMfault_handler() __attribute__((weak,alias("Default_handler")));
void Busfault_handler() __attribute__((weak,alias("Default_handler")));
void Usage_handler() __attribute__((weak,alias("Default_handler")));

extern unsigned int _Stack_top ;

uint32_t vectorsp[] __attribute__((section(".vectors"))) = {
	(uint32_t)	&_Stack_top,
	(uint32_t)	&Reset_handler,
	(uint32_t)	&NMI_handler,
	(uint32_t)	&Hfault_handler,
	(uint32_t)	&MMfault_handler,
	(uint32_t)	&Busfault_handler,
	(uint32_t)	&Usage_handler
	
};

extern unsigned int _E_Text;
extern unsigned int _S_Data;
extern unsigned int _E_Data;
extern unsigned int _S_Bss;
extern unsigned int _E_Bss;

void Reset_handler() {
	
	// copy .data section from flash to RAM
	unsigned int Data_size = (unsigned char *)&_E_Data - (unsigned char *)&_S_Data ;    // lazm & 3shan enta da symbol msh variable
	unsigned char * P_src = (unsigned char *)&_E_Text ;
	unsigned char * P_des = (unsigned char *)&_S_Data ;
	
	for ( int i = 0 ; i < Data_size ; i++ ) {
		*((unsigned char *)P_des++) = *((unsigned char *)P_src++);
	}
	
	//init .bss section in sram = 0 
	unsigned int Bss_size = (unsigned char *)&_E_Bss - (unsigned char *)&_S_Bss ;  
	P_des = ( unsigned char *) &_S_Bss;
	for ( int i = 0 ; i < Bss_size ; i++ ) {
		*((unsigned char *)P_des++) = (unsigned char *) 0 ;
	}
	//jump to main
	main();
}
