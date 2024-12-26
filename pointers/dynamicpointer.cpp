#include <iostream>
using namespace std;

int main() {
    // 1. Single Dynamic Variable
    int *ptr1 = new int[9000];
    *ptr1 = 10;          // Store value
    cout << "Single value: " << *ptr1 << endl;
    delete ptr1;         // Free memory
    ptr1 = nullptr;      // Good practice to set pointer to null after delete

    // 2. Dynamic Array
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    
    int *arr = new int[size];  // Allocate memory for array
    
    // Fill array
    cout << "Enter " << size << " numbers:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Print array
    cout << "Your numbers are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;  // Free array memory
    arr = NULL;

   
 

    return 0;
}
