//Program Name: Challenge 6: Fibonacci Sequence
//amanda.fries@utexas.edu
//af32249
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Part 1 of Challnege 6: This part computes the value of the Fibonacci sequence at the number the user inputs.

int fibN(int i)
{
	if (i < 2)
	{
		return 1;
	}
	else
	{
		return fibN(i-1)+fibN(i-2);
	}
}

//Part 2 of Challenge 6: This part prints out the whole sequence of Fibonacci numbers for a second input by the user of n values

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
	//part 1
	int N;
	cout << "Enter a value of N" << endl;
	cin >> N;
	cout << "The value of the Fibonacci Sequence at N is: " << fibN(N) << endl;

	//part 2
	int n;
	cout << "Enter a value of n for the amount of numbers you want in the sequence:" << endl;
	cin >> n;
	cout << "The Fibonacci sequence with n values is " << fib(0,1,0,n) << endl;
}

