#include<iostream.h>
#include<conio.h>
//#include<complex.h>

struct Complex {

	private:
		float real;
		float imag;

	public:
		Complex();
		Complex(float r);
		Complex(float r, float i);
		
		~Complex();
		void setReal(float r);
		void setImag(float i);
		float getReal();
		float getImag();

		void setAll();
		void setAll(float f);
		void setAll(float r, float i);



		Complex add(Complex c);
		Complex sub(Complex c);

		Complex(Complex &c){
			real=c.real;
			imag=c.imag;
			cout<<"copy construct"<<endl;

		}

		void print()
		{
			if(real>0 || real<0){
				if(imag>0)
					cout<<"Result= "<<real<<" + "<<imag<<"i"<<endl;
				else if (imag<0)
					cout<<"Result= "<<real<<" - "<<-1*imag<<"i"<<endl;
				else
					cout<<"Result= "<<real<<endl;
			}else {
				if(imag==1)
					cout<<"Result="<<"i"<<endl;
				else if(imag==0)
					cout<<"Result= "<<"0"<<endl;
				else
					cout<<"Result= "<<imag<<"i"<<endl;
			}
		}

		Complex operator+(Complex &c){
			return Complex(real+c.real,imag+c.imag);
		}
		Complex operator-(Complex &c){
			return Complex(real-c.real,imag-c.imag);
		}
		Complex operator*(Complex &c){

			return Complex(real*c.real-imag*c.imag,real*c.imag+c.real*imag);
		}
		Complex operator/(Complex &c){
			//r1+i1/r2+i2   *   r2-i2/r2-i2
			return Complex(real*c.real+imag*c.imag,real*c.imag+c.real*imag);
		}
		//prefix
		Complex operator++(){
		   this->real++;
		   this->imag++;
			return *this;
		}

		Complex operator--(){
			real--;
			imag--;
			return Complex(real,imag);
		}
		
		//postfix
		Complex operator++(int dumy){
			Complex temp(*this);
		    real++;
		    imag++;
			return temp;
		}

		Complex operator--(int dumy){
			Complex temp(*this);
			real--;
			imag--;
			return temp;
		}
		 /*
		Complex& operator= (Complex & c)
		{
			real=c.real;
			imag=c.imag;
			return *this;
		}*/
		Complex& operator+= (Complex & c)
		{
			real+=c.real;
			imag+=c.imag;
			return *this;
		}

		Complex& operator-= (Complex & c)
		{
			real-=c.real;
			imag-=c.imag;
			return *this;
		}

		Complex& operator*= (Complex & c)
		{
			float temp=real;
			real=real*c.real-imag*c.imag;
			imag=c.imag*temp+imag*c.real;
			return *this;
		}
		//casting 
		
		operator float()
		{
		//	return sqrt(real*real+imag*imag);
		}
		operator int()
		{
		//	return sqrt(real*real+imag*imag);
		}
		
		
};


Complex::Complex(){
	real = imag = 0 ;
   //	cout<<"Default Constructor is calling"<<endl;
}


Complex::Complex(float real, float imag){
	this->real =real;
	this->imag = imag ;
  //	cout<<"Constructor with two parameters is calling"<<endl;
}



Complex::Complex(float r){
	this->real =r;
	this->imag = r;
   //	cout<<"Constructor with one parameter is calling"<<endl;
}


Complex::~Complex(){
	cout<<"Destructor is calling"<<endl;

}


void Complex::setReal(float real){
	this->real = real ;
}


void Complex::setImag(float imag){
	this->imag = imag ;
}


float Complex::getReal(){
	return real ;
}


float Complex::getImag(){
	return imag ;
}

void Complex::setAll()
{
	real = imag = 0;
}
void Complex::setAll(float f)
{
	this->real = f;
	this->imag = f;
}
void Complex::setAll(float r, float i)
{
	real = r;
	imag = i;
}

Complex Complex::add(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}


Complex Complex::sub(Complex c){
	Complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;

}


void main(){
	clrscr() ;
	Complex num1, num2(1, -4),n1(0,0),n2(1,0),n3(0,-1),n4(0,4),n5(-1,-3),result;
	num1.setReal(1) ;
	num1.setImag(2) ;
	//result =num1+num2;
	//cout<<"result=num1+num2=";
	//result.print();
	//result =n5-num2;
	//cout<<"result=num1-num2=";
	//result.print();
   ////	cout<<n5-num2<<endl;
	//result =n5*num2;
	//cout<<"result=num1*num2=";
	//result.print();
	//cout<<"postfix increment , decrement: "<<endl;
	//
	//n1.print();
	//n2.print();
	//n1=n1++;
	//n2=n2--;
	//
	//n1.print();
	//n2.print();
	//cout<<"prefix increment , decrement: "<<endl;
	//
	//num2.print();
	//n5.print();
	//
	//num2=++num2;
	//n5=++n5;
	//
	//num2.print();
	//n5.print();
	Complex c;
	cout<<"testing equality\nbefore:"<<endl;
	c.print();
	c=n5;
	cout<<"after"<<endl;
	n5.print();
	c.print();
	cout<<"testing +=\nbefore:"<<endl;
	n3.print();
	n3+=n5;
	cout<<"after"<<endl;
	n3.print();


	getch();

}