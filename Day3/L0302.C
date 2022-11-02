#include<stdio.h>
#include<conio.h>


void main(){

	int base=2,power=3,i;

	long result=1;


	for(i=0;i<power;i++){

		result *=base;
	}

	printf("power(%d,%d)=%ld",base,power,result);

	getch();
	clrscr();

}