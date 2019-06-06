#include<iostream>

int main(){

	std::cout << "Please enter some numbers\n";
	float sum = 0;
	float number;
	for (int i=0; i<5; ++i) {
		std::cin >> number;
		sum += number;
	}
	std::cout << "The sum of all numbers is " << sum << "\n";
	std::cout << "The resulting average is " << sum / 5.0 << "\n";
	return 0;
}
