/*
 * Ex4.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	float x , y ;
	printf("Enter two float numbers : ");
	scanf("%f %f",&x , &y);
	printf("product = %f ",x*y);
}

