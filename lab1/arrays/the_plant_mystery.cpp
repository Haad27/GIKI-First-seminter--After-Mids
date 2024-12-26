#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int flower = 1, growth;
    int cases = 0;
    int temp = 0;

    cout << "enter the test cases\n";
    cin >> cases;

    cout << "enter the amount of growth\n";
    cin >> growth;
    while (growth > 1)
    {
        int digit = growth % 10;
        growth = growth / 10;
        if (temp && digit == 1)
        {
            flower = flower + 5;
        }
        else if (temp && digit == 0)
        {
            cout << "flower deid";
            return 0;
        }
        else if (temp == 1 && digit == 0)
        {
            flower++;
        }
        else if (temp == 0 && digit == 1)
        {
            flower++;
        }
        temp = digit;
    }
    cout << "total lentgh " << flower;

    return 0;
}