/*
 * Ex4.c
 *
 *  Created on: Jul 20, 2023
 *      Author: kollaly
 */


#include <stdio.h>

struct Sstudent {
	char name[50] ;
	int roll;
	float mark;
};

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Sstudent students[3];

	printf("enter information of students : \n");

	for(int i = 0 ; i <3 ; i++){
		printf("enter information of student Number %d : \n",i+1);
		printf("enter name : ");
		scanf("%s",students[i].name);
		printf("enter roll : ");
		scanf("%d",&students[i].roll);
		printf("enter mark : ");
		scanf("%f",&students[i].mark);
	}

	printf("The students information entered are : \n");
	for(int i = 0 ; i <3 ; i++){
		printf("information of student Number %d : \n",i+1);
		printf("name : %s \n",students[i].name);
		printf("roll : %d \n",students[i].roll);
		printf("mark : %f \n",students[i].mark);
	}

}

