/*
 * StringEx1.c
 *
 *  Created on: Jul 8, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char string[50];
	char ch ;
	int i = 0;
	int count = 0;
	printf("Enter a String : ");
	gets(string);

	printf("Enter a character to know it's frequency : ");
	scanf("%c",&ch);

	while(string[i]!=0){
		if(string[i]==ch)
			count++;
		i++;
	}
	printf("frequency of character %c is %d ",ch,count);
}

