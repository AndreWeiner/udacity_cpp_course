#include <iostream>

using namespace std;

int main(){

	cout << "Simple comparsion of pre (++a) and pos (a++) fix operations.\n";
	int a = 0, b = 0, pre = 0, post = 0;
	cout << "The prefix increments the value and returns the result:\n";
	pre = ++a;
	cout << "a == pre ? " << (a == pre) << " ( 1 -> true)\n";
	cout << "The postfix returns the value and then increments the variable:\n";
	post = b++;
	cout << "b == post ? " << (b == post) << " ( 0 -> false)\n";

	return 0;
}
