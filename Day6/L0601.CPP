#include<iostream.h>
#include<conio.h>

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
		void print();
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
   //	cout<<"Destructor is calling"<<endl;

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



void Complex::print(){
   /*	if(imag<0){
	  //	cout<<real<<" - "<<fabs(imag)<<"i"<<endl;
		cout<<"Result= "<<real<<" - "<<-1*imag<<"i"<<endl;
	}else if (imag>0){
		cout<<"Result= "<<real<<" + "<<imag<<"i"<<endl;
	}else if (imag==0){
		cout<<"Result= "<<real<<endl;
	}else if (real==0){
		cout<<"Result= "<<imag<<"i"<<endl;
	}                    */
	if(real>0 || real<0){
		if(imag>0)
			cout<<"Result= "<<real<<" + "<<imag<<"i"<<endl;
		else if (imag<0)
			cout<<"Result= "<<real<<" - "<<-1*imag<<"i"<<endl;
		else
			cout<<"Result= "<<real<<endl;
	}else {
		if(imag>0)
			cout<<"Result= "<<imag<<"i"<<endl;
		else if (imag<0)
			cout<<"Result= "<<-1*imag<<"i"<<endl;
		else
			cout<<"Result= "<<"0"<<endl;
	}
}

void main(){
	clrscr() ;
	Complex num1, num2(1, -4),n1(0,0),n2(1,0),n3(0,-1),n4(0,4),n5(-1,-3);
	num1.setReal(1) ;
	num1.setImag(2) ;
	Complex	result = num1.add(num2) ;
	result.print() ;
	result = num1.sub(num2) ;
	result.print() ;
	Complex c(1);
	n1.print();
	n2.print();
	n3.print();
	n4.print();
	n5.print();
   //	Complex c;
	c.setAll(2222,3333);

	c.print();
	getch();

}