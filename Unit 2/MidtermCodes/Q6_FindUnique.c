/*
 * Q6_FindUnique.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */

/*
#include <stdio.h>

int findUnique(int arr[], int n);

int main (){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[3];
	printf("Enter the array elements : ");
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++ ){
		scanf("%d",&arr[i]);
	}

	printf("\n");
	printf("the input array is    ");
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++ ){
		printf("%d   ",arr[i]);
	}

	printf("\n");
	printf("the unique element is : %d ",findUnique(arr,sizeof(arr)/sizeof(arr[0])));

	return 0;
}

int findUnique(int arr[], int n){
	int unique = 0;
	for(int i = 0 ; i < n ; i++){
		unique ^= arr[i];
	}
	return unique;
}
*/
