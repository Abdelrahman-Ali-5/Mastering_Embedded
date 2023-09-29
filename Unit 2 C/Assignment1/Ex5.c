/*
 * Ex5.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char x ;
	printf("Enter a character : ");
	scanf("%c",&x);
	printf("ASCII value of %c is %d " ,x ,x );
}

