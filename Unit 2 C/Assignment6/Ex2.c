/*
 * Ex2.c
 *
 *  Created on: Aug 1, 2023
 *      Author: kollaly
 */

#include <stdio.h>

int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char scapital = 'A';
	char *ptr = &scapital;

	for(int i = 0 ; i < 26 ; i++){
		printf("%c  ",*ptr);
		(*ptr)++;
	}


	return 0;
}
