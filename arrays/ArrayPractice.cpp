#include<iostream>

int main() {

	int numbers[10];
	std::cout << "Please insert 10 numbers.\n";
	for (int i=0; i<10; ++i) {
		std::cin >> numbers[i];
	}

	std::cout << "You entered the following numbers:\n [";
	for (int i=0; i<9; ++i) {
		std::cout << numbers[i] << ", ";
	}
	std::cout << numbers[9] << "]\n";

	std::cout << "The array in reverse order reads:\n [";
	for (int i=9; i>0; --i) {
		std::cout << numbers[i] << ", ";
	}
	std::cout << numbers[0] << "]\n";

	// acending order
	for (int i=0; i<10; ++i) {
		for (int j=0; j<9; ++j) {
			int temp = numbers[j];
			if (temp > numbers[j+1]) {
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	std::cout << "The array sorted in acending order reads:\n [";
	for (int i=0; i<9; ++i) {
		std::cout << numbers[i] << ", ";
	}
	std::cout << numbers[9] << "]\n";

	return 0;
}
