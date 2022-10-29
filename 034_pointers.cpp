//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int main() {
    string myName = "Timothy Unkert";
    string *myNameLocation = &myName; // myNameLocation is equal to the address of myName (this is how you
    // declare and initialize a pointer)
    char *myGradeLocation; // declare a pointer without initialization
    char myGrade = 'A';
    myGradeLocation = &myGrade; // initialize the pointer
    short myAge = 46;
    short *myAgeLocation = &myAge; // declaring a pointer
    cout << "The memory address of the variable myName is located at " << myNameLocation << ".\n";
    cout << "The memory address of the variable myAge is located at " << myAgeLocation << ".\n";
    cout << "The memory address of the variable myGrade is located at " << myGradeLocation << ".\n";
    // type *pointerName = &variableWhoseAddressWeWant
    cout << "My age is " << *myAgeLocation << ".\n";
    cout << "My name is " << *myNameLocation << ".\n";
    short age = *myAgeLocation; // age equal to value pointed to by myAgeLocation
    cout << age << endl;
    cout << "The memory address of the variable myName is located at " << &myName << ".\n";
    // * stands for the dereference operator which can be read as "value pointed to by"
    // & stands for the address of operator
    return 0;
}