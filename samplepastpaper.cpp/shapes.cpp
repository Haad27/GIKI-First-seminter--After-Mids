#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int sp = row; sp > i; sp--)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            if(j==0  || j==i-1)
            cout << " *";
            else 
            cout << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int sp = 0; sp < i; sp++)
        {
            cout << " ";
        }

        for (int j = row; j > i; j--)
        {
             if(j==row  || j==i+1)
            cout << " *";
            else
            cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
