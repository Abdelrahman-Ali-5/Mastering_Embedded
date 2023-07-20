/*
 * Ex3.c
 *
 *  Created on: Jul 20, 2023
 *      Author: kollaly
 */


#include <stdio.h>

struct Scomplex {

	float real;
	float img ;
};

struct Scomplex addComplex (struct Scomplex C1 , struct Scomplex C2);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Scomplex comp1 , comp2 ;


	printf("enter values of 1st complex number real then imaginary respectively  : \n");
	scanf("%f %f",&comp1.real,&comp1.img);

	printf("enter values of 2nd complex number real then imaginary respectively  : \n");
	scanf("%f %f",&comp2.real,&comp2.img);

	printf("The sum of two numbers is : %.2f + %.2fi \n",	addComplex(comp1,comp2).real,	addComplex(comp1,comp2).img);

}

struct Scomplex addComplex (struct Scomplex C1 , struct Scomplex C2){
	struct Scomplex sum;
	sum.real = C1.real + C2.real;
	sum.img = C1.img + C2.img;
	return sum;
}

