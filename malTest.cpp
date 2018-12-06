#include <iostream>

using std::cout;
using std::endl;

struct roomTemp {
	float x = 0;
	float y = 0;
	float z = 0;
	float temp = 0;
	
	roomTemp* nextTemp;
};

int main()
{
	int t = 100;
	roomTemp* rt;
	int i;
	cout << "headnode:" << rt << endl;
	
	for (i = 0; i < t; i++)
	{
		rt = (roomTemp*)malloc(sizeof(roomTemp));
		(*rt).x = 100;
		cout << rt << endl;
	}
}
