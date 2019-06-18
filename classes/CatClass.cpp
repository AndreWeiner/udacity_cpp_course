#include "CatClass.h"

int main() {

	Cat cat1, cat2;
	cat1.setBreed("Persian");
	cat1.setName("Stevy");
	cat1.setAge(42);
	cat2.setBreed("Wild");
	cat2.setName("Angie");
	cat2.setAge(14);

	cat1.printInfo();
	cout << "\n";
	cat2.printInfo();

	return 0;
}
