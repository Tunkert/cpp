//
// Created by tunkert on 10/31/22.
//

#include <iostream>

using namespace std;

class Cube {
    double width, length, height;
public:
    Cube (double a, double b, double c) : width(a), length(b), height(c){}
    double volume() {
        return width * length * height;
    }
};

int main() {
    Cube *myCube;
    myCube = new Cube (3, 4, 5);
    cout << "The volume of myCube is " << myCube->volume() << ".\n";
    delete myCube; // free up memory
    Cube *myOtherCube;
    myOtherCube = new Cube[2] { {3, 4, 5}, {8, 9, 10} };
    // first object's volume pointed to by myOtherCube
    cout << "The volume of myOtherCube at index 0 is " << myOtherCube[0].volume() << ".\n";
    // second object's volume pointed to by myOtherCube
    cout << "The volume of myOtherCube at index 1 is " << myOtherCube[1].volume() << ".\n";
    delete[] myOtherCube; // free up memory
    return 0;
}