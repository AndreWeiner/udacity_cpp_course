#include<iostream>

int main(){

	int nNumber = 15;
	int userInput = 0;
	int minNumber = 101;
	int maxNumber = -1;
	int sum = 0;
	int invalid = 0;

	for(int i=0; i < nNumber; ++i) {
		std::cout << "insert a number between 0 and 100 (" << i+1 << ") number\n";
		std::cin >> userInput;
		if (userInput < 101 && userInput > -1) {
			sum += userInput;
			if (userInput < minNumber)
				minNumber = userInput;
			if (userInput > maxNumber)
				maxNumber = userInput;
		}
		else {
			std::cout << "Please insert a valid number!\n";
			invalid += 1;
		}
	}
	std::cout << "The maximum number was " << maxNumber << "\n";
	std::cout << "The minimum number was " << minNumber << "\n";
	std::cout << "The average of all numbers was " << sum / (nNumber-invalid) << "\n";

	return 0;

}
