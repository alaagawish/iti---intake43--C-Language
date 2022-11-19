#include<stdio.h>
#include<alloc.h>
#include<conio.h>

void main(void){


	int arrSize, i,j, nameSize;


	char **arr;
	//char *name;

	clrscr();
	arr=(char *)malloc(arrSize*sizeof(char *));


	printf("Enter number of names:");

	scanf("%d",&arrSize);

	for(i=0;i<arrSize;i++){

		printf("\nEnter number of characters in name number[%d]:",i);
		scanf("%d",&nameSize);

		arr[i]=(char *)malloc(nameSize*sizeof(char));
	  /*	for(j=0;j<nameSize ;j++){
			flushall();
			scanf("%c",&arr[i][j]);

		}
		*/
		flushall();
		scanf("%s",arr[i]);
		arr[i][nameSize]='\0';



	}
	for(i=0 ;i<sizeof(arr);i++){

		printf("\nthe string num[%d]: %s\n",i,arr[i]);


	}



	getch();
	free(arr);
}