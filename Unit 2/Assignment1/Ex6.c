/*
 * Ex6.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	float a , b , temp ;

	printf("Enter a flaot number a : ");
	scanf("%f",&a);
	printf("Enter a flaot number b : ");
	scanf("%f",&b);

	temp = a ;
	a = b ;
	b = temp;

	printf("after swapping value of a is : %f \n" ,a);
	printf("after swapping value of b is : %f \n" ,b);
}

