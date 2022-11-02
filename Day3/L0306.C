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

struct Employee addEmployee(){

	int x=10,y=5;

	struct Employee emp1;
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

	//gotoxy(x+30,y);
	//printf("%-10s","netSal:");


	x=10,y=5;
	gotoxy(x+10,y);
	scanf("%d",&emp1.code);

	gotoxy(x+40,y);
	scanf("%s",&emp1.name);

	gotoxy(x+10,y+=5);
	scanf("%d",&emp1.bouns);


	gotoxy(x+40,y);
	scanf("%d",&emp1.deduct);


	gotoxy(x+10,y+=5);
	scanf("%d",&emp1.salary);

	emp1.netSalary=emp1.salary+emp1.bouns-emp1.deduct;
	//gotoxy(x+40,y);
	//printf("%f",emp1.salary+emp1.bouns-emp1.deduct);
    clrscr();
	return emp1;


}
void printEmployee(struct Employee emp1){
	
	int x=10,y=5;
	
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

	gotoxy(x+30,y);
	printf("%-10s","netSal:");


	x=10,y=5;
	gotoxy(x+10,y);
	printf("%d",emp1.code);

	gotoxy(x+40,y);
	printf("%s",emp1.name);

	gotoxy(x+10,y+=5);
	printf("%d",emp1.bouns);


	gotoxy(x+40,y);
	printf("%d",emp1.deduct);


	gotoxy(x+10,y+=5);
	printf("%d",emp1.salary);


	gotoxy(x+40,y);
	printf("%d",emp1.netSalary);

}

void main(){

	struct Employee empp;
	empp=addEmployee();
	printEmployee(empp);

	getch();
	clrscr();

	
	
}