/*
 * Q3_Primes.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void getPrime(int a , int b , int arr[]);

void main (){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int a , b , i ;
	int last_index ;
	int arr[50];
	printf("Enter two numbers ( the interval ) : ");
	scanf("%d %d",&a,&b);
	getPrime(a,b,arr);
	printf("prime numbers between %d and %d are : ",a,b);
	for(i = 0 ; i < 50 ; i++){
		if (arr[i] == -1)
			last_index = i;
	}
	for(i = 0 ; i < last_index ; i++ ){
		printf("%d   ",arr[i]);
	}

}

void getPrime(int a , int b , int arr[]){
	int i , j  ;
	int flag = 0;
	int k = 0 ;
	for(i = a+1 ; i < b ; i++){
		if ( i == 1 )
			continue;
		for( j = 2 ; j < i ; j++){
			if((i%j) == 0){
				flag = 1 ;
				break;
			}
		}
		if(flag == 0){
			arr[k] = i ;
			k++;
		}
		else{
			flag = 0 ;
		}
	}
	arr[k] = -1;
}


