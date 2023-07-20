/*
 * Q1_SumDigits.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int sumDigits(int num);

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("the sum of digits of number %d is : %d ",num , sumDigits(num));

	return 0;
}

int sumDigits(int num){
	int sum = 0;
	while(num != 0){
		sum += num%10;
		num /=10;
	}
	return sum;
}

