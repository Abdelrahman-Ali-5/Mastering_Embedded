/*
 * Least4thBit.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int get4thBit(int num);

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num ;

	printf("Enter the number : ");
	scanf("%d",&num);

	printf("\nthe number in binary is : ");

	printBinary(num);

	printf("\n");
	printf("the least 4th bit is : %d ",get4thBit(num));

}

int get4thBit(int num){
	return (num & (1<<3))>>3 ;
}

void printBinary(int num){
	int k ;
	for ( int i = 31 ; i >= 0 ; i--){
		k = num >> i;
		if(k&1)
			printf("1") ;
		else
			printf("0") ;

	}
}

