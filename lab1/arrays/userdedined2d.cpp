#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    
    // Input values
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter value for position" << i << "and" << j <<endl;
            cin >> arr[i][j];
        }
    }
    
    // Display array
    cout << "Array elements:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
