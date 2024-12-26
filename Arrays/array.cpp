#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int tableoftwo[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int size = sizeof(tableoftwo) / sizeof(tableoftwo[0]) ;

    for (int i = 0; i < size; i++)
    {
        cout << tableoftwo[i] << endl;
    }
   cout << "size of array 2 is == " << sizeof(tableoftwo[0]);
       return 0;
}