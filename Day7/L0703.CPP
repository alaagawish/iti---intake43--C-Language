#include<iostream.h>
#include<conio.h>

class Stack{
	private:
		int top ; 
		int size; 
		int *ptr; 
		static int counter; 
	public:
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
			cout<<"This is the default constructor"<<endl;
		}

		Stack(int n)
		{
			top = 0;
			size = n;
			ptr = new int[size];
			counter ++;
			cout<<"This is a constructor with one parameter"<<endl;
		}
		~Stack()
		{
			delete[] ptr;
			size=0;
			counter --;
			cout<<"This is the destructor"<<endl;
		}
		//copy constructor
		Stack(Stack &s)
		{
			int i;
			top = s.top;
			size = s.size;
			ptr = new int[size];
			for(i=0;i<top;i++)
				ptr[i] = s.ptr[i];
			cout<<"calling copy constructor"<<endl;
		}
		int pop(int & n)
		{
			if (isEmpty())
				return 0;
			top--;
			n = ptr[top];
			return 1;
		}


		int push(int n)
		{
			if (isFull())
				return 0;
			ptr[top] = n;
			top++;
			cout<<"push done"<<endl;
			return 1;
		}

		int isFull()
		{
			return (top==size) ;
		}
		int isEmpty()
		{
			return (top==0) ;
		}
							   /*
		Stack& operator=(Stack &s)
		{
			int i;
			delete []ptr;
			top = s.top;
			size = s.size;
			ptr = new int[size];
			for(i=0;i<top;i++)
				ptr[i] = s.ptr[i];
			delete []s.ptr;
			cout<<"operator = "<<endl;
		   //	return *this;
		}                    */
};

int Stack::counter = 0;


void viewContent (Stack s)
{
	for(int i = 0; i<s.top ; i++)
		cout<<"Element no ("<<i+1<<") ="<< s.ptr[i]<<endl;
}


int main()
{
	int num;
	clrscr();
	//Stack s(10);
	//s.push(7);
	//s.push(13);
	//s.push(-5);
	//Stack copy(s);
	//{
	//	Stack s3(copy);
	//	cout<<"copy constructor: "<<endl;
	//	s3.pop(num);
	//	s3.pop(num);
	//	cout<<"num from cpy="<<num<<endl;
	//}
	//copy.pop(num);
	//cout<<"cpy:"<<num<<endl;
	//s.pop(num);
	//cout<<"orginal:"<<num<<endl;

	Stack s1(4),s2,s3;
	s1.push(2);
	s1.push(5);
	s1.push(0);
	s1.push(3);
	s2=s1=s3;
	s3=s1;
	s2.pop(num);
	cout<<"s2 pop: "<<num<<endl;
	s1.pop(num);
	cout<<"s1 pop: "<<num<<endl;
	s1.pop(num);
	cout<<"s1 pop: "<<num<<endl;
	s2.pop(num);
	cout<<"s2 pop: "<<num<<endl;
	s3.pop(num);
	cout<<"s2 pop: "<<num<<endl;
	getch();
	return 0;
}