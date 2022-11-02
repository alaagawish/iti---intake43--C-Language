#include<stdio.h>
#include<conio.h>

typedef struct Employee{

		int code;
		char name[20];
		int bouns;
		int deduct;
		int salary;
		int netSalary;
};

void main(){

	int x=10,y=5,i;


	struct Employee emp[5];
	clrscr();
	for(i=0;i<5;i++){
		gotoxy(10,2);
		printf("the employee number:%d",i+1);
		x=10,y=5;
		gotoxy(x,y);
		printf("%-10s","code:");

		gotoxy(x+30,y);
		printf("%-10s","name:");


		printf("\n");

		gotoxy(x,y+=5);
		printf("%-10s","bouns:");

		gotoxy(x+30,y);
		printf("%-10s","deduct:");


		printf("\n");

		gotoxy(x,y+=5);
		printf("%-10s","salary:");

	   //	gotoxy(x+30,y);
	   //	printf("%-10s","netSal:");


		x=10,y=5;
		gotoxy(x+10,y);
		scanf("%d",&emp[i].code);

		gotoxy(x+40,y);
		scanf("%s",&emp[i].name);

		gotoxy(x+10,y+=5);
		scanf("%d",&emp[i].bouns);


		gotoxy(x+40,y);
		scanf("%d",&emp[i].deduct);


		gotoxy(x+10,y+=5);
		scanf("%d",&emp[i].salary);

		emp[i].netSalary=emp[i].salary+emp[i].bouns-emp[i].deduct;
	   //	gotoxy(x+40,y);
	   //	printf("%d",emp[i].netSalary);
	   //	getch();
		clrscr();
	}
	getch();
	x=10;
	y=5;
	gotoxy(x,y);
	printf("%s","name");

	gotoxy(x+20,y);
	printf("%s","netSal");

	gotoxy(x+40,y);
	printf("%s","code");

	gotoxy(x,y);
	for(i=0;i<5;i++){

		gotoxy(x,y+=2);
		printf("%-10s",emp[i].name);
		gotoxy(x+20,y);
		printf("%-10d",emp[i].netSalary);
		gotoxy(x+40,y);
		printf("%10s",emp[i].code);

	}



	getch();
	clrscr();



}