/*
 * Ex5.c
 *
 *  Created on: Jul 20, 2023
 *      Author: kollaly
 */


#include <stdio.h>
#define PI 3.1415
#define calcArea(radius) (PI*radius*radius)

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int radius;
	printf("enter the radius : ");
	scanf("%d",&radius);
	printf("the area is : %0.2f",calcArea(radius));
return 0;
}

