#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   
    int arr3D[3][3][3] ;
    int value=0;


   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
       for (int k = 0; k < 3; k++)
       {
        arr3D[i][j][k] = value ;
        value ++;
       }
       
    }
    
   }for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
       for (int k = 0; k < 3; k++)
       {
        cout << arr3D[i][j][k];
       }
    cout << endl;

    }
   }
   

    return 0;
}