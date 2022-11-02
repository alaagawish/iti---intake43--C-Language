#include<stdio.h>


void main(){




	int numbers[5];
	int i;

	printf("enter 5 numbers:\n");

	for(i=0;i<5;i++){

		scanf("%d",&numbers[i]);

	}

	for(i=0;i<5;i++){

		printf("array number[%d]=%d\n",i,numbers[i]);


	}
	getch();
	clrscr();



}