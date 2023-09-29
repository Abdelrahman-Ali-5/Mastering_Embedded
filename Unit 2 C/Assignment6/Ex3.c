/*
 * Ex3.c
 *
 *  Created on: Aug 1, 2023
 *      Author: kollaly
 */

#include <stdio.h>

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char st[15];
	printf("Enter the string : ");
	gets(st);

	char *ptr = st;

	int i = 0 , count = 0;
	while(st[i] != '\0'){
		ptr++;
		count++;
		i++;
	}

	for(i=count;i>=0;i--){
		ptr--;
		printf("%c",*ptr);
	}

return 0;
}

