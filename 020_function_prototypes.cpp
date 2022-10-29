//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

void sayHello();
int exponent(int, int);

int main() {
    sayHello();
    cout << exponent(4, 3) << endl;
    return 0;
}

void sayHello() {
    cout << "Hello!\n";
}

int exponent(int base, int power) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= base;
    }
    return product;
}