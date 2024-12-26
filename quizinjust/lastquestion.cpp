#include <iostream>
#include <string>
#include <vector>

using namespace std;

// question last Write a code for a function that receives an array of integers
// and its size as parameters. The function should
// return the sum of all even numbers in the arr 5-Marks (CLO-3, PLO-1)

int sum = 0;
int even(int arr[100], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[100] = {1, 4, 7, 8, 3, 2, 6};
    int size = 7;
    cout << even(arr, size) << endl;

    return 0;
}
