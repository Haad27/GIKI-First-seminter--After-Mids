#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count1(string str, int size)
{
    char x1, x2;
    cout << "whichi char diffrence you wanna find";
    cin >> x1;
    cin >> x2;
    int count1, count2 = 0;

    char alpha[26] = {};
    for (char i = 0; i < 26; i++)
    {
        alpha[i] = char('a' + i);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (str[i] == alpha[j])
            {
                if (str[i] == x1)
                {
                    cout << "the first  letter " << alpha[j] << " found at position " << i + 1 << endl;
                    count1 = count1 + i + 1;
                }
                if (str[i] == x2)
                {
                    cout << "the secomd  letter " << alpha[j] << " found at position " << i + 1 << endl;
                    count2 = count2 + i + 1;
                }
            }
        }
    }
    cout << "total spaces between both == " << count1 - count2;
}
int main()
{
    string sentence;
    cout << "enter sny sentence\n";
    getline(cin, sentence);
    int size = sentence.length();

    count1(sentence, size);

    return 0;
}
