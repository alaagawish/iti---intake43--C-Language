#include<iostream.h>
#include<conio.h>

class Stack
{
	private:
		int top ;
		int size;
		int *ptr;
		static int counter;

	public:
		int isFull() ;
		int isEmpty();
	   

		friend void viewContent(Stack s);


		static int getCounter()
		{
			return counter;
		}
		Stack()
		{
			top = 0 ;
			size = 10;
			ptr = new int[size];
			counter ++;
			cout<<"\nThis is the default constructor"<<endl;
		}

		Stack(int n)
		{
			top = 0;
			size = n;
			ptr = new int[size];
			counter ++;
			cout<<"\nThis is a constructor with one parameter"<<endl;
		}
		~Stack()
		{
			delete[] ptr;
			size=0;
			counter --;
			cout<<"\nThis is the destructor"<<endl;
		}


		int push(int n);
		int pop(int & n);
};
int Stack::isFull()
{
	return (top==size) ;
}
int Stack::isEmpty()
{
	return (top==0) ;
}


int Stack::push(int n)
{
	if (isFull())
		return 0;
	ptr[top] = n;
	top++;
	cout<<"push done"<<endl;
	return 1;
}

int Stack::counter = 0;

int Stack::pop(int & n)
{
	if (isEmpty())
		return 0;
	top--;
	n = ptr[top];
	return 1;
}


void viewContent (Stack s)
{
	for(int i = 0; i<s.top ; i++)
	cout<<"\n Element no ("<<i+1<<") ="<< s.ptr[i];
}


int main()
{
	clrscr() ;
	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
	Stack s1, s2(5);
	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
	{
		Stack s3(10);
		cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
	}
	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;


	int num ;
	Stack s11(5) ;
	s11.push(5);
	s11.push(14);
	s11.push(20) ;
	viewContent(s11);
	if(s1.pop(num))
	{
		cout<<num<<endl ;
	}

	getch();
	return 0;
}
