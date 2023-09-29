/*
 * PowerOf3.c
 *
 *  Created on: Jul 13, 2023
 *      Author: kollaly
 */


// can be done by log .. double i = log(n) / log (3)

#include <stdio.h>

int powOf3(int num);

void main(){


	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);

	printf("the number is : %d and the result is : %d \n",num , powOf3(num));
	printf("Note : if the result is zero means it's power of 3 else result = 1 \n");
}

int powOf3(int num){
		if(num == 1 || num == 0)
			return 0;
		if((num % 3 != 0) )
			return 1 ;
		num /= 3 ;
		powOf3(num);

}

