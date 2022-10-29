//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

void sayHello() { // this function returns nothing, hence "void"
    cout << "Hello!\n";
}

string returnHello() {
    return "Hello";
}

int exponent(int base, int power) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= base;
    }
    return product;
}

int main() {
    sayHello();
    cout << returnHello() << endl;
    cout << exponent(2, 3) << endl;
    return 0;
}