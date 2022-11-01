//
// Created by tunkert on 10/31/22.
//

#include <iostream>

using namespace std;

class Cube {
    int width, length, height;
public:
    Cube(int a, int b, int c) : width(a), length(b), height(c){}
    int volume() {
        return width * length * height;
    }
};

int main() {
    Cube myCube (3, 4, 5);
    Cube *myCubeLoc;
    myCubeLoc = &myCube; // myCubeLoc equals the address of myCube
    cout << "The memory location of myCube is " << myCubeLoc << ".\n";
    // find the volume using a pointer
    cout << "The volume of myCube is " << myCubeLoc->volume() << ".\n"; // cool trick eh?
    return 0;
}