/*
 ============================================================================
 Name        : basic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);


	printf(" 1 for addition /n2for subtraction /n3 for multty /n4 for divition /n enter your choice");
	scanf("%d",&c);
	if(c==1){
		d=a+b;
		printf("answer is %d",d);
	}
	else if(c==2){
		d=a-b;
		printf("answer %d ",d);
	}
	else if(c==3){
			d=a*b;
			printf("answer %d ",d);
		}
	else if(c==4){
			d=a/b;
			printf("answer %d ",d);
		}
	else{
		printf("sorry");
	}

	return EXIT_SUCCESS;
}
