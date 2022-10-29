//
// Created by tunkert on 10/28/22.
//

#include <iostream>
#include <bits/stdc++.h>

// not in production but for learning
using namespace std;

int main() {
    // declare variables WITHOUT initialization
    char myChar;
    char16_t mySweetSixteenChar;
    char32_t myBigChar;
    cout << "Note that a byte is 8 bits.\n";
    cout << "The size of a char in C++ is " << sizeof(myChar) << " byte (8 bits).\n";
    cout << "The size of a char16_t in C++ is " << sizeof(mySweetSixteenChar) << " byte(s). (16 bits).\n";
    cout << "The size of a char32_t in C++ is " << sizeof(myBigChar) << " bytes. (32 bits).\n";
    cout << "A char can have a max value of " << CHAR_MAX << " and a minimum value of " << CHAR_MIN << ".\n";
    cout << "A char16_t can have a max value of " << UINT_LEAST16_MAX << ".\n";
    cout << "A char32_t can have a max value of " << UINT_LEAST32_MAX << ".\n";
    cout << "A char16_t and a char32_t have min values of ... 0!\n";
    // declare and initialize some variables
    short myAge = 46;
    cout << "The size of a short in C++ is " << sizeof(myAge) << " bytes.\n"; // ask - how many bits (16)
    cout << "The max value of a short is " << SHRT_MAX << " and the min value is " <<
         SHRT_MIN << ".\n";
    int skiDays = 20000;
    cout << "The size of an int in C++ is " << sizeof(skiDays) << " bytes.\n"; // ask - how many bits (32).
    // notice, btw, this is a comment!
    long earthPopulation = 7900000000;
    cout << "The size of a long in C++ is " << sizeof(earthPopulation) << " bytes.\n"; // ask - how many bits (64).
    long long ageOfUniverse = 15000000000;
    cout << "The size of a long long in C++ is " << sizeof(ageOfUniverse) << " bytes.\n"; // notice no difference
    // on this compiler!
    float pi = 3.14;
    cout << "The size of a float in C++ is " << sizeof(pi) << " bytes.\n"; // how many bits? (32)
    double pi2 = 3.141569;
    cout << "The size of a double in C++ is " << sizeof(pi2) << " bytes.\n"; // how many bits (64)
    long double pi3 = 3.1415169;
    cout << "The size of a long double in C++ is " << sizeof(pi3) << " bytes.\n"; // how many bits? (128 bits)
    // more precision for more bits
}