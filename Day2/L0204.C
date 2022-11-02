#include<stdio.h>
#include<conio.h>

void main(){


	int x=18,y=1;
	int i=0,j=0,k=0;
  //	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	char arr2[10][3]={"1*","2*","3*","4*","5*","6*","7*","8*","9*","10*"};
//	gotoxy(x,y);
//	for(i=0;i<10;i++){
  //		printf("%4d",arr[i]);


  //	}
//	printf("\n");
  //	gotoxy(15,y+2);
//	for(i=0;i<10;i++){

  //		printf("%3c","*");
 //	}

	gotoxy(x,y+=2);
	for(i=1;i<11;i++){

		for(j=1;j<11;j++){
			   //	printf("%3c",arr2[i-1]);
				if(i>1 && j==1){

				 printf("%3d*",i*j);
				}
				else
					printf("%4d",i*j);
				if(i==1 && j==10){
					gotoxy(x,y+=2);
					printf("   *   *   *   *   *   *   *   *   *   *   ");
					for(k=0;k<10;k++){
					  //	printf("%c","*");

					}

				}


		}

		gotoxy(x,y+=2);

	}
	getch();
	clrscr();




}