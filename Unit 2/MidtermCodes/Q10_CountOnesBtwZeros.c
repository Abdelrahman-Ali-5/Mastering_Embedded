/*
 * Q10_CountOnesBtwZeros.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */

/*
#include <stdio.h>

int CountMaxOnes(int num);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf("Maximum number of ones is : %d", CountMaxOnes(num));

}

int CountMaxOnes(int num) {
	int mask = 0x80000000;
	int i;
	int countOnes = 0;
	int max = 0;

	for (i = 0; i < 31; i++) {
		if ((num << i) & mask) {
			countOnes++;
			if (max <= countOnes) {
				max = countOnes;
			}
		} else {
			countOnes = 0;
		}
	}
	return max;
}

*/
