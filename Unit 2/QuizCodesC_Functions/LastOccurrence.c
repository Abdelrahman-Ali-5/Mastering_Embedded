/*
 * LastOccurence.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int lastOcc(int arr[], int n , int num);

void main(){


	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int arr[7];
	int num ;
	int last ;
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
	printf("Enter the number to find its last occurrence : ");
	scanf("%d",&num);

	last = lastOcc(arr,sizeof(arr)/sizeof(arr[0]), num);
	printf("the number : %d , its last occurrence is : %d ",num , last);

}

int lastOcc(int arr[], int n , int num){

for(int i = n - 1  ; i>= 0 ; i--){
	if(arr[i]==num){
		return i;
	}
}
return -1 ;
}

