//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int main() {
    short *myShortPointer;
    int *myIntPointer;
    long *myLongPointer;
    short myShort = 1;
    int myInt = 2;
    long myLong = 3;
    myShortPointer = &myShort;
    myIntPointer = &myInt;
    myLongPointer = &myLong;
    cout << myShortPointer << "\n";
    cout << myIntPointer << "\n";
    cout << myLongPointer << "\n";
    cout << myShort << "\n";
    cout << myInt << "\n";
    cout << myLong << "\n";
    cout << *myShortPointer << "\n";
    cout << *myIntPointer << "\n";
    cout << *myLongPointer << "\n";
    cout << "now add \"1\" to pointer\n";
    cout << ++myShortPointer << "\n";
    cout << ++myIntPointer << "\n";
    cout << ++myLongPointer << "\n";
    cout << myShort << "\n";
    cout << myInt << "\n";
    cout << myLong << "\n";
    cout << *myShortPointer << "\n";
    cout << *myIntPointer << "\n";
    cout << *myLongPointer << "\n";
    return 0;
}