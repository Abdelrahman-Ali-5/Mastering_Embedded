/*
 * Ex3.c
 *
 *  Created on: Jul 12, 2023
 *      Author: kollaly
 */

// reverse a sentence using recursion


#include <stdio.h>
#include <string.h>


void reverseRecursion(char arr[] , int n);

void main (){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char arr[50];
	printf("Enter a sentence : ");
	gets(arr);
	//"margorp emosewa";

	reverseRecursion(arr,strlen(arr));
}

void reverseRecursion(char arr[],int n){
	if( n == 1 ){
		printf("%c",arr[0]);
		return;
	}
	printf("%c",arr[n-1]);
	reverseRecursion(arr,n-1);

}

