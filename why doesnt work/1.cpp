#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Global variables
string sentence; // To store the input sentence
char alpha[400]; // Array for alphabetic characters

// Recursive function to check if a string is palindrome
// Parameters: sentence - string to check
//            start - starting index
//            end - ending index
bool ispalindrome(string sentence, int start, int end)
{
    // Base case: if start index crosses or equals end index
    // string is palindrome up to this point
    if (start >= end)
    {
        return true;
    }

    // If characters at start and end don't match
    // string is not a palindrome
    if (sentence[start] != sentence[end])
    {
        return false;
    }

    // Recursive call with next inner pair of characters
    return ispalindrome(sentence, start + 1, end - 1);
}

int main()
{
    // Array of punctuation marks to be handled
    char grammer[] = {' ', ',', '.', ':', ';', '!', '?', '"', '\'', '(', ')', '[', ']'};

    // Prompt user for input
    cout << "enter sentence thst you weant to check if it is a penindrome\n";
    getline(cin, sentence);

    // Create new string to store sentence without special characters
    string spaces = "";

    // Remove special characters (specifically brackets)
    // Note: Current implementation only checks for (grammer[10])
    for (int i = 0; i < sentence.size(); i++)
    {
        for (int j = 0; j < sizeof(grammer); j++)
        {
            if (sentence[i] != grammer[j])
        {
            spaces[i] = sentence[i];
        }
        }
        
       
    }

    // Convert the entire sentence to lowercase
    // for case-insensitive comparison
    for (int i = 0; i < spaces.length(); i++)
    {
        spaces[i] = tolower(spaces[i]);
    }

    // Check if the sentence is palindrome and display result
    if (ispalindrome(spaces, 0, spaces.length() - 1) == true)
    {
        cout << "it is a palindrome\n";
    }
    if (ispalindrome(spaces, 0, spaces.length() - 1) == false)

    {
        cout << "it is not a palindrome\n";
    }
}
