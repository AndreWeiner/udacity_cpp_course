#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	// Cube
	cout << "Enter the cube edge length:\n";
	string userInput;
        cin >> userInput;
	float edgeLength = 0.0;
       	stringstream(userInput) >> edgeLength;
	cout << "The cube's volume is " << pow(edgeLength, 3) << "\n";
        // Sphere
	cout << "Enter the sphere radius:\n";
        cin >> userInput;
	float radius = 0.0;
       	stringstream(userInput) >> radius;
	cout << "The sphere's volume is " << M_PI * 4.0 / 3.0 * pow(radius, 3) << "\n";
	// Cone
	cout << "Enter the cone radius:\n";
        cin >> userInput;
       	stringstream(userInput) >> radius;
	cout << "Enter the cone height:\n";
	cin >> userInput;
	float height = 0.0;
	stringstream(userInput) >> height;
	cout << "The cone's volume is " << M_PI * pow(radius, 2) * height / 3.0 << "\n";

	return 0;

}
