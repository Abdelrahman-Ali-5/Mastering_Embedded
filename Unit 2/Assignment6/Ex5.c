/*
 * Ex5.c
 *
 *  Created on: Aug 1, 2023
 *      Author: kollaly
 */

#include <stdio.h>

struct Semployee {
	char name[15];
	int  age ;
};

int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	struct Semployee employees[3];
	struct Semployee *ptr = employees;

	for(int i = 0 ; i < 3 ; i++){
		printf("Enter employee number %d name : ",i+1);
		scanf("%s",&employees[i].name);
		printf("Enter employee number %d age : ",i+1);
		scanf("%d",&employees[i].age);
	}

	printf("\n");
	printf("\n");

	for(int i = 0 ; i < 3 ; i++){
		printf("the name of employee number %d is : %s \n",i+1,ptr->name);
		printf("the age of employee number %d is : %d \n",i+1,(*ptr).age);
		ptr++;
	}



	return 0 ;
}

