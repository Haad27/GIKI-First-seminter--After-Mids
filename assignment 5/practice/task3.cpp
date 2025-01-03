#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(char *arr, int start, int end)
{
    if (start >= end )
    {
       return true;
    }

    if (arr[start]!= arr[end])
    {
       return false;
    }
    return check(arr,start+1,end-1);
    
}
int main()
{
    int asize=0;
    string sentence;
    cout << "enter any sentnce you wanna see if it is pendoline\n";

     getline(cin, sentence) ;
    int size = sentence.length();
    char *words = new char[size];
    int j =0;
    for (int i = 0; i < size; i++)
    {
        if (sentence[i] != ' ')
        {
            words[j] = sentence[i];
            j++;
                    asize++;

        }
    }
    for (int i = 0; i < asize; i++)
    {
        words[i] = tolower(words[i]);
    }
    

    if (check( words,0,asize-1) == true)
    {
        cout << "yex ";
    }

    else
        cout << "no";


        delete[] words;
    return 0;
}
