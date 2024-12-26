#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int arr[2][3]={
        {1,2,6},{3,4,5}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
    cout << arr[i][j] ;
        }
        cout << endl;
    }
    
    return 0 ;
}
