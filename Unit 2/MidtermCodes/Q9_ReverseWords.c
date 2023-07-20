/*
 * Q9_ReverseWords.c
 *
 *  Created on: Jul 15, 2023
 *      Author: kollaly
 */

/*
#include <stdio.h>
#include <string.h>


void reverseWords(char arr[],char swapped[]);

int main (){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char arr[20];
	char swapped[20];
	printf("Enter a sentence : ");
	gets(arr);

	reverseWords(arr,swapped);
	puts(swapped);

	return 0;
}

void reverseWords(char arr[],char swapped[]){
	int i = 0 , j = 0;
	char temp[20];
	while(arr[i]!= ' ')
	{
		temp[i]=arr[i];
		i++;
	}
	temp[i]='\0';
	i++;
	while(arr[i]!='\0'){
		swapped[j] = arr[i];
		i++;
		j++;
	}
	j = 0;
	strcat(swapped," ");
	strcat(swapped,temp);

}
*/
