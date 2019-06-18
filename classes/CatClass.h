#include<iostream>

using namespace std;

class Cat {
	string breed_;
	string name_;
	int age_;
public:
	void setBreed(const string breed);
	void setName(const string name);
	void setAge(const int age);
	string getBreed();
	string getName();
	int getAge();
	void printInfo();
};

void Cat::setBreed(const string breed) {
	breed_ = breed;
}

void Cat::setName(const string name) {
	name_ = name;
}

void Cat::setAge(const int age) {
	age_ = age;
}

string Cat::getBreed() {
	return breed_;
}

string Cat::getName() {
	return name_;
}

int Cat::getAge() {
	return age_;
}

void Cat::printInfo() {
	cout << "Breed: " << breed_ << "\n"
	     << "Name: " << name_ << "\n"
	     << "Age: " << age_ << "\n";
}
