// cipherCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
int main()
{
	int i, x;
	char str[75];
	cout << "Please enter a string: ";
	cin >> str;

	cout << "Please choose from the following options:" << endl;
	cout << "1. Encrypt the string." << endl;
	cout << "2. Decrypt the string." << endl;
	cin >> x;


	switch (x) {
	case 1:
		for (i = 0; (i < 75 && str[i] != '\0'); i++)
			str[i] = str[i] + 2;
		cout << "Encrypted string: " << str << endl;
		break;
	case 2:
		for (i = 0; (i < 75 && str[i] != '\0'); i++)
		str[i] = str[i] - 2;
		cout << "Decrypted string: " << str << endl;
		break;
	default:
		cout << "Invalid Input!" << endl;
	
	}

}
