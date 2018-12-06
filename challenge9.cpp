//Program Name: In Class Challenge #9: Random Vectors
//Amanda Fries, amanda.fries@utexas.edu, af32249
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::rand;

vector<float> random_vector(int L)
{
	srand (time(NULL));
	vector<float> randVec(L);
	cout << "Generated Random Vector:" << endl; 
	for (auto &e : randVec)
	{
		e = 1. * rand()/RAND_MAX;
		cout << e << endl;	
	}
	return randVec;
}

void sort(vector<float> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for(int j = 1; j < v.size(); j++)
		{
			if (v[j-1] > v[j])
			{
				float temp = v[j-1];
				v[j-1] = v[j];
				v[j] = temp;
			}
		}
	}

	cout << "Sorted Vector:" << endl;
	for (auto k : v)
	{
		cout << k << endl;
	}
} 

int main()
{
	int length = 10;
	vector<float> values = random_vector(length);
	sort(values);
}
