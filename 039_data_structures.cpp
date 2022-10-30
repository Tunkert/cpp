//
// Created by tunkert on 10/29/22.
//

#include <iostream>

using namespace std;

struct student {
    string name;
    int age;
    double GPA;
};

struct teacher {
    string name;
    int age;
    string classTopic;
};

struct person {
    student anon;
    teacher anony;
    string hairColor;
};

int main() {
    student tim;
    tim.age = 46;
    tim.name = "Timothy Unkert";
    tim.GPA = 4.0;
    cout << tim.name << " is " << tim.age << " years old and has a GPA of " << tim.GPA << "!\n";

    // create a pointer to a struct
    student * timLoc;
    timLoc = &tim;
    cout << "The memory address of \"Tim\" is " << timLoc << ".\n";
    // he is an enchanter

    // create a teacher struct
    teacher joe;
    joe.name = "JT";
    joe.age = 47;
    joe.classTopic = "Management";
    cout << joe.name << " teaches a class on " << joe.classTopic << ".\n";

    // create a struct with a nested struct
    person sarah;
    sarah.anon.name = "Sarah";
    sarah.anony.classTopic = "Organizing";
    cout << sarah.anon.name << " teaches a class on " << sarah.anony.classTopic << ".\n";
    return 0;
}

