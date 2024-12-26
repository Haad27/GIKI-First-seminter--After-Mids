#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
                         'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string search, y;
    int line = 1;
    int words = 0;
    int alpha = 0;  // Initialize alpha counter

    fstream obj;
    string x;
    string z;
    bool flag = false;
    obj.open("file.txt", ios::in);
    cout << "enter the word you want to locate\n";
    getline(cin, search);

    if (obj.is_open())
    {
        // Search for word
        while (getline(obj, x))
        {
            if (x.find(search) != string::npos)
            {
                cout << "word found in line == " << line << endl;
                flag = true;
            }
            line++;
        }

        cout << "\n done \n" << endl;

        if (flag == false)
        {
            cout << "not found ";
        }

        // Reset file position for word counting
        obj.clear();  // Clear stream state
        obj.seekg(0); 

        while (obj >> z)
        {
            words++;
        }

        // Reset file position for alphabet counting
        obj.clear();  // Clear stream state
        obj.seekg(0);

        while (getline(obj, x))
        {
            for (char y : x)
            {
                // Convert to lowercase for case-insensitive counting
                char lower_y = tolower(y);
                for (int i = 0; i < 26; i++)
                {
                    if (lower_y == alphabets[i])
                    {
                        alpha++;
                        break;  // Exit inner loop once match is found
                    }
                }
            }
        }

        cout << "\n the total words are  == " << words;
        cout << "\n the total alphabets are  == " << alpha << endl;

        obj.close();  // Close the file
    }
    else
    {
        cout << "file is not open" << endl;
    }

    return 0;
}
