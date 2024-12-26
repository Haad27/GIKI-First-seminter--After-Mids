#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function that takes pointer to first element of 2D array and its dimensions
void sum(int* arr, int row, int col)
{
    // Variables to store sums
    int even = 0;
    int odd = 0;

    // Iterate through each row
    for(int i = 0; i < row; i++)
    {
        // Iterate through each column
        for(int j = 0; j < col; j++)
        {
            // Pointer arithmetic to access element at position [i][j]:
            // arr: base address
            // i*col: moves to start of row i
            // j: moves to specific column
            // *(arr + i*col + j): gets value at that position
            
            // Check if number is even
            if(*(arr + i*col + j) % 2 == 0)
            {
                // Add even number to even sum
                even += *(arr + i*col + j);
            }
            else
            {
                // Add odd number to odd sum
                odd += *(arr + i*col + j);
            }
        }
    }
    // Display results
    cout << "sum of even numbers is " << even << endl;
    cout << "sum of odd numbers is " << odd << endl;
}

int main()
{
    // Initialize 2D array with values
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Calculate number of rows:
    // Total size of array / size of one row
    int row = sizeof(arr) / sizeof(arr[0]);

    // Calculate number of columns:
    // Size of one row / size of one element
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Call sum function:
    // &arr[0][0]: Address of first element
    // row, col: dimensions of array
    sum(&arr[0][0], row, col);
    return 0;
}
