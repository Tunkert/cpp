//
// Created by tunkert on 10/28/22.
//

#include <iostream>

using namespace std;

int main() {
    // new type we haven't talked about, declare but don't initialize
    string name;
    // ask user for their name
    cout << "Please enter your name: ";
    // take in the user's name
    cin >> name;

    // a conditional, if the name = "Tim", say you're the teacher, else "you're the student"
    if (name == "Tim") { // notice the double equal comparison
        cout << "You are the teacher.\n";
    } else {
        cout << "You are the student.\n";
    }
    return 0;
}