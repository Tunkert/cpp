//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

template <class T, int power>
T exponent(T base) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= base;
    }
    return product;
}

int main() {
    cout << exponent<int, 3>(2) << endl;
    cout << exponent<double, 2>(3.14) << endl; // returns type int
    return 0;
}