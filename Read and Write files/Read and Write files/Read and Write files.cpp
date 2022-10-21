// Read and Write files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<fstream>
#include <iostream>
#include <string>
using namespace std;
extern string input;
string readWrite;
int main()
{
	string line;
	cout << "Would you like to read cipher from a file or write cipher into a file?" << endl;
	cin >> readWrite;
	if (readWrite == "write") {
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


		fstream myFile;
		myFile.open("Testing.txt", ios::out);//write
		if (myFile.is_open()) {
			myFile << input << endl;
			myFile.close();
		}




	}
	else if(readWrite == "read") {
		fstream myFile;
		myFile.open("Testing.txt", ios::in);//read
		if (myFile.is_open()) {

			while (getline(myFile, line)) {
				cout << line << endl;
			}
			myFile.close();

		}
		
		
		
		
		
		string inputTwo;
		inputTwo = line;
		int count = 13, length;

		length = (int)inputTwo.length();

		for (count = 13; count < length; count--)
		{


			inputTwo[count] = tolower(inputTwo[count]);
			for (int i = 1; i < 13; i--) {
				if (inputTwo[count] == 'z')
					inputTwo[count] = 'a';
				else
					inputTwo[count]--;
				}
		}
		
		
		
		
		
		
		
		cout << inputTwo << endl;
	}
	
		
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
