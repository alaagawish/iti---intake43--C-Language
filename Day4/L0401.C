#include<stdio.h>
#include<conio.h>

void swapFun (int * numberOne, int * numberTwo);

void main (void){

	int numOne,numTwo;
	clrscr();
	printf("Enter number one:");
	scanf("%d",&numOne);
	printf("\nEnter number two:");
	scanf("%d",&numTwo);
	
	swapFun(&numOne,&numTwo);
	
	printf("\nNumber one after:%d\n",numOne);

	printf("Number two after:%d",numTwo);

	getch();
	
}



void swapFun (int * numberOne, int * numberTwo){ 
	int temp;
	temp = *numberOne;
	*numberOne = *numberTwo;
	*numberTwo = temp;
	
}