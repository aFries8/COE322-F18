#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> myVector = {4, 7, 3, 2, 1};
	vector<int> myVector2(3,5);
	vector<int> myVector3(5);
	vector<int> myVector4;

	cout << "myVector4 is of size: " <<  myVector4.size() << endl;
	myVector4.push_back(10);
	cout << myVector4.size() << endl;

	vector<float> R(10,5);
	vector<vector<float>> N(5, R);
	
	cout << "N contains:" << endl;

	for (auto Row : N)
	{
		for (auto z : Row)
		{
			cout << z << " ";
		}
		cout << endl;
	}

	cout << "myVector contains:" << endl;

	for (auto &i: myVector)
	{
		cout << i << endl;
		i = i * 8;
	}

	cout << "myVector *now* contains:" << endl;
	for (auto j: myVector)
	{
		cout << j << endl;
	}
	
	cout << "myVector[4]: " << myVector[4] << endl;
	cout << "myVector.at(4): " << myVector.at(4) << endl;
	cout << "myVector[5]: " << myVector[5] << endl;
	cout << "myVector.at(5): " << myVector.at(5) << endl;
}
