/*HOMEWORK 2
  Program Name: K-Shift Decoder/Encoder
  Author: Amanda Fries, EID: af32249, email: amanda.fries@utexas.edu
  Created October 18, 2018
  Program Function: This program takes user inputs of whether they want to encrypt
 or decrypt a phrase, what their secrect key is, and what their phrase or string of  numbers (the encrypted phrase) and performs the encryption or decription and
 outputs the user's desired output. 
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
	char ciper;
	int K;
	string phraseE; //the phrase to be Encrypted
	string phraseEnc; //the phrase once it's encrypted
	string phraseD;	//the phrase to be Decrypted
	string phraseDec; //the phrase once it's decrypted

	cout << "Welcome to the K-Shift cipher." << endl;
	cout << "If you would like to encrypt a phrase, type e." << endl;
	cout << "If you would like to decrypt a phrase, type d." << endl;
	cin >> ciper;

	cout << "What is you secret code (K)" << endl;
	cin >> K;
		cin.ignore();		
	if (K > 0 && K < 26)
	{
		if (ciper == 'e')
		{
			cout << "Please input the phrase you would like to encrypt: " << endl;
			getline(cin,phraseE);
			for (int i = 0; i < phraseE.length(); i++)
			{
				char c = phraseE[i];
				int x = c;
	
				if ((c >= 'A') && (c <= 'Z'))
				{
					x = x - 'A';
					x = (x + K) % 26;
					c = x + 'A';
				}
				else if ((c >= 'a') && (c <= 'z'))
				{		
					x = x - 'a';
					x = (x + K) % 26;
					c = x + 'a';
				}

				phraseEnc += c;
			}
			cout << "Your encrypted phrase is: " << phraseEnc << endl;
		}
		else if (ciper == 'd')
		{
			cout << "Please input the encrypted phrase you would like to decrypt: " << endl;
			getline(cin,phraseD);
			for (int i = 0; i < phraseD.length(); i++)
			{
				char c = phraseD[i];
				int x = c;

				if ((c >= 'A') && (c <= 'Z'))
				{	
					x = x - 'A';
					x = (x + 26 - K) % 26;
					c = x + 'A';
				}
				else if ((c >= 'a') && (c <= 'z'))
				{
					x = x - 'a';
					x = (x + 26 - K) % 26;
					c = x + 'a';
				}
				phraseDec += c;
			}
			cout << "Your decrypcted phrase is: " << phraseDec << endl;
		}
		else
		{
			cout << "Incorrect Input. Please try again and input either a lowercase e or a lowercase d." << endl;  
		}
	}
	else
	{
		cout << "Incorrect value for K. Please input an integer that is greater than 0 and less than 26." << endl;
	}
}


