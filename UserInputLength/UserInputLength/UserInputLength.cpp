/*
* Maximiliano Neaves
* COSC/ITSE 1307
* UserInputLength
* This program gathers the user input string and displays the length
* of the string entered.
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	char chrLetter = ' ';
	int intNumber = 0;
	string strWord = "Blank";
	cout << "Chapter 3: Input and Output" << endl;
	cout << "Enter a letter and number: " << endl;
	cin >> chrLetter >> intNumber;
	cout << "Enter a string: " << endl;
	cin >> strWord;
	cout << "Letter: " << chrLetter << endl;
	cout << "Number: " << intNumber << endl;
	cout << "Word: " << strWord << endl;

	return 0;
}