//
// Created by tunkert on 10/28/22.
//

#include <iostream>

//using namespace std;

int main() {
    // declare two integers but do not initialize
    int a, b;
    // explain to user to enter an integer
    std::cout << "Enter an integer: ";
    // take in user input for the variable, a
    std::cin >> a;
    // explain to user to enter another integer
    std::cout << "Enter another integer: ";
    // take in user input for b
    std::cin >> b;
    // create a sum variable of type integer and initialize it to a + b
    int sum = a + b;
    // print out the sum
    std::cout << "The sum of the two integers you entered is " << sum << "." << std::endl;
    return 0;
}