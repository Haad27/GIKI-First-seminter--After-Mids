#include <iostream>
#include <fstream>

#include <string>
#include <vector>

using namespace std;

int main()
{

    // wrting in file
    ofstream outfile("test.txt");

    if (outfile.is_open())
    {
       //excertion operaters 
        outfile << "ali ,90\n";
        outfile << "ahmed ,80\n";
        outfile << "mohammed ,70\n";
        outfile << "haad , 90\n";
        outfile << "harry ,50\n";

        cout << "file created\n";
        outfile.close();
    }
    else
    {
        // will give a error poopuop
        cerr << "ërror\n";
    }

    // seeing fifles 
    ifstream infile("test.txt");

    if (infile.is_open())
    {
        string line;
        while (getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else
    {
        cout << "error occured\n";
    }

    return 0;
}
