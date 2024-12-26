#include <iostream>
using namespace std;

// Forward declarations
int sumEvenDigits(int x);
int sumOddDigits(int x);

int sumEvenDigits(int x) {
    // Base case
    if (x == 0) {
        return 0;
    }
    
    int digit = x % 10;  // Get last digit
    
    if (digit % 2 == 0) {
        // If digit is even, add it and call sumOddDigits with remaining number
        return digit + sumOddDigits(x / 10);
    } else {
        // If digit is odd, skip it and call sumOddDigits with remaining number
        return sumOddDigits(x / 10);
    }
}

int sumOddDigits(int x) {
    // Base case
    if (x == 0) {
        return 0;
    }
    
    int digit = x % 10;  // Get last digit
    
    if (digit % 2 != 0) {
        // If digit is odd, add it and call sumEvenDigits with remaining number
        return digit + sumEvenDigits(x / 10);
    } else {
        // If digit is even, skip it and call sumEvenDigits with remaining number
        return sumEvenDigits(x / 10);
    }
}

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;
    
    cout << "Sum of even digits: " << sumEvenDigits(x) << endl;
    cout << "Sum of odd digits: " << sumOddDigits(x) << endl;
    
    return 0;
}
