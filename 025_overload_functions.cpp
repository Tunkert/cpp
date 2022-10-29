//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

// create two functions of the same name with different types - called overload functions
int exponent(int base, int power) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= base;
    }
    return product;
}

double exponent(double base, double power) {
    double product = 1;
    for (int i = 0; i < (int) power; i++) {
        product *= base;
    }
    return product;
}

int main() {
    int a = 4;
    int b = 5;
    double c = 3.1;
    double d = 5.2;
    // hover over each function to see the differences
    cout << exponent(a, b) << endl;
    cout << exponent(c, d) << endl;
    return 0;
}