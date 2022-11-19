#include<stdio.h>
#include<conio.h>


void copyFun(char* source,char* destination);

void main (){


	char source[50],destination[50]=" ";
	clrscr();
	printf("Enter the word: ");
	scanf("%s",&source);

	printf("\nBefore:\n\tSource:%s\n\tDest:%s",source,destination);

	copyFun(source,destination);

	printf("\nAfter:\n\tSource:%s\n\tDest:%s",source,destination);


	getch();
	clrscr();
}

void copyFun(char* source,char* destination){

   //	while(*source !=NULL){

   //		*destination=*source;
   //		destination++;
   //		source++;

   //}
   //	*destination='\0';
	int i;
	for(i=0;i<50 && *source!='\0';i++){

		destination[i]=source[i];


	}


}