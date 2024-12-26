#include <iostream>
#include <string>
using namespace std;


void generatePatterns(int n, string current, char lastChar) {
    // Base case
    if (current.length() == n) {
        cout << current << endl;
        return;
    }
    
    // Recursive cases:
    
    // Case 1: Try adding 'B' (always allowed)
    generatePatterns(n, current + 'B', 'B');
    
    // Case 2: Try adding 'A' (only if last char wasn't 'A')
    if (lastChar != 'A') {
        generatePatterns(n, current + 'A', 'A');
    }
}


int main() {
    int n;
    cout << "Enter the length of patterns: ";
    cin >> n;
    
    // Start with empty string and no last character
    generatePatterns(n, "", '\0');
    
    return 0;
}
