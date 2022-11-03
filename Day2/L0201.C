#include<stdio.h>
#include<conio.h>


void main(){

	int x,y,i,row,column;
	int dim=5,currNum=1;


	x=dim-(dim-1)/2;
	row=80/(dim+1);
	column=25/dim;
	y=1;
	clrscr();
	gotoxy(x*row,y*column);
	printf("%d",1);

	for(i=1;i<dim*dim;i++){
		if (i%dim != 0){
			x--;
			y--;
			if(x==0)
				x=dim;
			if(y==0)
				y=dim;

			gotoxy(x*row,y*column);
			printf("%d",i+1);

		}
		else{
			if(y==dim)
				y=1;
			else
				y++;

			gotoxy(x*row,y*column);
			printf("%d",i+1);

		}

	  }
	  getch();
	}
