/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate encapsulation, making sure private data is hidden from users
 * this is good practice and promotes better security
 * Date: 11/1/22
 */

#include <iostream>

class Student {
private:
	double GPA;
public:
	// getter
	void setGPA(double g) {
		GPA = g;
	}
	// setter
	double getGPA() {
		return GPA;
	}
};

using namespace std;

int main()
{
	Student biff;
	biff.setGPA(0.1); // poor biff
	cout << "Biff's GPA was set at " << biff.getGPA() << " by the university.\n";
	return 0;
}