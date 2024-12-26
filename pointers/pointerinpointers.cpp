#include <iostream>
using namespace std;

int main() {
    // Regular variable
    int x = 10;
    
    // Single pointer - stores address of x
    int* ptr1 = &x;
    
    // Double pointer - stores address of ptr1
    int** ptr2 = &ptr1;
    
    // Different ways to access value of x
    cout << "Value of x directly: " << x << endl;
    cout << "Value of x using ptr1: " << *ptr1 << endl;
    cout << "Value of x using ptr2: " << **ptr2 << endl;
    
    // Modifying x through ptr2
    **ptr2 = 20;
    cout << "\nAfter modification:" << endl;
    cout << "New value of x: " << x << endl;
    
    // Showing memory addresses
    cout << "\nMemory addresses:" << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;
    cout << "Value stored in ptr2: " << ptr2 << endl;
    
    return 0;
}
