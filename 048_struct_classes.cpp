//
// Created by tunkert on 10/31/22.
//

#include <iostream>

using namespace std;

struct Cube {
    double width, length, height;
    Cube(double a, double b, double c) : width(a), length(b), height(c){}
    double volume() const {
        return width * length * height;
    }
};

// by default members of a struct are public

int main() {
    Cube myCube(3, 4, 5);
    cout << "The volume of myCube is " << myCube.volume() << ".\n";
    return 0;
}