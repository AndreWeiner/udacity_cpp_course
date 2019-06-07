#include<iostream>

int main(){

	int value = 55;
	int guess = 0;
	std::cout << "Guess a number between 1 and 100\n";
	std::cout << "Enter -1 to end the program.\n";
	do
	{
		std::cin >> guess;
		if(guess > value) {
			std::cout << "Your guess was too high.\n";
		}
		else if (guess < value) {
		
			std::cout << "Your guess was too low.\n";
		}
	} while(value != guess && guess != -1);
	
	if(guess == value) {
		std::cout << "Congratulations!\n";
	}
	else {
		std::cout << "See you next time!\n";
	}
		
	return 0;
}
