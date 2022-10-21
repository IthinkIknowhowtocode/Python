// HopefullyAnATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void showMenu() {
	cout << "*********MENU**********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "5. Reset Account Data" << endl;
	cout << "***********************" << endl;

}

void usernamePw() {
	string username;
	string signOrCreate;
	cout << "Would you like to sign in or to create an account?" << endl;
	cin >> signOrCreate;
	if (signOrCreate == "sign") {
		cout << "Please enter your username: ";
		cin >> username;

	}
}
using namespace std;
int main()
{
	double balance = 500;
	// check balance, deposit, withdraw, show menu
	fstream myFile;
	myFile.open("userInput.txt", ios::in);
	if (myFile.is_open()) {
	string line;
		while (getline(myFile, line)) {
			if (line.length() >= 1) {
				balance = stoi(line);
			}
			else {
				balance = 500;
			}

		}
	}




	int option;
	do{
	showMenu();

	cout << "Choose an option:";
	cin >> option;
	system("cls");

	switch (option) {
	case 1:cout << "Balance: $" << balance << endl; break;
	case 2:cout << "Deposit amount: $";
		double depositAmount;
		cin >> depositAmount;
		balance += depositAmount; break;
	case 3:cout << "Withdraw amount: $";
		double withdrawAmount;
		cin >> withdrawAmount;
		if (withdrawAmount <= balance) {
			balance -= withdrawAmount; break;
		}
			
		else if (withdrawAmount > balance) {
			cout << "Not enough money" << endl;
		}
		break;
	}
	} while (option!=4);
	myFile.open("userInput.txt", ios::out);//writing
	if (myFile.is_open()) {
		if (option != 5)
			myFile << balance;
		else if (option == 5)
			myFile << "";
		myFile.close();
	}

	system("pause>0");













	////////////////////////////////////////////////////////////////////////////////////////////////
	//cipher code
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
	myFile.open("userNamePw.txt", ios::out);//writing
	if (myFile.is_open()) {
		myFile << str;
		myFile.close();
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






