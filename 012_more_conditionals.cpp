//
// Created by tunkert on 10/28/22.
//

#include <iostream>

using namespace std;

int main() {
    // declare a variable to store the user's age
    short yourAge;
    // ask user for their age
    cout << "What is your age? ";
    // take in user's age
    cin >> yourAge;

    // go through conditionals
    if (yourAge >= 21) {
        cout << "You may enter the bar.\n";
    } else if (yourAge >= 18) {
        cout << "You are legally an adult but you may not enter the bar.\n";
    } else {
        cout << "You are a minor.\n";
    }
    return 0;
}