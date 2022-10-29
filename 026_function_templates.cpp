//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

template<class T>
T exponent(T base, T power) {
    T product = 1;
    for (int i = 0; i < (int) power; i++) {
        product *= base;
    }
    return product;
}

int main() {
    cout << exponent<int>(2, 3) << endl;
    cout << exponent<double>(3.14, 2.45) << endl;
    cout << exponent<float>(2.1, 2.5) << endl;
    return 0;
}