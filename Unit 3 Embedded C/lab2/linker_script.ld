/* linker script Cortex M3
Abdelrahman Elkollaly
*/

MEMORY 
{
flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
sram (RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS 
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_Text = . ;
	}> flash
	
	.data : {
			_S_Data = . ;
			*(.data)
			. = ALIGN (4) ;
			_E_Data = . ;
	}> sram AT> flash
	
	.bss : {
		_S_Bss = . ;
		*(.bss)
		_E_Bss = . ; 
		. = ALIGN(4);
		. = . + 0X1000;
		_Stack_top = . ;
	}> sram
}