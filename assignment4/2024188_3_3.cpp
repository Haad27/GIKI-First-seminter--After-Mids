#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to count occurrences of each letter in a string
// Parameter: string to analyze
void occurence(string x)
{
  // Array containing all lowercase letters of alphabet
  char words[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                  'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  // Array to store count of each letter (initialized to 0)
  // Index corresponds to position in alphabet (0=a, 1=b, etc.)
  int word[26] = {0};

  // Range-based for loop to process each character in input string
  for (char value : x)
  {
    // Switch statement to handle each possible character
    switch (value)
    {
    case 'a':
    case 'A':
      word[0]++;
      break;
    case 'b':
    case 'B':
      word[1]++;
      break;
    case 'c':
    case 'C':
      word[2]++;
      break;
    case 'd':
    case 'D':
      word[3]++;
      break;
    case 'e':
    case 'E':
      word[4]++;
      break;
    case 'f':
    case 'F':
      word[5]++;
      break;
    case 'g':
    case 'G':
      word[6]++;
      break;
    case 'h':
    case 'H':
      word[7]++;
      break;
    case 'i':
    case 'I':
      word[8]++;
      break;
    case 'j':
    case 'J':
      word[9]++;
      break;
    case 'k':
    case 'K':
      word[10]++;
      break;
    case 'l':
    case 'L':
      word[11]++;
      break;
    case 'm':
    case 'M':
      word[12]++;
      break;
    case 'n':
    case 'N':
      word[13]++;
      break;
    case 'o':
    case 'O':
      word[14]++;
      break;
    case 'p':
    case 'P':
      word[15]++;
      break;
    case 'q':
    case 'Q':
      word[16]++;
      break;
    case 'r':
    case 'R':
      word[17]++;
      break;
    case 's':
    case 'S':
      word[18]++;
      break;
    case 't':
    case 'T':
      word[19]++;
      break;
    case 'u':
    case 'U':
      word[20]++;
      break;
    case 'v':
    case 'V':
      word[21]++;
      break;
    case 'w':
    case 'W':
      word[22]++;
      break;
    case 'x':
    case 'X':
      word[23]++;
      break;
    case 'y':
    case 'Y':
      word[24]++;
      break;
    case 'z':
    case 'Z':
      word[25]++;
      break;
    case ' ': // Handle spaces
      break;
    default: // Handle any other characters
      cout << "Invalid character" << endl;
      break;
    }
  }

  // Display results
  // Loop through all possible letters
  for (int i = 0; i < 26; i++)
  {
    // Only display letters that appeared at least once
    if (word[i] != 0)
    {
      // Print letter and its count
      cout << words[i] << " : " << word[i] << endl;
    }
  }
} 

int main()
{
  // Variable to store input string
  string sentence;

  // Prompt user for input
  cout << "enter any sentence \n";

  // Get entire line of input (including spaces)
  getline(cin, sentence);

  // Call function to count and display letter occurrences
  occurence(sentence);

  return 0;
}
