// I dont know.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	int count = 0, length;
	cout << "Enter your phrase: " << endl;
	cin >> input;

	length = (int)input.length();

	for (count = 0; count < length; count++) 
	{
		if (isalpha(input[count])) {

			input[count] = tolower(input[count]);
			for (int i = 0; i < 13; i++) {
				if (input[count] == 'z')
					input[count] = 'a';
				else
					input[count]++;
			}
		}
	}
	cout << "Results: " << input;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
