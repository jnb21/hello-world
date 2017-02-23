//============================================================================
// Name        : if.cpp
// Author      : Nithesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	cout << "Enter Password > " << flush;

	string input;
	cin >> input;

	if(input == password) {
		cout << "password acceped" << endl;
	}

	if (input != password) {
		cout << "access denied." << endl;
	}

	return 0;
}
