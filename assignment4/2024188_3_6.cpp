#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to arrange and print characters in alphabetical order
// Parameters: character array and its size
void arrange(char arr[], int size)
{
    // Array containing all lowercase alphabets in order
    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
                       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
                       's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // Outer loop: iterate through each alphabet
    for (int i = 0; i < 26; i++)
    {
        // Inner loop: check each element of input array
        for (int j = 0; j < size; j++)
        {
            // If current input array element matches current alphabet
            if (arr[j] == alphabets[i])
            {
                // Print the matching character
                // This ensures characters are printed in alphabetical order
                // If character appears multiple times, it will be printed multiple times
                cout << alphabets[i] << " ";
            }
        }
    }
}

int main()
{
    // Initialize character array with unsorted characters
    char arr[] = {'b', 'z', 'a', 'c', 'f', 'd', 'e', 'a' ,'c'};

    // Calculate size of array:
    // Total size of array / size of one element
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call arrange function with array and its size
    arrange(arr, size);
    return 0;
}
