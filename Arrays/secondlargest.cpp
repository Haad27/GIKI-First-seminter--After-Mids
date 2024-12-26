#include <iostream>
#include <string>
#include <vector>

using namespace std;
void secondlargest(int z[], int size)
{

    int second =0 , largest = 0;
    for(int i = 0; i < size; i++) {
        if(z[i] > largest) {
            // When we find a new largest
            second = largest;    // Old largest becomes second
            largest = z[i];      // Update largest
        }
        else if(z[i] > second && z[i] < largest) {
            // When we find a number between largest and second
            second = z[i];
        }
    }
    cout << "answer " << second;

    cout << "\n answer  largest" << largest;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 7, 8};

    int size = sizeof(arr) / sizeof(arr[0]);
    secondlargest(arr, size);
    return 0;
}
