#include<iostream>
#include<iomanip>

using namespace std;

class Gameboard {
	char gameSpace_[4][4];
public:
	Gameboard();
	void setGameSpace(const int row, const int col, const char c);
	char getGameSpace(const int row, const int col);
	int fourInRow();
	void printInfo();
};

Gameboard::Gameboard() {
	for (int i=0; i<4; ++i) {
		for (int j=0; j<4; ++j) {
			gameSpace_[i][j] = '-';
		}
	}
}

void Gameboard::setGameSpace(const int row, const int col, const char c) {
	gameSpace_[row][col] = c;
}

char Gameboard::getGameSpace(const int row, const int col) {
	return gameSpace_[row][col];
}

// this function literally only checks for rows
int Gameboard::fourInRow() {
	for (int i=0; i<4; ++i) {
		int count = 0;
		for (int j=0; j<4; ++j) {
			if (gameSpace_[i][j] == 'x')
				count++;
		}
		if (count == 4)
			return 1;
	}
	return 0;
}

void Gameboard::printInfo() {
	cout << std::setw(5);
	cout << "\n";
	for (int i=0; i<4; ++i) {
		for (int j=0; j<4; ++j) {
			cout << gameSpace_[i][j];
		}
		cout << "\n";
	}
}
