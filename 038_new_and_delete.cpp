//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements of the array you want to double: ";
    cin >> n;
    int *arr; // create a pointer
    arr = new(nothrow) int[n]; // allocate the amount of integers you want to dynamically add
    if (arr == nullptr) { // this happens when an error occurs assigning memory
        cout << "There was an error assigning memory, naturally the logical step is to panic.\n" <<
             "Or do something more appropriate ...";
    }
    // print out each item of the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // nice
    // delete arr
    delete arr; // free up memory
    return 0;
}