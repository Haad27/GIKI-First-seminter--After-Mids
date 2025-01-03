#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Initialize array with values
    int arr[] = {5, 6, 4, 3, 2, 1, 3, 7, 9};
    
    // Calculate size of array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Arrays to store duplicate and missing numbers
    // Initialized to zero

    // Variables to track range of numbers
    int largest = 0, smallest = 100;

    // Find duplicate elements
    cout << "elemets that occured twice == ";
    // Compare each element with all elements after it
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // If match found, it's a duplicate
            if (arr[i] == arr[j])
            {
                cout << arr[i];
            }
        }
    }

    // Find largest and smallest numbers in array
    for (int i = 0; i < size; i++)
    {
        // Update largest if current number is bigger
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        // Update smallest if current number is smaller
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    // Boolean array to mark present numbers
    // Initialize all to false
    bool present[100] = {false};
    
    // Find missing elements
    cout << "\nthe missing elements are == ";
    
    // Mark numbers that are present in array
    for (int i = 0; i <= size; i++)
    {
        present[arr[i]] = true;
    }

    // Check all numbers in range from smallest to largest
    for (int i = smallest; i < largest; i++)
    {
        // If number is not present, it's missing
        if (!present[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}
// i prefer this method 
// cout << "Method 2 - Missing numbers: ";
//     for(int i = 0; i < 10; i++) {
//         bool found = false;
//         for(int j = 0; j < size; j++) {
//             if(range[i] == arr[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if(!found) {
//             cout << range[i] << " ";
//         }
//     }
//     cout << endl;
// }
