/*
 * Q4_ReverseDigits.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int reverseDigits(int num);

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("the number with reversed digits is : %d " ,reverseDigits(num));

}

int reverseDigits(int num){
	int reversed =0;
	while ( num != 0){
		int x;
		x = num%10;
		num = num/10;
		reversed = reversed * 10 + x ;
	}
	return reversed;
}

