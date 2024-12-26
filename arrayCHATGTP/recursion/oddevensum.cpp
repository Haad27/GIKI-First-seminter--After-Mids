#include <iostream>
#include <string>
#include <vector>

using namespace std;
int evensum = 0;
int oddsum = 0;

int sumEvenDigits(int x, int &evensum);
int sumOddDigits(int x, int &oddsum);

int sumOddDigits(int x, int &oddsum)
{
    if (x == 0)
    {
        cout << "the oddsum is == " << oddsum;
        return 0;
    }

    int digit = x % 10;
    if (digit % 2 != 0)
    {
        oddsum = oddsum + digit;
        return sumOddDigits(x / 10, oddsum);
    }
    else
    {
        return sumEvenDigits(x , evensum);
    }
}
int sumEvenDigits(int x, int &evensum)
{
    if (x == 0)
    {
        cout << "the evensum is == " << evensum;
        return 0;
    }

    int digit = x % 10;
    if (digit % 2 == 0)
    {
        evensum = evensum + digit;
        return sumEvenDigits(x / 10, evensum);
    }
    else
    {
        return sumOddDigits(x , oddsum);
    }
}

int main()
{
    int x;
    cout << "enter any digit ";
    cin >> x;
    

    int result = sumEvenDigits(x, evensum);
    cout << "sum of even = " << evensum << endl;

    return 0;
}
