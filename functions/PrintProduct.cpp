#include<iostream>

void printProduct(int m1, int m2);

int main(){

	int m1 = 5;
	int m2 = 4;
	printProduct(m1, m2);

	return 0;
}

void printProduct(int m1, int m2){
	std::cout << m1 << " * " << m2 << " = " << m1*m2 << "\n";
}
