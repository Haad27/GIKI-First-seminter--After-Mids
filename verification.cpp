#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool letters(string x){
    for (char y : x)
    {
       if (isalpha(y));
       return false;
    }
    
}
int main()
{

    string input;
    cout << "Enter name: ";
    getline(cin, input);

    if (letters(input)==false)
    {
        cout << input;
    }
    else
    {
        cout << "Invalid input! Name should contain only letters.\n";
    }
    return 0;
}