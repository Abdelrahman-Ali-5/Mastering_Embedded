/*
 * StringEx3.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>
#include <string.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char string[50];
	int i = 0 ;
	int j = 0 ;
	int temp;

	printf("Enter a String : ");
	gets(string);

	j = strlen(string) - 1;

	while(i < j ){
			temp = string[i];
			string[i] = string[j];
			string[j] = temp;
			i++;
			j--;
	}
	printf("reversed string is %s ",string);
}

