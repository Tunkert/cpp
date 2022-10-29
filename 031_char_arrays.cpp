//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using std::cout;

int main() {
    char fName[4] = "Tim"; // make room for the null character \0 - the last character of strings
    char lName[7] = "Unkert";
    cout << "My first name is " << fName << ".\n";
    cout << "My last name is " << lName << ".\n";

    // you can also initialize it this way
    char firstName[] = {'T', 'i', 'm', 'o', 't', 'h', 'y', '\0'};
    char lastName[] = {'U', 'n', 'k', 'e', 'r', 't', '\0'};
    cout << "My full name is " << firstName << " " << lastName << ".\n";
    return 0;
}