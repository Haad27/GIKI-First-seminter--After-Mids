#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int frequecny [10] = {};

    for (int i = 0; i < 10000; i++)
    {
        int temp = i;
        while ( temp > 1)
        {
            int digit = temp % 10;
            temp= temp / 10 ;
            frequecny[digit]++;
        }
        
    }
    for (int i = 1; i < 10; i++)
    {
        cout << frequecny[i]<<endl;
    }
    
    

    
    return 0 ;
}
