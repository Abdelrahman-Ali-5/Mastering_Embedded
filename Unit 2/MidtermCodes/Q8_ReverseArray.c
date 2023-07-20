/*
 * Q8_ReverseArray.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */

/*
#include <stdio.h>
void reverseArr();
void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int arr[5];
	printf("Enter the array elements : ");
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++ ){
		scanf("%d",&arr[i]);
	}

	printf("\n");
	printf("the input array is    ");
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++ ){
		printf("%d   ",arr[i]);
	}

	reverseArr(arr,sizeof(arr)/sizeof(arr[0]));

	printf("\n");
	printf("the reversed array is ");
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++ ){
		printf("%d   ",arr[i]);
	}
}

void reverseArr(int arr[] , int n ){
	int i = 0 , j = n - 1;
	int temp;
	while(i<j){
		temp = arr[i] ;
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

}
*/
