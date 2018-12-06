#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<float> makeVector(int size, float value)
{
	vector<float> x(size, value);
	return x;
}

int printVector(vector<float> Vector1)
{
	for (auto i: Vector1)
	{
		cout << i << endl;
	}
	cout << Vector1.size() << endl;
	return 0;
}

int resetVectorToZero(vector<float> &Vector2)
{
	for (auto &i : Vector2)
	{
		i = 0;
	}
}

int main()
{
	vector<float> myVector = makeVector(5, 1.5);
	for (auto i: myVector)
	{
		cout << i << endl;
	}
	
	// you can also call it like this:
	for (auto i : makeVector(3, 2.4))
	{
		cout << i << endl;
		/* however, this new vector isn't saved anywhere because you 
		didn't call it a variable or anything so it just goes away
		after the loop */
	}
	
	printVector(myVector);
	/*you can also print the vector and its size like this, 
	therefore passing the vector myVector to the function*/
	
	resetVectorToZero(myVector);
	//self explanatory
	printVector(myVector);

}

