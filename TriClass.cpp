//Program Name: Homwork 3: Triangle Class
//Amanda Fries, amanda.fries@utexas.edu, af32249
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class triangle
{
	private:
		int a, b;
	public:
		triangle(){
			a = 3;
			b = 4;
		}
		triangle(int sideA, int sideB){
			a = sideA;
			b = sideB;
		}
		float hypot(){
			return sqrt(a*a + b*b);
		}
		float angA(){
			return asin(a / hypot()) * 180.0/M_PI;
		}
		float angB(){
			return 180 - angA() - 90;
		}
			
		void printout(){
			cout << "The sides of the triangle are " << a << " and "<< b << endl;
			cout << "The hypotenuse of the triangle is: " << hypot() << endl;
			cout << "The angle A is: " << angA() << endl;
			cout << "The angle B is: " << angB() << endl;

		}
		
		float geta(){
			return a;
		}
		float getb(){
			return b;
		}

};

int main()
{
	int a1, b1, a2, b2;
	cout << "Enter side a value for triangle 1:" << endl;
	cin >> a1;
	cout << "Enter side b value for triangle 1:" << endl;
	cin >> b1;
	cout << endl;
	triangle Tri1(a1, b1);
	cout << "For Triangle 1..." << endl;
	Tri1.printout();

	cout << endl;
	a2 = 8;
	b2 = 6;
	triangle Tri2(a2, b2);
	cout << "For Triangle 2..." << endl;
	Tri2.printout();
}
