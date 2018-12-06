// Program Name: Challenge 5 - Sum of Squares
// af32249, amanda.fries@utexas.edu
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int squareSum(int i)
{
	int sum;
	if (i == 0)
		return 0;
	else
		sum = i*i + squareSum(i-1);
		cout << sum << endl;
		return sum;
}
int main()
{
	cout << "The first 100 sums of squares are: " << endl;
	squareSum(100);
}

