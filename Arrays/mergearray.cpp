#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = {1,2,3,4};
  int b[] = {5,6,7,8};
int sizea = sizeof(a) / sizeof(a[0]);
int sizeb = sizeof(b) / sizeof(b[0]);
  int c [sizea + sizeb] ;
  merge(a, (a+sizea) , b , (b+sizeb) , c );

  for (int i = 0; i < sizea + sizeb; i++)
  {
    cout << c[i]<<endl;
  }
  
    return 0 ;
}