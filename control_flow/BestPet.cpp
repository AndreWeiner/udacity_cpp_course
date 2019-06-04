#include<iostream>

int main(){

	std::cout << "Do you want an animal with fur (f), feathers (t), or scales (s)?\n";
	char animal;
	std::cin >> animal;
	std::cout << "You chose " << animal << "\n";

	if (animal == 'f') {
		std::cout << "You should get a dog.\n";
	}
	else if (animal == 't') {
		std::cout << "You should get a bird.\n";
	}
	else if (animal == 's') {

		std::cout << "Should the animal live on land (l) or water (w)?\n";
		char location;
		std::cin >> location;

		if (location == 'l') {
			std::cout << "You should get a gecko.\n";
		}
		else if (location == 'w'){
			std::cout << "You should get a fish.\n";
		}
	}

	return 0;
}
