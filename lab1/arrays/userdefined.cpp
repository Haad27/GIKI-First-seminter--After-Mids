#include <iostream>
using namespace std;

int main() {
    int x,y;
    
    cout <<"enter the numner of rows ";
    cin >> x;
    cout << "enter the number of columns \n";
    cin >> y ;
        int arr[x][y];

    // Input values
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter value for position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    
    // Display array
    cout << "Array elements:" << endl;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
