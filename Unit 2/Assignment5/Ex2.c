/*
 * Ex2.c
 *
 *  Created on: Jul 20, 2023
 *      Author: kollaly
 */


#include <stdio.h>

struct Sdistance {

	int feet;
	float inch;
};

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Sdistance d1 , d2 , sum ;


	printf("enter information of 1st distance : \n");
	printf("enter feet : ");
	scanf("%d",&d1.feet);
	printf("enter inch : ");
	scanf("%f",&d1.inch);

	printf("enter information of 2snd distance : \n");
	printf("enter feet : ");
	scanf("%d",&d2.feet);
	printf("enter inch : ");
	scanf("%f",&d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	while(sum.inch >= 12.0){
		sum.inch -= 12.0;
		sum.feet++;
	}

	printf("The sum of two distances is : %d\'-%.1f\"",sum.feet,sum.inch);
}

