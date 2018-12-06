#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> combineV(vector<int> A, vector<int> B)
{
	vector<int> C;
	for (auto i : A)
	{
		C.push_back(i); 
	}	

	for (auto i : B)
	{
		C.push_back(i);
	}
	
	return C;
}

int printVect(vector<int> myVector)
{
	for (auto i : myVector)
	{
		cout << i << ",";
	}
	cout << endl;
	return 0;
}

int main()
{
	vector<int> a{1,2,3,4};
	vector<int> b{5,6,7,8};
	vector<int> c = combineV(a, b);
	printVect(a);
	printVect(b);
	printVect(c);
}
