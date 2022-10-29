//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int exponent(int base = 2, int power = 3) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= base;
    }
    return product;
}

int main() {
    cout << exponent() << endl;
    cout << exponent(5, 3) << endl;
    return 0;
}