#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Global variables to store sums
int evensum = 0;  // Stores sum of even digits
int oddsum = 0;   // Stores sum of odd digits

// Function prototypes
int sumEvenDigits(int x, int &evensum);  // Function to process even digits
int sumOddDigits(int x, int &oddsum);    // Function to process odd digits

// Function to calculate sum of odd digits
int sumOddDigits(int x, int &oddsum)
{
    // Base case: when number becomes 0
    if (x == 0)
    {
        cout << "The oddsum is == " << oddsum << endl;
        
    }

    // Extract rightmost digit
    int digit = x % 10;
    
    // If digit is odd
    if (digit % 2 != 0) 
    {
        oddsum = oddsum + digit;  // Add digit to odd sum
        return sumOddDigits(x / 10, oddsum);  // Recursive call with remaining digits
    }
    else  // If digit is even
    {
        return sumEvenDigits(x , evensum);  // Switch to even digits processing
    }
}

// Function to calculate sum of even digits
int sumEvenDigits(int x, int &evensum)
{
    // Base case: when number becomes 0
    if (x == 0)
    {
        cout << "The evensum is == " << evensum << endl;
        return 0; 
    }

    // Extract rightmost digit
    int digit = x % 10;
    
    // If digit is even
    if (digit % 2 == 0)
    {
        evensum = evensum + digit;  // Add digit to even sum
        return sumEvenDigits(x / 10, evensum);  // Recursive call with remaining digits
    }
    else  // If digit is odd
    {
        return sumOddDigits(x , oddsum);  // Switch to odd digits processing
    }
}

int main()
{
    int x;  // Variable to store input number
    cout << "Enter any number: ";
    cin >> x;  // Get number from user

    // Start processing with even digits function
    sumEvenDigits(x, evensum);

    

    return 0;
}
