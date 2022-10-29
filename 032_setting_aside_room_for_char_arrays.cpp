//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    char fullName[50];
    string fName;
    cout << "Please enter your full name: "; // allot 50 characters (49 not counting null character) for the name
    cin >> fullName; // will cut off at first space, notice pros and cons
    cout << "Your full name is " << fullName << ".\n";
    cout << "Please enter your full name again: ";
    cin >> fName;
    cout << "Your full name is " << fName << ".\n";
    // try this to show what happens before the next line
    cout << "No, really enter your full name again: ";
    cin >> fName;
    cout << "Your full name is " << fName << ".\n"; // notice I'm cut off again!
}
