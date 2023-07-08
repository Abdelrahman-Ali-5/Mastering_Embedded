/*
 * Ex2.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n ;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	float arr[15];
	float sum = 0 ;

	for(int i = 0 ; i < n ; i++){
		printf("Enter element number %d : ",i+1);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}


	printf("average is %f ",sum/n);

}

