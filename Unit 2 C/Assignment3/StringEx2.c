/*
 * StringEx2.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char string[50];
	int i = 0;
	int count = 0;
	printf("Enter a String : ");
	gets(string);

	while(string[i]!=0){
			count++;
			i++;
	}
	printf("length of string is %d ",count);
}

