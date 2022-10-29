//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int main() {
    // declare an array of size 5 and type string
    string namesArr[5];
    // namesArr has indices 0 through 4 - put the names in that array
    namesArr[0] = "Sarah";
    namesArr[1] = "Tim";
    namesArr[2] = "Sean";
    namesArr[3] = "Joe";
    namesArr[4] = "Ben";
    // loop through array and print names
    for (const string& name: namesArr)
        cout << name << endl;
    // declare an integer array
    int numsArr[10];
    // print out default values, which are all garbage values
    for (int i = 0; i < 10; i++) {
        cout << numsArr[i] << endl;
    }
    // fill values with 1 through 10, notice we redeclare i here with no problem
    for (int i = 1; i < 11; i++) {
        numsArr[i - 1] = i; // remember, array indices start at 0
    }
    // double array values
    for (int i = 0; i < 10; i++) {
        numsArr[i] = numsArr[i] * 2;
    }
    // print out array values with for range loop
    for (int num: numsArr)
        cout << num << endl;
    return 0;
}