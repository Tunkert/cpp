//
// Created by tunkert on 10/28/22.
//

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        if (i == 7) {
            continue; // skip 7 and go back to the start of the loop
        } else {
            cout << i << endl;
        }
    }
    cout << "Start of a new loop.\n";
    int idx = 0;
    while (idx < 100) {
        cout << idx << endl;
        idx = idx + 1;
        if (idx == 7)
            break; // break the loop
    }
    return 0;
}