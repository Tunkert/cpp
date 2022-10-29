//
// Created by tunkert on 10/28/22.
//

#include <iostream>

using namespace std;

int main() {
    // escape characters - newline
    cout << "This is line 1.\nThis is line 2.\n";
    // tab
    cout << "\tThis content is tabbed over.\n";
    // single quotes
    cout << "Here are some \'single\' quotes!\n";
    // double quotes
    cout << "Here are some \"double\" quotes!\n";
    // question mark
    cout << "Here is a question mark\?\n";
    // backslash
    cout << "Here is a backslash \\\n"; // I always think it's a forward slash for some reason
    // notice how I can combine these escape characters - these are the common ones but there are more!
}