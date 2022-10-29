//
// Created by tunkert on 10/28/22.
//

#include <iostream>
#include <valarray>

using namespace std;

int main() {
    // declare and initialize variables
    int a = 10;
    int b = 3;
    // add
    cout << a + b << endl;
    // subtract
    cout << a - b << endl;
    // multiply
    cout << a * b << endl;
    // divide
    cout << a / b << endl; // is this what you expected?
    // divide again
    cout << 10.0 / b << endl;
    // divide yet again
    cout << a / 3.0 << endl;
    // get a remainder from division
    cout << a % b << endl;
    // raise a number to a power
    cout << pow(a, b) << endl;
    return 0;
}