#include<stdio.h>
#include<conio.h>

void main(){


	int x=40,y=8;

	int dim=3,i=1;
	int currNum=1;
	clrscr();
	gotoxy(x,y);
	printf("%d",currNum);

	for(i=2;i<10;i++){
		if (currNum % dim !=0 ){

			if(	x>=40)
				x-=27;
			else if(x==13)
				x+=54;
			if(	y==8)
				y+=16 ;
			else
				y-=8;

			gotoxy(x,y);
			currNum+=1;
			printf("%d",currNum);

		}
		else{

			if(y==16 || y==8)
				y+=8;


			else
				y-=16;
			gotoxy(x,y);
			printf( "%d",++currNum);

		}

	}


		getch();
		clrscr();


}