// Program Name: In Class Challenge 2: Flip a Coin
// Amanda Fries, eid: af32249
#include <iostream>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;

int main () {
	srand (time(NULL));
	int rand();
	int headcount = 0;
	int tailcount = 0;
//	cout << "The random number is " << random_number << endl;
	for ( int i = 0; i < 1000000; i++ ) {
		int random_number = rand();
		if (random_number%2 == 0) {
//		cout << "Heads" << endl;
		headcount = headcount + 1;
		}	
		else {
//		cout << "Tails" << endl;
		tailcount = tailcount + 1;
		}
	}
	cout << "The total number of heads was " << headcount << endl;
	cout << "The total number of tails was " << tailcount << endl;
}
