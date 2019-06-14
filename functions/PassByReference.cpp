#include<iostream>

void calculate(float val_1, float val_2, char op, float &ans);
void printEquation(float val_1, float val_2, char op, float result);

int main(){

	float result;
	calculate(4.0, 5.0, '*', result);
	printEquation(4.0, 5.0, '*', result);

	return 0;

}

void calculate(float val_1, float val_2, char op, float &ans){
	switch(op) {
		case '+': ans = val_1 + val_2;
			  break;
		case '-': ans = val_1 - val_2;
			  break;
		case '*': ans = val_1 * val_2;
			  break;
		case '/': ans = val_1 / val_2;
			  break;
	}
}
void printEquation(float val_1, float val_2, char op, float result){
	std::cout << val_1 << op << val_2 << "=" << result << "\n";	
}
