/*
 * Ex1.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int x ;
	printf("Enter an integer you want to check : ");
	scanf("%d",&x);
	if(x%2 == 0 ){
		printf("Number is even");
	}
	else {
		printf("Number is odd");
	}

}

