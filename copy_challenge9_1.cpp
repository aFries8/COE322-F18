//Program Name: In Class Challenge 9.1: Intro to Objects
//Amanda Fries, amanda.fries@utexas.edu, af32249
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

class Point
{
	public:
		float px, py;

		Point( float xcoordinate, float ycoordinate)
		{
			px = xcoordinate;
			py = ycoordinate;
		}
	
		float distance_to_origin()
		{
			return sqrt(px*px + py*py);
		}
	
		void printout()
		{
			cout << "The point is: " << px << ", " << py << endl;
		}
	
		float getx()
		{ return px;
		}

		float gety()
		{ return py;
		}

		float distance(Point point2)
		{
			return sqrt(pow(px-point2.getx(),2) + pow(py-point2.gety(),2));		
		}
};

int main()
{
	float x,y,x2,y2;
	cout << "Please input an x coordinate for point 1: ";
	cin >> x; 
	cout << "Please input a y coordinate for point 1: ";
	cin >> y;
	Point p1(x, y);
	cout << "Distance from point to origin: " << p1.distance_to_origin() << endl;
	p1.printout();

	cout << "Please input an x coordinate for point 2: ";
	cin >> x2;
	cout << "Please input a y coordinate for point 2: ";
	cin >> y2;
	Point p2(x2,y2);

	cout << "Distance betweeen point 1 and point 2: " << p1.distance(p2) << endl;
}
