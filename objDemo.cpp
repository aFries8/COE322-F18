#include <iostream>
#include <random>

using std::cout;
using std::endl;

class Point{
	private:
		double px, py;
	public:
		Point() //default constructor, no variables passed, just define variables
		{
			cout << "Default Constuctor Used" << endl;
			px = 1; py = 1;
		}
		Point(double x, double y)
		{
			cout << "Secondary Constructor used" << endl;
			px = x; py = y;
		}

		double getx() // these are called getters
		{
			return px;
		}
	
		double gety()
		{
			return py;
		}
		
		void setx(double x)
		{
			px = x;
		}
	
		void sety(double y)
		{
			py = y;
		}
	
		void printPoint()
		{
			cout << px << ", " << py << endl;
		}
		
		double distance(Point point2)
		{
			return sqrt(pow(px-point2.getx(),2) + pow(py-point2.gety(),2));
		}

		//another option
		double distance(double x, double y)
		{
			return sqrt(pow(px-x,2) + pow(py-y,2));
		}
		//even though these last two functions have the same name, they take different variable types so the compiler knows the difference.
		Point factorPoint(double f)
		{
			Point p3(px*f, py*f);
			return p3;
		}
};

double distanceBetweenPoints(Point point1, Point point2)
{
	return sqrt(pow((point1.getx()-point2.getx()),2) + pow((point1.gety()-point2.gety()),2));
	//some sort of calculation
}

double myFunction(double x, double y)
{
	//does the same thing as before (above)
}

int main()
{
	Point p1;
//	p1.px = 3.5;
//	p1.py = 5;
	
//	p2.px = 4.8;
//	p2.py = 7.8;
// with the private variables, you can't do this anymore because you can't access them
	cout << p1.getx() << ", " << p1.gety() << endl; //now you do this
	
	Point p2(3.5, 7.8);
	cout << p2.getx() << ", " << p2.gety() << endl;

//	cout << p1.px << ", " << p1.py << endl;
//	cout << p2.px << ", " << p2.py << endl;
	p1.printPoint();

	//old way, calling the function, passing both points
	cout << "distance between p1 and p2" << distanceBetweenPoints(p1, p2) << endl;

	//new way, callinga method inside the class
	cout << p1.distance(p2) << endl;
	cout << p1.distance(3,4) << endl;

	Point newPoint = p1.factorPoint(2);
	newPoint.printPoint();


}


