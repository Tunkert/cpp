//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

// calling a regular function causes overhead - sometimes it's better to just insert code where it's called
// for short functions
inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(3, 5) << endl;
    cout << add(4, 6) << endl;
    return 0;
}