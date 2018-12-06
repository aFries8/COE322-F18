// Program Name: Challenge 4: socatoah, Back to the Future
// Amanda Fries, eid: af32249, amanda.fries@utexas.edu
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float triangle(int &a, int &b, float &h, float &A, float &B);

int main () {
	int sideA;
	int sideB;
	float hypot;
	float angA;
	float angB;
	cout << "Enter side a value:" << endl;
	cin >> sideA;
	cout << "Enter side b value:" << endl;
	cin >> sideB;
	hypot = triangle(sideA, sideB, hypot, angA, angB);
	cout << "With a side a of " << sideA << " and a side b of " << sideB << endl;
	cout << "The hypotenuse of the triangle is " << hypot << "." << endl;
	cout << "The angle A is " << angA << " degrees." << endl;
	cout << "The angle B is " << angB << " degrees." << endl;
	}
float triangle(int &a, int &b, float &h, float &A, float &B)
{
	h = sqrt((pow(a,2) + pow(b,2)));
	A = asin(a / h) * 180.0 / M_PI;
	B = 180 - A - 90;
	return h;
}
