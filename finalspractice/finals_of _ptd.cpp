#include <iostream>
using namespace std;

// Function declarations
int *createArray(int size);
void fillArray(int *arr, int size);
void findMinMax(int *arr, int size, int *min, int *max);
void separateEvenOdd(int *arr, int size);
void displayArray(int *arr, int size);

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    // Create dynamic array
    int *arr = createArray(size);

    // Fill array
    fillArray(arr, size);

    cout << "\nOriginal Array: ";
    displayArray(arr, size);

    // Find minimum and maximum
    int min, max;
    findMinMax(arr, size, &min, &max);
    cout << "\nMinimum: " << min << "\nMaximum: " << max;

    // Separate even and odd numbers
    separateEvenOdd(arr, size);
    cout << "\nArray after separating even and odd numbers: ";
    displayArray(arr, size);

    // Free memory
    delete[] arr;
    return 0;
}

// Function to create dynamic array
int *createArray(int size)
{
    return new int[size];
}

// Function to fill array
void fillArray(int *arr, int size)
{
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i); // Using pointer arithmetic
    }
}

// Function to display array
void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
void findMinMax(int *arr, int size, int *min, int *max)
{
    // Your code here
    // Find minimum and maximum values in array
    // Store them in the addresses pointed to by min and max
    // Use pointer arithmetic (*(arr + i))

    *max = 0;
    *min = 10000000;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
void separateEvenOdd(int *arr, int size)
{
    // Your code here
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
           if (arr[j]%2!=0)
           {
           int temp = arr[j];
           arr[j]= arr[j+1];
           arr[j+1]= temp;
           
           }
           
        }
        
    }
}
