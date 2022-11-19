#include<iostream.h>
#include<conio.h>


class GeoShape{ 
	protected:
		float dim1, dim2;	
	public:
		GeoShape() { 
			dim1 = dim2 = 0; 
		}
		GeoShape(float x) { 
			dim1 = dim2 = x; 
		}
		GeoShape(float x, float y) { 
			dim1 = x; 
			dim2 = y; 
		}
		//not accessible in child square ,circle object
		void setDim1(float x) { 
			dim1 = x; 
		}
		void setDim2(float x) { 
			dim2 = x; 
		}
		float getDim1() { 
			return dim1; 
		}
		float getDim2() { 
			return dim2; 
		}
		float calcArea() { 
			return 0.0; 
		}
};

class Rect: public GeoShape{ 
	public:
		Rect(float x, float y) : GeoShape(x, y) { 
			cout<<"rect constructor with 2 input parameters is calling"<<endl;
		}
		virtual float calcArea(){
			return dim1 * dim2;
		}
};


class Triangle : public GeoShape{ 
	public:
		Triangle(float b, float h):GeoShape(b, h){ 
			cout<<"triangle constructor with 2 input parameters is calling"<<endl;
		}
		float calcArea(){
			return 0.5 * dim1 * dim2;
		}
};

class Square: public Rect{
	public:
		Square(float x) : Rect(x, x) { 
			cout<<"square constructor with 2 input parameters is calling"<<endl;
		}
		void setSide(int length){
			dim1 = dim2 = length;
		}
		float calcArea(){
			return dim1 * dim2;
		}
};


class Circle : protected GeoShape{ 
	public:
		Circle(float r) : GeoShape(r){ 
			cout<<"circle constructor with 2 input parameters is calling"<<endl;
		}
		void setRadius(float rad){
			dim1 = dim2 = rad;
		}
		float calcArea(){ 
			return 22.0/7*dim1*dim2;
		}
};
int main(){ 

	clrscr();
	GeoShape *geoPtr,geoShape;
	Rect *rectPtr,rect(3,4);
	Square square(2);
	
	geoPtr=& geoShape;
	cout<<"area of geoShape using pointer,without virtual = "<<geoPtr->calcArea()<<endl;
	
	geoPtr=& rect;
	cout<<"area of rect using pointer,without virtual = "<<geoPtr->calcArea()<<endl;

	rectPtr=& rect;
	cout<<"area of rect using pointer,virtual = "<<rectPtr->calcArea()<<endl;

	rectPtr=& square;
	cout<<"area of square using pointer ,virtual fun = "<<rectPtr->calcArea()<<endl;
	
	getch();
	
}