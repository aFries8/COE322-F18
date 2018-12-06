#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() 
{
	vector<float> ar{1,2,3,4};
	for (auto e: ar)
	{
		cout << e << endl;
	}
	cout << "size: " <<  ar.size() << endl;
	cout << "first: " << ar.front() << endl;
	cout << "last: " << ar.back() << endl;
	cout << "second: " << ar[1] << endl;
	
	ar.push_back(64);
	cout << "size: " << ar.size() << endl;
	cout << "last: " << ar[4] << endl;

	int array[6] = {10,11,12,13,14,15};
	for (int i = 0; i<6; i++)
	{
		cout << array[i] << endl;
	}

}
