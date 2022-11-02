/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate polymorphism - when classes are related by inheritance and use the same methods
 * ... but slightly differently
 */

#include <iostream>

using namespace std;

class Cat {
public:
	string catSounds() {
		return "Rair";
	}
};

class Lion: public Cat {
public:
	string catSounds() {
		return "Roar";
	}
};

class Kitten: public Cat {
public:
	string catSounds() {
		return "Meow";
	}
};

int main() {
	Kitten freddy;
	Lion bigCat;
	cout << "Our kitten Freddy, makes, the following sound: " << freddy.catSounds() << ".\n";
	cout << "A Lion makes the following sound: " << bigCat.catSounds() << ".\n";
	return 0;
}