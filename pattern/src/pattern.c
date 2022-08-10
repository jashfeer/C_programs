/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=5;
	setbuf(stdout,NULL);
	printf("enter the row\n");
	//sacnf("%d",&n);

	for(i=n;i>=1;i--){
		for(j=0;j<i;j++){
			printf("* ");

		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}
