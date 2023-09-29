/*
 * Ex1.c
 *
 *  Created on: Jul 22, 2023
 *      Author: kollaly
 */

#include <stdio.h>

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int m = 29 ;
	int *ab = &m ;
	printf("address of m is : %x \n",&m);
	printf("value of m is : %d \n",m);
	printf("Using Pointer \n");
	printf("address of m is : %x \n",ab);
	printf("value of m is : %d \n",*ab);
	printf("change m \n");
	m = 34;
	printf("address of m is : %x \n",ab);
	printf("value of m is : %d \n",*ab);
	printf("change *ab \n");
	*ab = 7 ;
	printf("address of m is : %x \n",ab);
	printf("value of m is : %d \n",*ab);

	return 0 ;

}
