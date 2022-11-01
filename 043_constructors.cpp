//
// Created by tunkert on 10/31/22.
//

#include <iostream>

#define PI 3.141592

using namespace std;

class Sphere {
    double radius;
public:
    explicit Sphere (double);
    double volume() const {
        return 4 * PI / 3 * radius * radius * radius;
    }
};

Sphere::Sphere(double r) { // this is my constructor, it's classed when a new object is created
    radius = r;
}

int main() {
    Sphere mySphere(5.2); // create a new instance of the Sphere class and set the radius
    cout << "The volume of my sphere is " << mySphere.volume() << ".\n";
    Sphere anotherSphere(0.24); // create another instance of the Sphere class
    cout << "The volume of my other sphere is " << anotherSphere.volume() << ".\n";
    return 0;
}