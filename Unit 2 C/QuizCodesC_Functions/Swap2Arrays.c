/*
 * Swap2Arrays.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void swap(int a1[] , int n1 , int a2[] , int n2);

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int a1[15],a2[15];
	int n1 , n2 ;

	printf("Enter the size of first array : ");
	scanf("%d",&n1);
	printf("Enter the first array elements : ");
	for(int i = 0 ; i < n1 ; i++ ){
		scanf("%d",&a1[i]);
	}


	printf("\n");
	printf("Enter the size of second array : ");
	scanf("%d",&n2);
	printf("Enter the second array elements : ");
	for(int i = 0 ; i < n2 ; i++ ){
		scanf("%d",&a2[i]);
	}

	printf("\n");
	printf("before swapping \n");
	printf("\n");
	printf("the first array is :  ");
	for(int i = 0 ; i < n1; i++ ){
		printf("%d   ",a1[i]);
	}

	printf("\n");
	printf("the second array is :  ");
	for(int i = 0 ; i < n2; i++ ){
		printf("%d   ",a2[i]);
	}

	swap(a1,n1,a2,n2);

	printf("\n");
	printf("after swapping \n");
	printf("\n");
	printf("the first array is :  ");
	for(int i = 0 ; i < n2; i++ ){
		printf("%d   ",a1[i]);
	}

	printf("\n");
	printf("the second array is :  ");
	for(int i = 0 ; i < n1; i++ ){
		printf("%d   ",a2[i]);
	}

}

void swap(int a1[] , int n1 , int a2[] , int n2){

	int i ,  temp;
	for(i = 0 ; (i < n1) && (i < n2) ; i++ ){
		temp = a1[i];
		a1[i] = a2[i];
		a2[i] = temp;
	}
	if(i >= n2){
		while(i<n1){
			a2[i] = a1[i];
			i++;
		}
	}
	else{
		while(i<n2){
			a1[i] = a2[i];
			i++;
		}
	}
}

