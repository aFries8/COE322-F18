#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
	char alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	string phraseE;
	int K;
	int cur;
	cout << "Input a sting:" << endl;
	getline(cin,phraseE);
	int phraseEnc;
	cout << "Enter a value for K" << endl;
	cin >> K;
	for (int i=0; i < phraseE.length(); i++)
	{
		cur = i + K;
		cout << phraseE[i] << endl;
	//		if (cur >=26);
	//	phraseEnc[i] = cur;
	}
//	cout << "your encrypted phrase is: " << phraseEnc[phraseE.length()] << endl;




}
