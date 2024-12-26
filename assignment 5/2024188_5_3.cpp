#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to double each element in the array
// Parameters:
//   arr - pointer to the integer array
//   size - number of elements in the array
void doublearray(int *arr, int size)
{
    // Loop through each element of the array
    for (int i = 0; i < size; i++)
    {
        // Multiply each element by 2
        arr[i] = arr[i] * 2;
    }
}

// Function to display all elements in the array
// Parameters:
//   arr - pointer to the integer array
//   size - number of elements in the array
void display(int *arr, int size)
{
    // Loop through each element of the array
    for (int i = 0; i < size; i++)
    {
        // Print each element
        cout << arr[i];
    }
}

int main()
{
    // Variable to store size of array
    int size;
    
    // Get array size from user
    cout << "enter the size of array \n";
    cin >> size;
    
    // Dynamically allocate array of specified size
    int *arr = new int[size];
    
    // Get array elements from user
    for (int i = 0; i < size; i++)
    {
        cout << "enter value ";
        cin >> arr[i];
    }

    // Double all values in the array
    doublearray(arr, size);
    
    // Display the modified array
    display(arr, size);
    
    // Free the dynamically allocated memory
    delete[] arr;
    
    return 0;
}
