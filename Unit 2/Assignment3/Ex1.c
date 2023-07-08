/*
 * Ex1.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	float arr1[2][2] ;
	float arr2[2][2] ;
	float sum [2][2] ;

	for( int i = 0 ; i < 2 ; i++){
		for( int j = 0 ; j < 2 ; j++){
			printf("Enter number at position [%d][%d] of first matrix : ",i,j);
			scanf("%f",&arr1[i][j]);
		}
	}

	printf("\n");

	for( int i = 0 ; i < 2 ; i++){
		for( int j = 0 ; j < 2 ; j++){
			printf("Enter number at position [%d][%d] of second matrix : ",i,j);
			scanf("%f",&arr2[i][j]);
		}
	}

	printf("The sum matrix is : \n");
	for( int i = 0 ; i < 2 ; i++){
		for( int j = 0 ; j < 2 ; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j] ;
			printf("%.2f   ",sum[i][j]);
		}
		printf("\n");
	}

}

