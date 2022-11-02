/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate recursion - a function calling itself
 * Date: 11/1/22
 */

#include <iostream>

using namespace std;

int factorial(int num) 
{
	if (num == 1)
		return 1;
	return num * factorial(num - 1);
}

int main()
{
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	cout << "The factorial of " << n << " is " << factorial(n) << ".\n";
	return 0;
}