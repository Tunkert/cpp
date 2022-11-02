/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate how to write to a file in C++
 * Date: 11/2/22
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream myFile; // create a ofstream object called myFile
	myFile.open("my-file.html");
	myFile << "<!doctype html>\n<html>\n\t<head>\n\t\t<meta charset=\"utf-8\">\n\t\t<title>My Webpage</title>\n";
	myFile << "\t</head>\n\t<body>\n\n\n\t</body>\n</html>\n";
	myFile.close();
	return 0;
}