/*
 * Ex4.c
 *
 *  Created on: Jul 12, 2023
 *      Author: kollaly
 */


// power of number using recursion

#include <stdio.h>

int calculatePower(int x , int p );

void main (){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int x , p ;
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("Enter the power : ");
	scanf("%d",&p);

	printf("%d ^ %d = %d ",x , p , calculatePower( x , p ));
}

int calculatePower(int x , int p ){
	if(p == 1){
		return x;
	}
	return x*calculatePower(x,p-1);
}

