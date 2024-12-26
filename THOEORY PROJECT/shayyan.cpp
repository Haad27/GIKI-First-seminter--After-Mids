#include <iostream>
#include <fstream>

#include <string>
#include <vector>

using namespace std;

int main()
{
    string word;
    ofstream x;
    x.open("test.txt");

    cout << "enter any word";
    getline(cin, word);

    x << word;

    x.close();

    ifstream y;
    y.open("test.txt");
    string text;
    while (y >> text)
    {
        cout << text;
    }

    return 0;
}

