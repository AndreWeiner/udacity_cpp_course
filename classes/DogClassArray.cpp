#include "DogClassArray.h"

int main() {

	const int SIZE = 4;
	Dog roster[SIZE];
	for (int i=0; i<SIZE; ++i) {
		roster[i].setBreed("Haski");
		roster[i].setName("Charly");
		roster[i].setLicenceNumber(123456);
	}
	printRoster(roster, SIZE);

	return 0;
}
