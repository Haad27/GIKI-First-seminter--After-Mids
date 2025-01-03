#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    ofstream myfile("example.txt");

    myfile << "hello world \n how are ypu \n i am fine \n what bout you \n";

    myfile.close();
    ifstream file("example.txt");

    string line;
    string oneline;
    int linecount = 0;
    int alphacount = 0;
    file.clear();
    file.seekg(0);
    while (file >> line)
    {
        cout << line <<" ";
    }

    file.clear();
    file.seekg(0);
    while (getline(file, oneline))
    {
        linecount++;
    }
    file.clear();
    file.seekg(0);
    while (file >> line)
    {
        for (char value : line)
        {
            if (isalpha(value) && value != ' ')
            {
                alphacount++;
            }
        }
    }
    
    cout << "thw total line are " << linecount << endl;
    cout << "total alphabets are " << alphacount;
    return 0;
}
