#include<iostream>

int main(){

	std::cout << "Enter two floating point numbers:\n";
	float num1, num2;
	std::cin >> num1;
	std::cin >> num2;

	std::cout << "Which operation do you want to execute (+), (-), (*), (/)?\n";
	char operation;
	std::cin >> operation;

	float result = 0.0;
	switch(operation){

		case('+'):
		{
			result = num1 + num2;
			break;
		}
		case('-'):
		{
			result = num1 - num2;
			break;
		}
		case('*'):
		{
			result = num1 * num2;
			break;
		}
		case('/'):
		{
			result = num1 / num2;
			break;
		}
	}
	std::cout << "The result of " << num1 << operation << num2 << " is " << result << "\n";
	return 0;
}
