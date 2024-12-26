#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int x;
cout << "enter 4 digit ";
cin >> x;
int temp = x;
int sum = 0 ;
while (x>0)
{
    int digit = x % 10 ;
    x= x/10;
    sum = digit + sum ;

    
}
cout << "average = " << sum / 4 <<endl;

    
    return 0 ;
}