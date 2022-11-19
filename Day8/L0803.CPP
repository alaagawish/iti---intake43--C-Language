#include<iostream.h>
#include<conio.h>

class Point{ 
	private:
		int x ;
		int y ;
	public:
		Point(){
			x = y = 0 ;
			cout<<"Point default constructor is calling"<<endl;
		}
		Point(int m){
			x = y = m ;
			cout<<"Point one parameter constructor is calling"<<endl;
		}
		Point(int m, int n){
			x = m ;
			y = n ;
			cout<<"Point two parameter constructor is calling"<<endl;
		}
		Point(Point &p){
			x=p.x;
			y=p.y;

		}
		~Point(){
			cout<<"Point destructor is calling"<<endl;
		}
		void setX(int m){
			x = m ;
		}
		void setY(int n){
			y = n ;
		}
		void setXY(int m, int n){
			x=m;
			y=n;
		}
		int getX(){
			return x ;
		}
		int getY(){
			return y ;
		}
		void print(){
			cout<<" Point Data: x="<<x<<" y="<<y<<endl;
			}
};

class Line{
	private:
		Point start;
		Point end;
	public:
		Line() : start() , end(){
			cout<<"Line default constructor is calling"<<endl;
		}
		Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2){
			cout<<"Line constructor with 4 parameters is calling"<<endl;
		}
		Line(Point p1, Point p2) : start(p1), end(p2){
			cout<<"Line constructor with 2 points parameters is calling"<<endl;
		}
		~Line(){
			cout<<"Line destructor is calling"<<endl;
		}
		void print(){
			cout<<"Start:";
			start.print();
			cout<<"End:";
			end.print();
		}
};

class Circle{
	private:
		Point center;
		int rad;
	public:
		Circle() : center() , rad(0){
			cout<<"Circle default constructor is calling"<<endl;
		}
		Circle(int x1, int y1, int r) : center(x1, y1), rad(r){
			cout<<"Circle constructor with 3 parameters is calling"<<endl;
		}
		~Circle(){
			cout<<"Circle destructor is calling"<<endl;}
		void print(){
			cout<<"center:"; center.print();
			cout<<"Radius = "<<rad<<endl;
		}
};


class Rect{
	private:
		Point UL;
		Point LR;
	public:
		Rect() : UL() , LR(){
			cout<<"Rect default constructor is calling"<<endl;
		}
		Rect(int x1, int y1, int x2, int y2) : UL(x1, y1), LR(x2, y2){
			cout<<"Rect constructor with 4 parameter is calling"<<endl;
		}
		Rect(Point p1, Point p2) : UL(p1), LR(p2){
			cout<<"Rect constructor with 2 points parameter is calling"<<endl;
		}
		~Rect(){
			cout<<"Rect destructor is calling"<<endl;
		}
		void print(){ 
			cout<<"Upper Left:"; UL.print();
			cout<<"Lower Right:"; LR.print();
		}
};


class Picture{
	private :
		int cNum ;
		int rNum ;
		int lNum ;
		Circle *pCircles;
		Rect *pRects;
		Line *pLines;
	public :
		Picture(){
			cNum=0;
			rNum=0;
			lNum=0;
			pCircles = NULL ;
			pRects = NULL ;
			pLines = NULL ;
			cout<<"Picture default constructor is calling"<<endl;
		}

		Picture(int cNum, int rNum, int lNum, Circle *pCircles, Rect *pRects, Line *pLines){
			int i;
			this->cNum = cNum;
			this->rNum = rNum;
			this->lNum = lNum;
			//weak(aggregation)
			/*
			this->pCircles = pCircles ;
			this->pRects = pRects ;
			this->pLines = pLines ;
			*/
			//strong ,composition
			this->pCircles = new Circle[cNum] ;
			for(i=0;pCircles!=NULL && i<cNum; i++){
				this->pCircles[i]=pCircles[i];
			}
			this->pRects = new Rect[rNum] ;
			for(i=0;pRects!=NULL && i<rNum; i++){
				this->pRects[i]=pRects[i];
			}
			this->pLines = new Line[lNum] ;
			for(i=0;pLines!=NULL && i<lNum; i++){
				this->pLines[i]=pLines[i];
			}
			cout<<"picture constructor with 6 parameters is calling"<<endl;
		}
		
		~Picture(){
			delete []pCircles;
			delete []pRects;
			delete []pLines;
			cout<<"Destructor in picture is calling"<<endl;
		}
		void setCircles(int cn, Circle * cptr){
			cNum = cn ;
			pCircles = cptr ;
		}
		
		void setRects(int rn, Rect * rptr){
			rNum = rn ;
			pRects = rptr ;
		}
		void setLines(int ln, Line * lptr){
			lNum = ln ;
			pLines = lptr ;
		}
		void print(){
			int i;
			for(i=0; pCircles!=NULL && i<cNum ; i++){
				pCircles[i].print();
			}
			for(i=0 ; pRects!=NULL && i<rNum ; i++){
				pRects[i].print();
			}
			for(i=0 ; pLines!=NULL && i<lNum; i++){
				pLines[i].print();
			}
		}
};


int main(){
	clrscr();
  //	Picture myPic;
	Circle cArr[3]={Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
	Rect rArr[2]={Rect(30,40,170,100), Rect(420,50,500,300)};
	Line lArr[2]={Line(420,50,300,300), Line(40,500,500,400)};

		Picture myPic;
		myPic.setCircles(3,cArr) ;
		myPic.setRects(2,rArr) ;
		myPic.setLines(2,lArr) ;
		myPic.print() ;


/*
	Picture myPic2;
	//static allocation
	Circle cArr2[3]={Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
	//static allocation, using temporary objects
	Rect rArr2[2] ;
	rArr2[0] = Rect(30,40,170,100) ;
	Point myP1(420,50) ;
	Point myP2(500,300) ;
	rArr2[1] = Rect(myP1, myP2) ;

	//dynamic allocation, using temporary objects
	Line * lArr2 ;
	lArr2 = new Line[2] ;
	lArr2[0] = Line(Point(420,50) , Point(300,300)) ;
	lArr2[1] = Line(40,500,500,400) ;
	myPic2.setCircles(3,cArr2) ;
	myPic2.setRects(2,rArr2) ;
	myPic2.setLines(2,lArr2) ;
	myPic2.print() ;
	delete[] lArr2 ;
	*/
	getch();
	return 0;
}