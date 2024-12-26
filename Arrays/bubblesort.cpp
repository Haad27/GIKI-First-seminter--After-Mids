#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sort ( int z[] , int size){

for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size-1; j++)
    {
        if (z[j] < z[j+1])
        {
            int temp = z[j];
            z[j] = z [j+1];
            z[j+1] = temp;
        }
        
    }
    
}
for (int i = 0; i < size; i++)
{
    cout << z[i] << " ";
}

}

int main() {
  
 int arr[]= {1,6,3,7,2,9,2,6,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort (arr,size);
    return 0;
}
