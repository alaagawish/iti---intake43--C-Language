#include<iostream.h>
#include<conio.h>


class Base{
	private:
		int aa;
		int bb;

	protected:
		int a ;
		int b ;
		
	public:
		Base(){
			a=b=0 ;
		}
		Base(int n){
			a=b=n ;
		}
		Base(int x, int y){
			a = x ;
			b = y ;
		}
		Base(int x, int y,int w ,int z){
			a = x ;
			b = y ;
			aa = w;
			bb = z;
		}
		void setA(int x){
			a = x ;
		}

	public:
		void disp(){
			cout<<"Function of Parent Class"<<endl;
		}


		void setB(int y){

			b = y ;
		}
		int getA(){
			return a ;
		}
		int getB(){
			return b ;
		}
		void setAa(int y){

			aa = y ;
		}
		int getAa(){
			return aa ;
		}
		void setBb(int y){

			bb = y ;
		}
		int getBb(){
			return bb ;
		}
		int calPrivate(){
			return a+aa+b+bb;
		}
		int calculateSum(){
			return a + b ;
		}


};
class Derived : public Base{

	private:
		int c ;

	public:
		Derived() : Base(){
			c = 0 ;
		}
		Derived(int n) : Base(n){
			c = n ;
		}
		Derived(int x, int y, int z) : Base(x,y){
			c = z ;
		}
		Derived(int x, int y, int w, int z) : Base(x,y,w,z){
			c = z ;
		}

	 //  int c;
	public:
		void disp() {
			cout<<"Function of Child Class"<<endl;
		}

		void setC(int z){
			c = z ;
		}
		int getC(){
			return c ;
		}
		int calculateSum() {
			return a + b + c ;
		}
		int calPrivate(){
			return a+b+c+getAa()+getBb();
		 //	return a+b+c+aa+bb;    //NOT ACCESSIBLE
		}
};

class Cderived : protected Base{

	private:
		int c ;

	public:
		Cderived() : Base(){
			c = 0 ;
		}
		Cderived(int n) : Base(n){
			c = n ;
		}
		Cderived(int x, int y, int z) : Base(x,y){
			c = z ;
		}
		Cderived(int x, int y, int w, int z) : Base(x,y,w,z){
			c = z ;
		}

	 //  int c;
	public:
		void disp() {
			cout<<"Function of Child Class"<<endl;
		}

		void setC(int z){
			c = z ;
		}
		int getC(){
			return c ;
		}
		int calculateSum() {
			return a + b + c ;
		}
		int calPrivate(){
			return a+b+c+getAa()+getBb();
		 //	return a+b+c+aa+bb;    //NOT ACCESSIBLE
		}
};
int main() {

	clrscr() ;
   //	/*


	Base b(5,4) ;
	cout<<b.calculateSum()<<endl ;
	Cderived ob(20) ;
	cout<<"ob: "<<ob.calculateSum()<<endl ;

	Derived obj1 ;
	obj1.setA(3) ;
	obj1.setB(7) ;
	obj1.setC(1) ;
	obj1.setAa(2);
	obj1.setBb(1);

	Derived obj2(20) ;

	Derived obj3(4,5,6) ;
	Derived obj4(4,5,6,2) ;
	cout<<"obj1: "<<obj1.calculateSum()<<endl ;
	cout<<"obj2: "<<obj2.calculateSum()<<endl ;
	cout<<"obj3: "<<obj3.calculateSum()<<endl ;
	cout<<"obj4: "<<obj4.calPrivate()<<endl ;
	cout<<"obj1: "<<obj1.Base::calculateSum()<<endl ;
	


  /*
	Derived obj = Derived(); 
	obj.disp(); 
	obj.Base::disp(); 

	Derived d;
	d.b=5;    	//NOT ACCESSIBLE
	d.a=7; 		//NOT ACCESSIBLE
	d.z=12;              	 //NOT MEMBER OF DERIVED
	d.x=-13; 				//NOT MEMBER OF DERIVED
	d.setX();
	cout<<d.getY()<<endl;
	
   */
	getch() ;
	return 0 ;
	
}

