/*
 * Q5_CountBinary.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int countBinary(int num);
int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	printf("Number of ones in the number is : %d ", countBinary(num));

	return 0;

}

int countBinary(int num){

	int count = 0;
	int mask = 0x80000000;
	int i;

	for (i = 0; i < 32; i++) {
		if ((mask & num)) {
			count++;
		}
		num = num << 1;
	}
	return count;
}

