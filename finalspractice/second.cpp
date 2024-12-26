#include <iostream>
using namespace std;

// Write these three functions:

// 1. Create a dynamic array and fill it with numbers 1 to n
int* createArray(int size) {
    int *arr = new int  [size];

   for (int i = 0; i < size; i++)
   {
    cout << "enter the value of " << i << " number \n";
    cin >> arr[i];
   }
   
    // Your code here
    // Allocate memory for 'size' integers
    // Fill array with numbers 1 to size
    // Return the pointer to the array
    return arr;
}

// 2. Double each element in the array using pointer notation
void doubleElements(int* arr, int size) {
    // Your code here
    // Use pointer notation (*(ptr + i)) to multiply each element by 2

    for (int i = 0; i < size; i++)
    {
       arr[i] = arr[i] *2;
    }
    
}

// 3. Find sum of all elements using pointer notation
int findSum(int* arr, int size) {
    int sum =0 ;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(arr+i);
    }
    return sum;
}

int main() {
    int size = 5;
    
    // Create array
    int* numbers = createArray(size);
    
    // Print original array
    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Double elements
    doubleElements(numbers, size);
    
    // Print modified array
    cout << "After doubling: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Print sum
    cout << "Sum: " << findSum(numbers, size) << endl;
    
    // Don't forget to free memory!
    delete[] numbers;    
    return 0;
}
