//
// Created by tunkert on 10/31/22.
//

#include <iostream>

using namespace std;

class Cube {
    double width, length, height;
public:
    Cube(double w, double l, double h) {
        width = w;
        length = l;
        height = h;
    }
    double volume() const {
        return width * length * height;
    }
};

int main() {
    Cube myCube (3, 4, 5);
    Cube myOtherCube = {6, 7, 8};
    Cube yetAnotherCube {10, 11, 12};
    cout << myCube.volume() << endl;
    cout << myOtherCube.volume() << endl;
    cout << yetAnotherCube.volume() << endl;
    return 0;
}