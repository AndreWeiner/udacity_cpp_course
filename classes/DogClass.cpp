#include"DogClass.h"

int main() {

	Dog dog1;
	Dog dog2;
	dog1.setName("Tris");
	dog2.setName("Kali");
	dog1.setLicenceNumber(123456);
	dog2.setLicenceNumber(654321);
	dog1.printInfo();
	dog2.printInfo();

	return 0;
}
