#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int value = 1;
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
    }

    return 0;
}