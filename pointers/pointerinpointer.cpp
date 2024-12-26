#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
int arr[] = {10, 20, 30, 40};
int* ptr = arr;

cout << *ptr + 2;     // Output: 12 (10 + 2)
cout << *(ptr + 2);   // Output: 30 (value at 3rd position)

    return 0;
}
