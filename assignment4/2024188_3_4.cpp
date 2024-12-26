#include <iostream>
#include <ctime>
using namespace std;

// Modified function to take size parameter and diff by reference
void difference(int* arr, int size, int& diff)
{
    // Initialize highest with lowest elemeny
    int highest = 0;
    // Initialize lowest with higher number than array
    int lowest = 100;

    // Loop through all elements in array
    for (int i = 0; i < size; i++)
    {
        // If current element is greater than highest
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
        // If current element is smaller than lowest
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    // Display highest and lowest values
    cout << "\nHighest = " << highest << "\nLowest = " << lowest << endl;
    
    // Calculate difference and store in reference parameter
    diff = highest - lowest;
}

int main()
{
    // Seed random number generator
    srand(time(0));
    
    // Get size from user
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    // Dynamically allocate array
    int* arr = new int[n];
    
    // Fill array with random numbers between 1 and 99
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + rand() % 99;
    }
    
    // Display array
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Variable to store difference
    int diff;
    
    // Call function with array, size, and diff reference
    difference(arr, n, diff);
    
    // Display difference in main
    cout << "Difference between highest and lowest = " << diff << endl;
    
    // Free dynamically allocated memory
    delete[] arr;
    
    return 0;
}
