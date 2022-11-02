#include<stdio.h>
#include<conio.h>



long power(int base, int pow){
	if(pow==0)
		return 1;
	else if (pow==1)
		return base;
	else

		return base*power(base,pow-1);

}
void main(){

	int base=3 ,num=3;

	long result;

	result=power(base,num);

	printf("power(%d,%d)=%ld",base,num,result);

	getch();
	clrscr();

}