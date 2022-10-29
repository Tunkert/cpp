//
// Created by tunkert on 10/28/22.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // unsigned data types are >= 0
    unsigned short myAge = 46;
    cout << "The max value of an unsigned short is " << USHRT_MAX << ".\n";
    cout << "The max value of an unsigned int is " << UINT_MAX << ".\n";
    cout << "The max value of an unsigned long is " << ULONG_MAX << ".\n";
    cout << "The max value of an unsigned long long is " << ULLONG_MAX << ".\n"; // notice the same
    // depends on compiler and system ...
    return 0;
}