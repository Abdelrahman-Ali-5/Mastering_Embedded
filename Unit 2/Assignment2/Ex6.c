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

	int n , sum = 0 ;
	printf("Enter an integer to stop with : ");
	scanf("%d",&n);

	for( int i = 1 ; i <= n ; i++ ){
		sum += i ;
	}
	printf("The sum from 1 to %d is %d ",n,sum);

}

