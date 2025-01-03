#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverse(char *arr, int size)
{
    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size / 2; i++)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end --;
    }
}
int main()
{

    string sentence;
    cout << "enter any string \n";

getline(cin,sentence);
    int size = sentence.length();
    char *words = new char[size];

    for (int i = 0; i < size; i++)
    {
        words[i] = sentence[i];
    }
    reverse(words,size);
    cout << "reverse function is == \n";

    for (int i = 0; i < size; i++)
    {
        cout << words[i];
    }

    return 0;
}
