/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate reading from a file
 * Date: 11/2/22
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string myReadText;
	ifstream myFile; // i for input, o for output ... get it
	myFile.open("sample.txt");
	while (getline (myFile, myReadText)) {
		cout << myReadText;
		cout << "\n";
	}
	myFile.close();
	return 0;
}