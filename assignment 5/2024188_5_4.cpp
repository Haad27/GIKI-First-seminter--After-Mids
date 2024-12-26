#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to reverse a character array
// Parameters:
//   arr - pointer to character array to be reversed
//   size - number of characters in the array
void reversefunc(char *arr, int size)
{
    // Initialize two pointers:
    // start - points to beginning of array
    // end - points to last element of array
    int start = 0;
    int end = size - 1;

    // Loop through half of the array
    // (since we're swapping pairs of characters)
    for (int i = 0; i < size/2; i++)
    {
        // Swap characters at start and end positions
        char temp = arr[start];     // Store start character temporarily
        arr[start] = arr[end];      // Move end character to start
        arr[end] = temp;            // Move stored character to end

        // Move pointers towards center
        start++;
        end--;
    }
}

int main()
{
    // Variables to store string length and input string
    int size;
    string sentence;

    // Get input string from user
    cout << "enter the word you want to reverse \n";
    getline(cin, sentence);
    
    // Get length of input string
    size = sentence.size();
    
    // Dynamically allocate character array of required size
    char *arr = new char[size];

    // Copy characters from string to character array
    for (int i = 0; i < size; i++)
    {
        arr[i] = sentence[i];
    }

    // Display original string
    cout << "original string == " << arr;
    cout << endl;
    
    // Reverse the character array
    reversefunc(arr, size);
    
    // Display reversed string
    cout << "reverse string == " << arr;

    // Free dynamically allocated memory
    delete[] arr;
    return 0;
}
