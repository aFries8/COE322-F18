//Program Name: Challenge 8: Random Numbers
//Amanda Fries, af32249, amanda.fries@utexas.edu
#include <iostream>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::vector;
using std::rand;

int main()
{
	vector<int> randVec;
	int i = 0;
	int r;

	while (i != 42)
	{
		r = 100. * rand()/RAND_MAX;
		randVec.push_back(r);
		i = r;
	}
	cout << randVec.size() << endl;
}
