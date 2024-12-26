#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int arr[] = {23, 4, 1, 7, 9, 4, 55, 78, 43, 9, 4, 0};

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     cout << "Original array: ";
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     // Using built-in sort
//     sort(arr, arr + size);

//     cout << "\nSorted array: ";
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }