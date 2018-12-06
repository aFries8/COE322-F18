// Program Name: Challenge 3: socatoah with Functions!
// Amanda Fries, eid: af32249, amanda.fries@utexas.edu
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float hypot(int a, int b);
float angleA(int a, float h);
float angleB(float A);

int main () {
	int sideA;
	int sideB;
	float h;
	float angA;
	float angB;
	cout << "Enter side a value:" << endl;
	cin >> sideA;
	cout << "Enter side b value:" << endl;
	cin >> sideB;
	h = hypot(sideA, sideB);
	angA = angleA(sideA, h);
	angB = angleB(angA);
	cout << "With a side a of " << sideA << " and a side b of " << sideB << endl;
	cout << "The hypotenuse of the triangle is " << h << "." << endl;
	cout << "The angle A is " << angA << " degrees." << endl;
	cout << "The angle B is " << angB << " degrees." << endl;
	}
float hypot(int a, int b)
{
	float c;
	c = sqrt((pow(a,2) + pow(b,2)));
	return c;
}
float angleA(int a, float h)
{
	float A;
	A = asin(a / h) * 180.0 / M_PI;
	return A;
}
float angleB(float A)
{
	float B;
	B = 180 - A - 90;
	return B;
}
