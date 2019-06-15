#include<iostream>

int searchArray(int *array, int size, int searchKey);

int main(){

	const int size = 4;
	int numbers[size] = {44, 58, 60, 91};
	int searchKey;
	int found;
	std::cout << "Please enter the number you search for:\n";
	std::cin >> searchKey;
	found = searchArray(numbers, size, searchKey);
	if (found > 0) {
		std::cout << "Found number at index " << found << "\n";
	} else {
		std::cout << "Number not in array.\n";
	}
	return 0;
}

int searchArray(int *array, int size, int searchKey) {

	int found = -1;
	for (int i=0; i<size; ++i) {
		if (array[i] == searchKey)
			found = i;
	}
	return found;
}
