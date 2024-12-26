#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int arr[10] = {};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 50;
    }
    for (int j = 0; j < 10; j++)
    {
      cout <<  arr[j] << " ";
    }

    return 0;
}
