#include<iostream>
#include<string>

int main(){

	int i;
	float f;
	double d;
	std::string s;
	char c;
	std::cout << "Enter an integer:\n";
	std::cin >> i;
	std::cout << "Enter a float:\n";
	std::cin >> f;
	std::cout << "Enter a double:\n";
	std::cin >> d;
	std::cin.ignore();
	std::cout << "Enter a string:\n";
	std::getline(std::cin, s);
	std::cout << "Enter a character:\n";
	std::cin >> c;
	
	int *pointerToInt = &i;
	int **pointerToPointerToInt = &pointerToInt;

	std::cout << "i: value " << i << ", reference " << &i << "\n";
	std::cout << "f: value " << f << ", reference " << &f << "\n";
	std::cout << "d: value " << d << ", reference " << &d << "\n";
	std::cout << "s: value " << s << ", reference " << &s << "\n";
	std::cout << "c: value " << c << ", reference " << (void*) &c << "\n";
	std::cout << "p to i: " << *pointerToInt << "\n";
	std::cout << "p to p to i: " << **pointerToPointerToInt << "\n";
	return 0;
}
