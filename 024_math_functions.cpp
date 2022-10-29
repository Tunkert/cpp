//
// Created by tunkert on 10/29/22.
//

#include <iostream>
#include <cmath>

#define PI 3.141592

using namespace std;

// let's use some built-in functions, note I'm picking math because it's my jam but there are other
// header files with built-in options
int main() {
    cout << sqrt(625) << endl; // 25
    cout << min(3, 5) << endl; // 3
    cout << max(3, 5) << endl; // 5
    cout << abs(-10) << endl; // 10
    cout << ceil(3.1) << endl; // 4
    cout << floor(3.9) << endl; // 3
    cout << fabs(-3.14) << endl; // 3.14
    cout << hypot(6, 8) << endl; // 10
    cout << fmin(3.1, 5.2) << endl; // 3.1
    cout << fmax(3.1, 5.2) << endl; // 5.2
    cout << sin(PI / 2) << endl; // ~1
    cout << cos(PI / 4) << endl; // square root of 2 over 2
    cout << tan(PI / 4) << endl; // ~1
    cout << fma(3.1, 1.2, 5.6) << endl; // 3.1 * 1.2 + 5.6 = 9.32 (no loss in precision)
    cout << exp(2) << endl; // e^2
    return 0;
}