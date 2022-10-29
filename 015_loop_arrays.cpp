//
// Created by tunkert on 10/28/22.
//

#include <iostream>

using namespace std;

int main() {
    string myNamesArr[] = {"Tim", "Sarah", "Sean", "Joe", "Aaron", "Ben", "Barb"};

    // loop through array with for each loop
    for (const string& name: myNamesArr)
        cout << name << endl; // don't need the braces for one line in a loop

    return 0;
}