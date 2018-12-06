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

float compute(int &a, int &b, float &H, float &A, float &B, float &C);


int main()
{
	triangle Tri1;
	Tri1.sideA = 3;
	Tri1.sideB = 4;
	Tri1.h = compute(Tri1.sideA, Tri1.sideB, Tri1.h, Tri1.angA, Tri1.angB, Tri1.angC);
	cout << "A right triangle with sides of " << Tri1.sideA << " and " << Tri1.sideB << endl; 
	cout << "has a hypotenuse of " << Tri1.h << endl;
	cout << "and has angles of " << Tri1.angA << " degrees, " << Tri1.angB << " degrees, and " << Tri1.angC << " degrees." <<  endl;

	cout << endl;

	triangle Tri2;
	Tri2.sideA = 5;
	Tri2.sideB = 12;
	Tri2.h = compute(Tri2.sideA, Tri2.sideB, Tri2.h, Tri2.angA, Tri2.angB, Tri2.angC);
	cout << "A right triangle with sides of " << Tri2.sideA << " and " << Tri2.sideB << endl;
	cout << "has a hypotenuse of " << Tri2.h << endl;
	cout << "and has angles of " << Tri2.angA << " degrees, " << Tri2.angB << " degrees, and " << Tri2.angC << " degrees." << endl;
}

float compute(int &a, int &b, float &H, float &A, float &B, float &C)
{
	H = sqrt((pow(a,2)) + pow(b,2));
	A = asin(a / H) * 180.0/M_PI;
	B = asin(b / H) * 180.0/M_PI;
	C = 180 - A - B;
	return H;
}

