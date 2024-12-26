#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{

    // for (int i = 0; i < 5; i++)
    // {

    //     ofstream Myfile("loop.txt");

    //     Myfile << "this is my first file ";
    //     Myfile.close();
    // }
    string x;
    ifstream MyReadFile("hello.txt");
    while (getline(MyReadFile, x))
    {
        cout << x << endl;
    }

    return 0;
}