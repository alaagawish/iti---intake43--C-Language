#include<iostream.h>
#include<conio.h>
//#include<math.h>

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
		Complex add(Complex c);
		Complex sub(Complex c);
		void print();
};


Complex::Complex(){
	real = imag = 0 ;
	cout<<"Default Constructor is calling"<<endl;
}


Complex::Complex(float r, float i){
	real =r; imag = i ;
	cout<<"Constructor with two parameters is calling"<<endl;
}



Complex::Complex(float r){
	real = imag = r;
	cout<<"Constructor with one parameter is calling"<<endl;
}


Complex::~Complex(){
	cout<<"Destructor is calling"<<endl;

}


void Complex::setReal(float r){
	real = r ;
}


void Complex::setImag(float i){
	imag = i ;
}


float Complex::getReal(){
	return real ;
}


float Complex::getImag(){
	return imag ;
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
	if(imag<0){
	  //	cout<<real<<" - "<<fabs(imag)<<"i"<<endl;
		cout<<"Result= "<<real<<" - "<<-1*imag<<"i"<<endl;
	}else if (imag>0){
		cout<<"Result= "<<real<<" + "<<imag<<"i"<<endl;
	}else if (imag==0){
		cout<<"Result= "<<real<<endl;
	}
}

void main(){
	clrscr() ;
	Complex num1, num2(1, -4);
	num1.setReal(1) ;
	num1.setImag(2) ;
	Complex	result = num1.add(num2) ;
	result.print() ;
	result = num1.sub(num2) ;
	result.print() ;
	Complex c(1);
	c.print();
	getch();

}