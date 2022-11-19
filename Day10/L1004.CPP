#include<iostream.h>
#include<conio.h>
template <class t>
class Stack{
	private:
		int top ; 
		int size; 
		t *ptr; 
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
			ptr = new t[size];
			counter ++;
			cout<<"This is the default constructor"<<endl;
		}

		Stack(t n)
		{
			top = 0;
			size = n;
			ptr = new t[size];
			counter ++;
			cout<<"This is a constructor with one parameter"<<endl;
		}
		~f()
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
			ptr = new t[size];
			for(i=0;i<top;i++)
				 ptr[i] = s.ptr[i];
			cout<<"calling copy constructor"<<endl;
		}     f
		int pop(t & n)
		{
			if (isEmpty())
				return 0;
			top--;
			n = ptr[top];
			return 1;
		}


		int push(t n)
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
};
template <class t>

int Stack<t>::counter = 0;

template <class t>
void viewContent (Stack<t> s)
{
	for(int i = 0; i<s.top ; i++)
		cout<<"Element no ("<<i+1<<") ="<< s.ptr[i]<<endl;
}


int main()
{
	int num;
	clrscr();
	Stack<int> s(2);
	cout<<"No of Int Stacks is:"<<Stack<int>::getCounter();
	Stack<int> s1(5);
	cout<<"No of Int Stacks is:"<<Stack<int>::getCounter();
	s1.push(10);
	s1.push(3);
	s1.push(2);
	s1.pop(num);
	cout << "\nlast pushing: " <<num;
	s1.pop(num);
	cout << "\ntop of stack: " <<num;


	Stack<char> s2;
	char c;
	cout <<"\nNo of Char Stacks is:"<<Stack<char>::getCounter();
	s2.push('q');
	s2.push('r');
	s2.push('s');
	viewContent(s2) ;
	s2.pop(c);
	cout << "\n1st character: " <<c;
	s2.pop(c);
	cout << "\n2nd character: " <<c;
	getch();
	return 0;
}