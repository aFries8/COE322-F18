#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i=0; i<10; i++)
	{
		cout << "Element " << i << " = "  << array1[i] << endl;
	} 
	cout << array1 << endl;
	cout << array1+1 << endl;
	cout << *(array1) << endl;
	cout << array1[1] << endl;
}
