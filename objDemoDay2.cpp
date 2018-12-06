#include <iostream>
#include <random>

using std::cout;
using std::endl;

class Rectangle {
	private:
		double l,h;	
	public:
		Rectangle(){
		       	   }
	Rectangle( double length, double height) {
		l = length;
		h = height;
	};
	double getlength() { return l; };
	double getheight() { return h; };
	void setlenght(double length) { l = length; }
	void setheight(double height) { h = height; }
	
	double area() { return l*h;}
	double perimeter() { return 2*(l+h); } 

	int printSummary()
	{
		cout << "Rectangle Summary::" << endl;
		cout << "Length: " << l << endl;
		cout << "Height: " << h << endl;
		cout << "Area: " << area() << endl;
		cout << "Perimeter: " << perimeter() << endl;
	}
};

int main()
{
	Rectangle myR(50,100);
	myR.printSummary();
}
