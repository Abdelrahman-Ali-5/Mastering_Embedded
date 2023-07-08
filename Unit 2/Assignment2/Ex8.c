/*
 * Ex8.c
 *
 *  Created on: Jul 5, 2023
 *      Author: kollaly
 */


#include <stdio.h>

void main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char c ;
	float a , b ;
	printf("Enter operator either + - * / : ");
	scanf("%c",&c);
	printf("Enter two operands : ");
	scanf("%f %f",&a,&b);

	switch (c)
	{
	case '+' :
		printf("summation of %f and %f is %f ",a,b,a+b);
		break;
	case '-' :
		printf("difference of %f and %f is %f ",a,b,a-b);
		break;
	case '*' :
		printf("multiplication of %f and %f is %f ",a,b,a*b);
		break;
	case '/' :
		printf("division of %f and %f is %f ",a,b,a/b);
		break;
	default :
		printf("you entered wrong operator !");
	}
}

