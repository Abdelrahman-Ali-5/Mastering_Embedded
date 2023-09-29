/*
 * Ex4.c
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
	int x ;
	int pos ;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(int i = 0 ; i < n ; i++){
		printf("Enter element number %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("The array before insert \n");
	for ( int i = 0 ; i < n ;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");

	printf("Enter element u want to insert : ");
	scanf("%d",&x);

	printf("Enter position u want to insert : ");
	scanf("%d",&pos);

	if(pos > n){
		//you insert after the position given
		// if pos = 2 , element = 7 , arr = 1 2 3 ,, after insertion arr = 1 2 7 3
		printf("position is larger than size of array !");
	}

	else{
		for ( int i = n ; i > pos ; i-- ){
			arr[i] = arr[i-1];
		}
		arr[pos] = x;
		printf("\n");
		printf("The array after insert \n");

		for ( int i = 0 ; i <= n ;i++){
			printf("%d \t",arr[i]);
		}
	}
}

