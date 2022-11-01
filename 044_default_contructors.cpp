//
// Created by tunkert on 10/31/22.
//

#include <iostream>

using namespace std;

class Cube {
    int width, length, height;
public:
    Cube();
    Cube(int, int, int);
    int volume() const {
        return width * length * height;
    }
};

Cube::Cube() { // default constructor
    width = 2;
    length = 2;
    height = 2;
}

Cube::Cube(int w, int l, int h) {
    width = w;
    length = l;
    height = h;
}

int main() {
    Cube myCube; // default constructor called
    Cube myOtherCube{3, 4, 5}; // initialization - constructor called
    Cube yetAnotherCube{}; // default constructor called
    cout << "The volume of myCube is " << myCube.volume() << ".\n";
    cout << "The volume of myOtherCube is " << myOtherCube.volume() << ".\n";
    cout << "The volume of yetAnotherCube is " << yetAnotherCube.volume() << ".\n";
    return 0;
}