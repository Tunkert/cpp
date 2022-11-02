/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate try and exceptions
 * Date: 11/2/22
 */

#include <iostream>

using namespace std;

int main() {
	int n = 7;
	int ui;
	cout << "Guess the magic number (it must be a positive integer).\n";
	try {
		cin >> ui;
		if (ui < 0) {
			throw ui;
		}
	}
	catch (int ui) {
		cout << ui << " is not a positive integer.\n";
	}
	if (ui == n) {
		cout << "You guessed correctly!\n";
	} else {
		cout << "Bummer, you did not guess correctly!\n";
	}
	return 0;
}