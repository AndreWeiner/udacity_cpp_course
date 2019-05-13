// Read standard input and interact with the user
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year = 0;
    int age = 0;
    string name = "";
    //print a message to the user
    cout << "What year is your favorite?" << endl;;
    
    //get the user response and assign it to the variable year
    cin >> year;
    
    //output response to user
    cout << "How interesting, your favorite year is " << year << "!" << endl;
    
    //print a message to the user
    cout << "At what age did you learn to ride a bike?" << endl;
    
    //get the user response and assign it to the variable age
    cin >> age;
    
    //output response to user
    cout << "How interesting you learned to ride at " << age << "!" << endl;
    
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    return 0;
}
