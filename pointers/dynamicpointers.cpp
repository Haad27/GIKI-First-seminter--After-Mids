#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
  // dynamic pointers 
int *ptr = new int [100000];
ptr[100] = 120;

cout << ptr[100];
    return 0;
}
