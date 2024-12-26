#include <iostream>
using namespace std;

int main() {
    // Different data types
    int number = 42;
    char letter = 'A';
    double decimal = 3.14;

    // Void pointer declaration
    void* voidPtr;

    // Example 1: Pointing to an integer
    voidPtr = &number;
    // Need to cast void* to int* before dereferencing
    cout << "Integer value: " << *static_cast<int*>(voidPtr) << endl;


    // Example 2: Same pointer pointing to a char
    voidPtr = &letter;
    // Cast to char* before dereferencing
    cout << "Character value: " << *(static_cast<char*>(voidPtr)) << endl;

    // Example 3: Same pointer pointing to a double
    voidPtr = &decimal;
    // Cast to double* before dereferencing
    cout << "Double value: " << *(static_cast<double*>(voidPtr)) << endl;

    return 0;
}
