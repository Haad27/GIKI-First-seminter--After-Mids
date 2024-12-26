#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseArray(int x[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = x[start];
        x[start] = x[end];
        x[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    reverseArray(arr, size);

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
