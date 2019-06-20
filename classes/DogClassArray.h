#include<iostream>

using namespace std;

class Dog {
	string name_;
	string breed_;
	int licenceNumber_;
public:
	Dog();
	void setBreed(const string breed);
	void setName(const string name);
	void setLicenceNumber(const int licenceNumber);
	void printInfo();
};

Dog::Dog(){};

void Dog::setBreed(const string breed) {
	breed_ = breed;
}

void Dog::setName(const string name) {
	name_ = name;
}

void Dog::setLicenceNumber(const int licenceNumber) {
	licenceNumber_ = licenceNumber;
}

void Dog::printInfo() {
	cout << "Name: " << name_ <<
		"\nBreed: " << breed_ <<
		"\nLicence number: " << licenceNumber_;
}

void printRoster(Dog * roster, const int SIZE) {
	for (int i=0; i<SIZE; ++i) {
		roster[i].printInfo();
		cout << "\n";
	}
}
