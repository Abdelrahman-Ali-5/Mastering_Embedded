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

	int n , fact = 1 ;
	printf("Enter an integer to compute its factorial : ");
	scanf("%d",&n);

	if( n > 0){
	for( int i = 1 ; i <= n ; i++ ){
		fact *= i ;
	}
	printf("The factorial of %d is %d ",n,fact);
	}
	else{
	printf("There is no factorial for negative numbers ");

	}
}

