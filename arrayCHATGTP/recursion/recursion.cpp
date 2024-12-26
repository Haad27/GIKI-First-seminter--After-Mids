#include <iostream>
using namespace std;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
// Function declaration
int arraySum(int arr[], int size);

int main() {
    
        int size = 10;

    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Sum of array elements: " << arraySum(arr, size) << endl;
    
    return 0;
}

// Write your recursive function here
int arraySum(int arr[], int size) {
    int sum = 0 ;
    if (size == 0)
    {
       return 1;
    }
    

    return arr[size-1] + arraySum( arr , size-1);
}
