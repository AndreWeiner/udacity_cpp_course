#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream myFileI("input.txt", ios::app);
    if (myFileI.is_open())
    {
        myFileI << "\n Adding a line.\n";
        myFileI << "Adding another line.\n";
        myFileI << "And yet another line.\n";

    }
    else
    {
        cout << "Unable to open file for writing!\n";
    }

    ifstream myFileO("input.txt");
    string line;
    if (myFileO.is_open())
    {
        while (getline(myFileO, line))
        {
            cout << line << "\n";
        }
        myFileO.close();
    }
    else
    {
        std::cout << "Unable to open file for reading!\n";
    }
    return 0;
}
