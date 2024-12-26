#include <iostream>
using namespace std;

// Function to print from n to 1
void printDescending(int n) {
    // Base case: if n reaches 0, stop recursion
    if (n == 0) {
        return;
    }
    
    // First print the current number
    cout << n << " ";
    
    // Then make recursive call with n-1
    printDescending(n - 1);
}

// Function to print from 1 to n
void printAscending(int n) {
    // Base case: if n reaches 0, stop recursion
    if (n == 0) {
        return;
    }
    
    // First make recursive call with n-1
    printAscending(n - 1);
    
    // Then print the current number
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Descending order: ";
    printDescending(n);
    
    cout << "\nAscending order: ";
    printAscending(n);
    
    return 0;
}