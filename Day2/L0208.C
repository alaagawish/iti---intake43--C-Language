#include<stdio.h>
#include<conio.h>


void main(){


	int x=27,y=6;

	int i=0,j=0,sum=0;
	float avg=0.0;
	int numbers[3][3];


	for(i=0;i<3;i++){
		sum=0;
		gotoxy(x,y+=3);
		for(j=0;j<3;j++){

		   gotoxy(x+=7,y);
		   scanf("%d",&numbers[i][j]);
		   sum+=numbers[i][j];

		}
		gotoxy(x+=7,y);
		printf("%d",sum);
		x=27;

	}
	x=28;
	gotoxy(x,y+=2);
	for(i=0;i<3;i++){
		avg=0;
		gotoxy(x+=6,y);
		for(j=0;j<3;j++){
			avg+=numbers[j][i];


		}

		printf("%3.1f",avg/3);

	}
	getch();
	clrscr();


}