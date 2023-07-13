/*
 * CheckUserName.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


#include <stdio.h>
#include <string.h>

void checkUserName();

void main(){


	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char user[] = "Abdelrahman Ali";
	char input[30];

	printf("Enter the user name : ");
	gets(input);

	checkUserName(user,input);

}

void checkUserName(char user[],char input[]){
	printf("the result is : %d \n",stricmp(user,input));
	printf("if the result is 0 means the user name matches the input \nelse means they don't match");
}


