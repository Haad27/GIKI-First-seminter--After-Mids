#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string search, y;
    int line = 1;
    int words = 0;

    fstream obj;
    string x;
    string z;
    int alpha;
    bool flag = false;
    obj.open("file.txt", ios ::in);
    cout << "enter the word you wanr to locate\n";
    getline(cin, search);

    if (obj.is_open())
    {

        while (getline(obj, x))
        {
            if (x.find(search) != string::npos)
            {
                cout << "word found in line == " << line << endl;
                flag = true;
            }
            line++;
        }

        cout << "\n done \n"
             << endl;

        if (flag == false)
        {
            cout << "not found ";
        }
        obj.ignore();
        obj.seekg(0); // start reading the fule again from zero

        while (obj >> z)
        {
            words++;
        }
        obj.ignore();
        obj.seekg(0);

        while (getline(obj, x))
        {
            for (char y : x)
            {
                for (int i = 0; i < 26; i++)
                {

                    if (y == alphabets[i])
                    {
                        alpha++;
                    }
                }
            }
        }

        cout << "\n the total words are  == " << words;
        cout << "\n the total alphaets are  == " << alpha;
    }
    else
    {
        cout << "file is not open" << endl;
    }

    return 0;
}
