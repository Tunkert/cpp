//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

// unions can be used to save memory

union Stu {
    int age;
    double GPA;
};

int main() {
    cout << endl;
    Stu s = {46};
    cout << s.age << endl;
    s.GPA = 4.0;
    cout << s.GPA << endl;
    return 0;
}