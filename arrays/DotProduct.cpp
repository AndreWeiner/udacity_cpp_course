#include<iostream>

int main(){

	int matrix[4][4];
	int vector[4];
	
	std::cout << "Please enter the matrix [4,4].\n";
	for (int row=0; row<4; ++row){
		for (int col=0; col<4; ++col) {
			std::cout << "Eelement [" << row << ", " << col << "]:\n";
			std::cin >> matrix[row][col];
		}
	}

	std::cout << "The matrix you entered is\n[[";
	for (int row=0; row<4; ++row){
		for (int col=0; col<4; ++col) {
			std::cout << matrix[row][col];
			if (col<3)
				std::cout << ", ";
		}
		std::cout << "]";
		if ( row<3 )
			std::cout << "\n [";
	}
	std::cout << "]\n";

	std::cout << "Please enter the vector [4].\n";
	for (int row=0; row<4; ++row) {
		std::cout << "Element [" << row << "]:\n";
		std::cin >> vector[row];
	}
	std::cout << "The vector you entered is\n[";
	for (int row=0; row<4; ++row) {
		std::cout << vector[row];
		if (row < 3)
			std::cout << ", ";
	}
	std::cout << "]\n";

	// computing the matrix-vector-product
	int result[4] = {0, 0, 0, 0};
	std::cout << "The result of the matrix-vector product is\n[";
	for (int row=0; row<4; ++row) {
		for (int col=0; col<4; ++col) {
			result[row] += matrix[row][col] * vector[col];
		}
		std::cout << result[row];
		if (row<3)
			std::cout << ", ";
	}
	std::cout << "]\n";

	return 0;
}
