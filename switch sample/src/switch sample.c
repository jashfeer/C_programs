/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);

	printf("1 for poratta \n2 for biriyani \n3 for mandhi \n4 forchappathi \nenter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("selected poratta");
		break;
	case 2:
		printf("selected biriyani");
				break;
	case 3:
		printf("selected mandhi");
				break;
	case 4:
		printf("selected chappathi");
				break;
	default:
		printf("fool");
	}
	return EXIT_SUCCESS;
}
