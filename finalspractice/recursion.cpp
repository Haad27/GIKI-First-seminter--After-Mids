#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str, int start, int end)
{
    // First clean the string if it's the initial call (when start is 0)
    if (start == 0) {
        string temp;
        // Remove spaces
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ')
            {
                temp += tolower(str[i]);  // Convert to lowercase while adding
            }
        }
        str = temp;  // Replace original string with cleaned version
        end = str.length() - 1;  // Update end position for new string length
    }

    // Base case for recursion
    if (start >= end)
    {
        return true;
    }

    // If characters don't match, it's not a palindrome
    if (str[start] != str[end])
    {
        return false;
    }

    // Recursive call with next positions
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string test = "A man a plan a canal Panama";
    cout << (isPalindrome(test, 0, test.length()-1) ? "True" : "False") << endl;
    return 0;
}
