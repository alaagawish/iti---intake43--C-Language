#include<stdio.h>
#include<string.h>

void main(){

	char a,b;

	scanf("\n Enter first char:%c \n",&a);
	b=getch("ENTER  second char: \n");

	printf("\nthe first char=%c \n the second one=%c \n",a,b);

	printf("the ASCII OF char=%d",a);


	getch();
}