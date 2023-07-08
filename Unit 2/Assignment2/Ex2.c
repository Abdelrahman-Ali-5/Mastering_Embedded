/*
 * Ex2.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */

#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char x ;
	printf("Enter an alphabet : ");
	scanf("%c",&x);

	if( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u'
			|| x == 'A' || x == 'E' || x == 'I' || x == 'O' || x =='U'){
		printf("this alphabetic is vowel");
	}
	else {
		printf("this alphabetic is consonant");
	}

}

