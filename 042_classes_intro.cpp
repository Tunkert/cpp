//
// Created by tunkert on 10/31/22.
//

#include <iostream>

#define PI 3.141592

using namespace std;

class Sphere {
    double radius;
public:
    void set_radius(double); // kind of like a prototype here
    double volume() const {
        return 4.0 * PI / 3 * radius * radius * radius;
    }
};

void Sphere::set_radius(double r) { // the double colons is a scope operator -
    // it defines a member of a class outside of the class itself
    radius = r;
}

int main() {
    Sphere mySphere{}; // create an instance of the Sphere class
    mySphere.set_radius(5);
    cout << "The volume of my sphere is " << mySphere.volume() << ".\n";
    Sphere yourSphere{}; // create anothere instance of the Sphere class
    yourSphere.set_radius(9.8);
    cout << "The volume of your sphere is " << yourSphere.volume() << ".\n";
    return 0;
}