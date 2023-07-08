/*
 * Ex7.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int x , y ;

	printf("Enter number a : ");
	scanf("%d",&x);
	printf("Enter number b : ");
	scanf("%d",&y);

	//swapping using arithmetic operations

	//x = x + y ;
	//y = x - y ;
	//x = x - y ;

	//swapping using bitwise XOR

	//x = x ^ y ;
	//y = x ^ y ;
	//x = x ^ y ;


	//swapping using mix between arithmetic and bitwise
	x = ( x & y ) + ( x | y);   // x = x + y
	y = x + ( ~ y ) + 1 ;      // y = x - y
	x = x + ( ~ y ) + 1 ;     // x = x - y

	printf("after swapping value of a is : %d \n" ,x);
	printf("after swapping value of b is : %d \n" ,y);
}

