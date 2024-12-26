#include <iostream>
using namespace std;

// Function to create and initialize a dynamic array
int* createArray(int size) {
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

// Function to display array
void displayArray(int* arr, int size) {
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find maximum element
int findMax(int* arr, int size) {
    int max = arr[0];
    int *ptr;
    *ptr=9;
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum element
int findMin(int* arr, int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to calculate average
double calculateAverage(int* arr, int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Function to search an element
int searchElement(int* arr, int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Function to reverse array
void reverseArray(int* arr, int size) {
    for(int i = 0; i < size/2; i++) {
        // Swap elements
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // Create array
    int* arr = createArray(size);
    
    // Display original array
    cout << "\nOriginal ";
    displayArray(arr, size);
    
    // Find and display maximum
    cout << "Maximum element: " << findMax(arr, size) << endl;
    
    // Find and display minimum
    cout << "Minimum element: " << findMin(arr, size) << endl;
    
    // Calculate and display average
    cout << "Average: " << calculateAverage(arr, size) << endl;
    
    // Search for an element
    int searchKey;
    cout << "\nEnter element to search: ";
    cin >> searchKey;
    int position = searchElement(arr, size, searchKey);
    if(position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    
    // Reverse the array
    cout << "\nReversing the array..." << endl;
    reverseArray(arr, size);
    cout << "After reverse: ";
    displayArray(arr, size);
    
    // Free memory
    delete[] arr;
    arr = nullptr;
    
    return 0;
}
