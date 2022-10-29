//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int *doubler(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        arr[i] = arr[i] * 2;
    }
    return arr;
}

int doubler(int num) {
    return num * 2;
}

int main() {
    int myLuggageCombination[5] = {1, 2, 3, 4, 5};
    int myNewLuggageCombination[5];
    int myDoubleCombo[5];
    myNewLuggageCombination[0] = doubler(myLuggageCombination)[0];
    myNewLuggageCombination[1] = doubler(myLuggageCombination)[1];
    myNewLuggageCombination[2] = doubler(myLuggageCombination)[2];
    myNewLuggageCombination[3] = doubler(myLuggageCombination)[3];
    myNewLuggageCombination[4] = doubler(myLuggageCombination)[4]; // notice something? Why is that?
    for (int comboNum: myNewLuggageCombination)
        cout << comboNum << "\n";
    // there are some limitations with this.
    // how about ?
    myDoubleCombo[0] = doubler(myLuggageCombination[0]);
    myDoubleCombo[1] = doubler(myLuggageCombination[1]);
    myDoubleCombo[2] = doubler(myLuggageCombination[2]);
    myDoubleCombo[3] = doubler(myLuggageCombination[3]);
    myDoubleCombo[4] = doubler(myLuggageCombination[4]); // notice that since we changed myLuggageCombination
    // we are doubling the new values
    for (int doubleNum: myDoubleCombo)
        cout << doubleNum << "\n";
    return 0;
}