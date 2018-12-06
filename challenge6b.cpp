//Program Name: Challenge 6: Fibonacci Sequence
//amanda.fries@utexas.edu
//af32249
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fib(int prev, int current, int i, int n)
{
	int next;
	if (i < n)
	{
		cout << current << ", ";
		next = fib(current, current + prev, i+1, n);
		return next;
	}
}

int main() 
{
	int n;
	cout << "Enter a value of n" << endl;
	cin >> n;
	cout << "The Fibonacci sequence with n values is " << fib(0,1,0,n) << endl;
}
