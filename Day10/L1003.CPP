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
		virtual float calcArea() =0;
	   //	friend float sumAreas(GeoShape * p1, GeoShape * p1, GeoShape * p3);
};
class Rect: public GeoShape{
	public:
		Rect(float x, float y) : GeoShape(x, y) {
			cout<<"rect constructor with 2 input parameters is calling"<<endl;
		}
		float calcArea(){
			cout<<"area of rect"<<endl;
			return dim1 * dim2;
		}
		//friend float sumAreasR(GeoShape * p1, Square * p1, Rect * p3);

};

class Square: public Rect{ 
	public:
		Square(float x) : Rect(x, x) { 
			cout<<"Square constructor with 2 input parameters is calling"<<endl;
		}
};

class Triangle : public GeoShape{ 
	public:
		Triangle(float b, float h):GeoShape(b, h){
			cout<<"Triangle constructor with 2 input parameters is calling"<<endl;
		}
		float calcArea(){
			cout<<"area of triangle"<<endl;
			return 0.5 * dim1 * dim2;
		}
};


class Circle : public GeoShape{ 
	public:
		Circle(float r) : GeoShape(r) { 
			cout<<"Circle constructor with 2 input parameters is calling"<<endl;
		}
		float calcArea(){ 
			cout<<"circle area"<<endl;
			return 22.0/7 * dim1 * dim2; 
		}
		//friend float sumAreasC(Square p1, Rect p1, Circle  p3);

};



float sumAreas(GeoShape * p1, GeoShape * p2, GeoShape * p3){
	return p1->calcArea()+p2->calcArea()+p3->calcArea();
}

float sumAreasC(Square p1, Rect p2, Circle  p3){
	return p1.calcArea()+p2.calcArea()+p3.calcArea();

}

float sumAreasR(GeoShape * p1, Square * p2, Rect * p3){
	return p1->calcArea()+p2->calcArea()+p3->calcArea();

}

void main(){
	clrscr();
	GeoShape g1; //compiler error:cant create instance of abstract class
	
	getch();
}