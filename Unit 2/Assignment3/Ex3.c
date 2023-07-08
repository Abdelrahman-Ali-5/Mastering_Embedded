/*
 * Ex3.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int r , c ;
	int matrix[50][50];
	int transpose[50][50];
	printf("Enter the number of rows of matrix : ");
	scanf("%d",&r);
	printf("Enter the number of columns of matrix : ");
	scanf("%d",&c);

	for ( int i=0 ; i < r ; i++){
		for( int j = 0 ; j < c ; j++ ){
			printf("Enter element [%d][%d] of matrix : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("The matrix is : \n");

	for ( int i=0 ; i < r ; i++){
		for( int j = 0 ; j < c ; j++ ){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	// take care lazm t3ks el rows w el coloumn fl for condition
	for ( int i=0 ; i < c ; i++){
		for( int j = 0 ; j < r ; j++ ){
			transpose[i][j] = matrix[j][i];
		}
	}

	printf("\n");
	printf("The transpose is : \n");

	for ( int i=0 ; i < c ; i++){
		for( int j = 0 ; j < r ; j++ ){
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}

}


