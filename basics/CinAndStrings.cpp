#include <iostream>

using namespace std;

int main(){

	cout << "Please, insert your name, address, and phone:"<< "\n";
	string name = "";
	string address = "";
	string phone = "";
	getline(cin, name);
	getline(cin, address);
	getline(cin, phone);
	cout << "Recorded user data:"
	cout << "Name: " << name << "\n";
	cout << "Address: " << address << "\n";
	cout << "Phone: " << phone << "\n";
	return 0;
}

