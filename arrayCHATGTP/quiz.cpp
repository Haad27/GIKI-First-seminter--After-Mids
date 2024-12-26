# include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;    // Store the value at address x in temp
    *x = *y;         // Put the value at address y into x
    *y = temp;       // Put the temp value into y
}
int main() {
    int a = 5;
    int b = 10;
    
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    swap(&a, &b);  // Pass the addresses of a and b
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
