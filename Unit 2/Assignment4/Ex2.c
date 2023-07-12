/*
 * Ex2.c
 *
 *  Created on: Jul 12, 2023
 *      Author: kollaly
 */

 // factorial using recursion

#include <stdio.h>

int factorial(int x);

void main (){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int a;

	printf("Enter the number to calculate factorial : ");
	scanf("%d",&a);

	printf("factorial of %d is : %d ",a,factorial(a));
}

int factorial ( int x ){

	if( (x == 0) || (x == 1)){
		return 1;
	}
	return x*factorial(x-1);
}

