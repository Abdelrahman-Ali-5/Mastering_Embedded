/*
 * Ex4.c
 *
 *  Created on: Aug 1, 2023
 *      Author: kollaly
 */


#include <stdio.h>

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int arr[15] , i ;
	int *ptr = arr;
	printf("Enter the array elements : ");
	for(i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}
	ptr+=4;
	printf("\n");
	printf("The array is : ");

	for(i = 0 ; i < 5 ; i++ ){
		printf("%d ",arr[i]);
	}

	printf("\n");
	printf("The reversed array is : ");
	for(i=4; i>= 0 ; i--){
		printf("%d ",*ptr);
		ptr--;
	}

	return 0 ;
	}
