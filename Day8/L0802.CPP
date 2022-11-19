#include<iostream.h>
#include<conio.h>
//#include<complex.h>
#include<math.h>
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
		 
		Complex& operator= (Complex & c)
		{
			real=c.real;
			imag=c.imag;
			return *this;
		}
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

		Complex& operator*= (Complex & c){
			float temp=real;
			real=real*c.real-imag*c.imag;
			imag=c.imag*temp+imag*c.real;
			return *this;
		}
		//casting 
		
		operator float(){
			return sqrt(real*real+imag*imag);
		}
		operator int(){
			return sqrt(real*real+imag*imag);
		}
		
		
};


Complex::Complex(){
	real = imag = 0 ;
   	cout<<"Default Constructor is calling"<<endl;
}


Complex::Complex(float real, float imag){
	this->real =real;
	this->imag = imag ;
  	cout<<"Constructor with two parameters is calling"<<endl;
}



Complex::Complex(float r){
	this->real =r;
	this->imag = r;
   	cout<<"Constructor with one parameter is calling"<<endl;
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


int main(){
	
	clrscr();

    int i;
	Complex arr[3] = {Complex(2), Complex(), Complex(5,7)};
	
	for(i = 0 ; i<3 ; i++)
		arr[i].print();
	{
			Complex a[4];
			a[2]=Complex(3,3);
			a[1]=a[2]*arr[0];
	}


	Complex * cptr,*cptr2;
	cptr = new Complex(2.1, 7.3);
	cptr = new Complex[12];
	getch();
	return 0;
}