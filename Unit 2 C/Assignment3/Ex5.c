/*
 * Ex5.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n ;
	int arr[15];
	int element ;
	int pos = -1 ;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(int i = 0 ; i < n ; i++){
		printf("Enter element number %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("Enter the element u want to find its position : ");
	scanf("%d",&element);

	for(int i = 0 ;i < n ; i++){
		if(arr[i]==element){
			pos = i ;
			break;
		}
	}

	if( pos == -1 ){
		printf("The element is not found ! ");
	}
	else {
		printf("The element is at position %d  ",pos+1);
	}
}

