#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Global variables
string sentence; // To store the input sentence from user
char alpha[400]; // Array for alphabetic characters (currently unused)

// Recursive function to check if a string is palindrome
// Parameters: 
//   sentence - string to check for palindrome
//   start - starting index for comparison
//   end - ending index for comparison
// Returns: true if string is palindrome, false otherwise
bool ispalindrome(string sentence, int start, int end)
{
    // Base case: if start index crosses or equals end index
    // means we've checked all characters successfully
    // therefore it's a palindrome
    if (start >= end)
    {
        return true;
    }

    // If characters at start and end positions don't match
    // then string cannot be a palindrome
    if (sentence[start] != sentence[end])
    {
        return false;
    }

    // Recursive call: check next pair of characters
    // by moving start one position right and end one position left
    return ispalindrome(sentence, start + 1, end - 1);
}

int main()
{
    // Array containing all punctuation marks and spaces
    // that should be removed from the input string
    char grammer[] = {' ', ',', '.', ':', ';', '!', '?', '"', '\'', '(', ')', '[', ']'};

    // Get input string from user
    cout << "enter sentence thst you weant to check if it is a penindrome\n";
    getline(cin, sentence);

    // String to store the cleaned version of input
    // (without special characters)
    string spaces = "";

    // Process each character of the input string
    for (int i = 0; i < sentence.size(); i++)
    {
        bool isSpecialChar = false;
        
        // Check if current character matches any special character
        // in the grammer array
        for (int j = 0; j < sizeof(grammer); j++)
        {
            if (sentence[i] == grammer[j])
            {
                isSpecialChar = true;
                break;  // Exit loop if special character is found
            }
        }
        
        // If character is not special (not punctuation or space)
        // add it to the cleaned string
        if (!isSpecialChar)
        {
            spaces += sentence[i];
        }
    }

    // Convert all characters in cleaned string to lowercase
    // to make palindrome check case-insensitive
    for (int i = 0; i < spaces.length(); i++)
    {
        spaces[i] = tolower(spaces[i]);
    }

    // Check if string is palindrome and output result
    // First check: is it a palindrome?
    if (ispalindrome(spaces, 0, spaces.length() - 1) == true)
    {
        cout << "it is a palindrome\n";
    }
    // Second check: is it not a palindrome?
    if (ispalindrome(spaces, 0, spaces.length() - 1) == false)
    {
        cout << "it is not a palindrome\n";
    }
}
