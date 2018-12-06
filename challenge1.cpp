// Program Name: Challenge 1: socatoah
// Amanda Fries, eid: af32249
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main () {
	int sidea;
	int sideb;
	float hypot;
	float angA;
	float angB;
	cout << "Enter side a value:" << endl;
	cin >> sidea;
	cout << "Enter side b value:" << endl;
	cin >> sideb;
	hypot = sqrt((pow(sidea,2) + pow(sideb,2)));
	angA = asin (sidea / hypot) * 180.0 / M_PI;
        angB = asin (sideb / hypot) * 180.0 / M_PI;
	cout << "With a side a of " << sidea << " and a side b of " << sideb << endl;
	cout << "The hypotenuse of the triangle is " << hypot << "." << endl;
	cout << "The angle A is " << angA << " degrees." << endl;
	cout << "The angle B is " << angB << " degrees." << endl;
	}
