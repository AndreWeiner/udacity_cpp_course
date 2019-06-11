#include<iostream>

int main(){

	int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};

	int searchKey, location;
	do {
		std::cout << "Please enter a number (-1 to exit):\n";
		std::cin >> searchKey;
		location = -1;
		for (int i=0; i<10; ++i) {
			if (searchKey == searchArray[i]) {
				location = i;
				break;
			}
		}
		if (searchKey != -1) {
			if (location == -1) {
				std::cout << "Number not in array.\n";
			} else {
				std::cout << "Number found at index " << location << "\n";
			}
		}
	} while (searchKey != -1);
	return 0;
}
