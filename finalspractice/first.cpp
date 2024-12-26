#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseArray(int *arr, int size)
{
    int start = 0, end = size-1;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end--;
    }
   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout <<endl;
    int *ptr = arr;
    reverseArray(ptr, size);

    printf("\nReversed array: ");
 for (int i = 0; i < size; i++)
    {
        cout << ptr[i];
    }
    return 0;
}
