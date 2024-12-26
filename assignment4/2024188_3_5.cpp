#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to merge and sort two arrays
// Parameters: two arrays and their respective sizes
void merger(int arr1[], int arr2[], int size1, int size2)
{
    // Create a new array to store merged elements
    // Size is sum of both input arrays
    int arr3[size1 + size2] = {};
    int size3 = size1 + size2;

    // Copy elements from first array to merged array
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy elements from second array to merged array
    // j tracks position in arr2, i tracks position in arr3
    for (int i = size1, j = 0; i < size3; i++, j++)
    {
        arr3[i] = arr2[j];
    }

    // Bubble sort to sort the merged array
    for (int i = 0; i < size3; i++)
    {
        for (int j = 0; j < size3 - 1; j++)
        {
            // If current element is greater than next element, swap them
            if (arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }

   

    // Copy first part of sorted array back to arr1
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = arr3[i];
    }
    
    // Display updated arr1
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    // Copy second part of sorted array back to arr2
    // Note: There appears to be a logical error here
    // Should be: arr2[i-size1] = arr3[i]
    for (int i = size1; i < size3; i++)
    {
        arr2[i] = arr3[i];
    }
     
    cout << endl;
    
    // Display updated arr2
    // Note: This loop has the same issue as above
    for (int i = size1; i < size3; i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    // Initialize two sorted arrays
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};

    // Calculate sizes of arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);


   // printing the ornignal arary
   cout << "the original array is " << endl;
   for (int i = 0; i < size1; i++)
   {
       cout << arr1[i] << " ";
   }
   cout << endl;
   for (int i = 0; i < size2; i++)
   {
       cout << arr2[i] << " ";
   }
   cout << endl;
   
    // Call merger function with both arrays and their sizes
    cout << "\nafter merging the array and rearranging it  " << endl;
    merger(arr1, arr2, size1, size2);
    return 0;
}
