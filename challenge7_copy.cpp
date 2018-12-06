// Program Name: Challenge7 - Right Triangle Stucture
// Amanda Fries, amanda.fries@utexas.edu, af32249
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct triangle {
	int sideA;
	int sideB;
	float h;
	float angA;
	float angB;
	float angC;
};	

void compute(triangle &a);


int main()
{
	triangle Tri1;
	Tri1.sideA = 3;
	Tri1.sideB = 4;
	compute(Tri1);
	cout << "A right triangle with sides of " << Tri1.sideA << " and " << Tri1.sideB << endl; 
	cout << "has a hypotenuse of " << Tri1.h << endl;
	cout << "and has angles of " << Tri1.angA << " degrees, " << Tri1.angB << " degrees, and " << Tri1.angC << " degrees." <<  endl;

	cout << endl;

	triangle Tri2;
	Tri2.sideA = 5;
	Tri2.sideB = 12;
	compute(Tri2);
	cout << "A right triangle with sides of " << Tri2.sideA << " and " << Tri2.sideB << endl;
	cout << "has a hypotenuse of " << Tri2.h << endl;
	cout << "and has angles of " << Tri2.angA << " degrees, " << Tri2.angB << " degrees, and " << Tri2.angC << " degrees." << endl;
}

void compute(triangle &a)
{
	a.h = sqrt((pow(a.sideA,2)) + pow(a.sideB,2));
	a.angA = asin(a.sideA / a.h) * 180.0/M_PI;
	a.angB = asin(a.sideB / a.h) * 180.0/M_PI;
	a.angC = 180 - a.angA -  a.angB;
}

