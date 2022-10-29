//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using std::cout;
using std::cin;
using std::getline;
using std::string;

int main() {
    string fullName;
    cout << "Enter your name: ";
    getline(cin, fullName);
    cout << "Your full name is " << fullName << ".\n";
    return 0;
}