/*
 * ClearBit.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int clearBit(int num,int bit);

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num_bef , num_aft ;
	unsigned int bit ;

	printf("Enter number : ");
	scanf("%d",&num_bef);
	printf("Enter number of bit : ");
	scanf("%d",&bit);
	printf("number is : %d \n",num_bef);
	num_aft = clearBit(num_bef,bit);
	printf("number afer clear is : %d  \n",num_aft);

}

int clearBit(int num , int bit){
	num &= ~(1<<bit);
	return num;
}

