#include <iostream>
#include <string>
#include <vector>

using namespace std;
int * display(){
    int *ptr = new int [4];

    for (int i = 0; i < 4; i++)
    {
        ptr[i] = i;
    }
    return ptr;
}

int main() {
  int *arr = display();

  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] <<" ";
  }
  

  
    return 0;
}
