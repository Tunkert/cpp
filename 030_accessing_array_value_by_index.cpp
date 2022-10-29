//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int main() {
    string namesArr[] = {"Tim", "Sarah", "Joe", "Aaron", "Sean", "Ben", "Barb"};
    // print out the first item in the array
    cout << namesArr[0] << endl;
    // print out the last item in the array (no -1)
    cout << namesArr[sizeof(namesArr) / sizeof(namesArr[0]) - 1] << endl; // remember sizeof gives bytes
    // so divide the total bytes by the number of bytes of the first item to find the length
    return 0;
}