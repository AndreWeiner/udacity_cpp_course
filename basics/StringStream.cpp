#include <iostream>
#include <sstream>

using namespace std;

int main () {

	cout << "This program computes the area of a reactangle.\n";
	string inputString;
	cout << "Enter the width of the rectangle:\n";
	getline(cin, inputString);
	float width = 0.0;
	stringstream(inputString) >> width;
	cout << "Enter the height of the rectangle:\n";
	getline(cin, inputString);
	float height = 0.0;
	stringstream(inputString) >> height;
	cout << "The area of the reactangle is " << width << " x " << height << " = " << width*height << "\n";

	return 0;
}
