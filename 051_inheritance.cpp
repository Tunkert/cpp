#include <iostream>

using namespace std;

class Animal {
public:
	string run() {
		return "The animal is running!\n";
	}
	string hunt() {
		return "The animal is hunting!\n";
	}
};

class Cat: public Animal {
public:
	string meow() {
		return "Meow!";
	}
};

int main()
{
	Cat freddy;
	cout << "My cat, Freddy, likes to go " << freddy.meow() << endl;
	cout << freddy.run();
	cout << freddy.hunt();
	return 0;
}