#include <iostream>
#include <fstream>

#include <string>
#include <vector>

using namespace std;

int main()
{
    string line;
    int number ,total=0,sum =0 ;
    int line1 = 1;
    ifstream myfile("test.txt");

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            for (char value : line)
            {
                if (isdigit(value))
                {
                    cout << "integer found in line " << line;
                    number = stoi(value);
                    sum = sum +number;
                    total++;
                }
            }
            line1++;
        }
    }

    int avergae = sum / total;
    cout << avergae;

    return 0;
}
