/*
 * Ex1.c
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

	struct Sstudent student1 ;
	printf("enter the name of student : ");
	gets(student1.name);
	printf("enter the roll of student : ");
	scanf("%d",&student1.roll);
	printf("enter the mark of student : ");
	scanf("%f",&student1.mark);

	printf("the student information is : \n");
	printf("name of student is : %s \n",student1.name);
	printf("roll of student is : %d \n",student1.roll);
	printf("mark of student is : %.3f \n",student1.mark);

}
