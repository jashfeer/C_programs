/*
 ============================================================================
 Name        : serachkey.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,a[100],seachkey,flag;
	setbuf(stdout,NULL);
	printf("array limit");
	scanf("%d",&limit);
	printf("enter array values\n");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("please enter search key");
	scanf("%d",&seachkey);
	for(i=0;i<limit;i++){
		if(seachkey==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("found at %d position",i+1);
	}
	else{
		printf("not founded");

	}

	return EXIT_SUCCESS;
}
