#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the nth Fibonacci number using recursion
// Parameters: n - position in the sequence (0-based index)
// Returns: Fibonacci number at position n
int fib(int n)
{
    // Base case 1: First number in Fibonacci sequence
    if (n == 0)
    {
        return 0;
    }
    // Base case 2: Second number in Fibonacci sequence
    else if (n == 1)
    {
        return 1;
    }
    // Recursive case: Calculate nth number by adding previous two numbers
    else
    {
        // fib(n-1) gets previous number
        // fib(n-2) gets number before that
        // Add them to get current Fibonacci number
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;  // Variable to store how many Fibonacci numbers to generate
    
    // Get input from user
    cout << " enter the number of n for fibonacci sequence";
    cin >> n;

    // Loop to print first n numbers of sequence
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << endl;  // Print each number on new line
    }

    return 0;
}
