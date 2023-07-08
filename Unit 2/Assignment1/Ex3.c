/*
 * Ex3.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int x , y ;
	printf("Enter two integers : ");
	scanf("%d %d",&x , &y);
	printf("sum = %d ",x+y);
}

