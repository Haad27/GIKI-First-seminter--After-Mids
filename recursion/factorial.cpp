#include <iostream>
#include <string>
#include <vector>

using namespace std;
int factorial(int a)
{
   
    if (a <= 1)
    {
        return 1;
    }

    return a * factorial(a-1);
}
int main()
{
    int num;
    cin >> num;
    cout << factorial(num);

    return 0;
}