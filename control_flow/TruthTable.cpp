#include <iostream>

void evaluateExpression(int A, int B, int C){
	int Q = (A && B && C) || (A && (!B || !C));
	std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
        std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
}

int main(){

	// 1
	int A = 0;
	int B = 0;
	int C = 0;
	evaluateExpression(A, B, C);
	// 2
	C = 1;
	evaluateExpression(A, B, C);
	// 3
	B = 1;
	C = 0;
	evaluateExpression(A, B, C);
	// 4
	C = 1;
	evaluateExpression(A, B, C);
	// 5
	A = 1;
	B = 0;
	C = 0;
	evaluateExpression(A, B, C);
	// 6
	C = 1;
	evaluateExpression(A, B, C);
	// 7
	B = 1;
	C = 0;
	evaluateExpression(A, B, C);
	// 8
	B = 1;
	C = 1;
	evaluateExpression(A, B, C);
	
	return 0;

}
