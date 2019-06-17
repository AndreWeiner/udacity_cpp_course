#include<iostream>

using namespace std;

class Dog {
	string name;
	int licenceNumber;
public:
	void setName(string nameIn);
	void setLicenceNumber(int number);
	string getName();
	int getLicenceNumber();
	void printInfo();
};

void Dog::setName(string nameIn) {
	name = nameIn;
}

void Dog::setLicenceNumber(int number) {
	licenceNumber = number;
}

string Dog::getName() {
	return name;
}

int Dog::getLicenceNumber() {
	return licenceNumber;
}

void Dog::printInfo() {
	cout << "Name: " << name << "\nLicence number: " << licenceNumber << "\n";
}
