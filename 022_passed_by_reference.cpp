//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

void checkSum(int a, int b, int& sumAboveTen) {
    if (a + b > 10) {
        sumAboveTen = 1;
    }
}

void tripler(int& a, int& b, int& c) {
    a *= 3;
    b *= 3;
    c *= 3;
}

int main() {
    int sumAboveTen = 0;
    checkSum(3, 5, sumAboveTen);
    if (sumAboveTen) {
        cout << "The sum is above 10." << endl;
    } else {
        cout << "The sum is not above 10." << endl;
    }
    int c, d, e;
    cout << "Enter three integers separated by a space: ";
    cin >> c >> d >> e;
    tripler(c, d, e);
    printf("Those numbers tripled are: %d, %d, and %d.\n", c, d, e);
    return 0;
}