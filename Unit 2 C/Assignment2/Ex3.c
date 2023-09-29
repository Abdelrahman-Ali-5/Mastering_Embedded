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

	int x , y , z , largest ;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&x , &y , &z );

	if ( x > y )
	{
		if ( x > z )
			largest = x ;
		else
			largest = z ;
	}
	else{
		if ( y > z )
			largest = y ;
		else
			largest = z ;
	}
	printf("The largest number between %d , %d , %d is %d ",x,y,z,largest);

}

