#include<iostream.h>
#include<conio.h>

void swap(int &n1 ,int &n2){
	
	int temp=n1;
	n1=n2;
	n2=temp;

}


void main (){
	clrscr();
	int num1=1,num2=3;
	
	int &x=num1,&y=num2;
	
	cout <<"Before Swapping"<<endl;
	cout <<"num1= "<<num1<<endl;
	cout <<"num2= "<<num2<<endl;
	
	swap(x,y);
	
	cout <<"After Swapping"<<endl;
	cout <<"num1= "<<num1<<endl;
	cout <<"num2= "<<num2<<endl;
	getch();
	
}