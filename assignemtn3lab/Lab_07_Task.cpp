#include <iostream>
#include <string>
#include <vector>

using namespace std;
// declare global variable
int arr[99][99];

// function for transveres
int transposeArray(int row, int col)
{
    // using a third value
     int temp = col;
    int value =0;
    int final[99][99];
    col = row;
    row = temp;
    // changing the values
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout <<  arr[j][i];
        }
        cout << endl;
    }
    // displaying the values
 
    
}
int main()
{
    int row, col;
    cout << "enter the number of rows you want \n";
    cin >> row;
    cout << "enter the number of columns \n";
    cin >> col;

    // putting the values
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    // displaying the original matrix before taking tranverse
    cout << "original value \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "after transpose \n";
    // calling the transverse fucntion
    transposeArray(row, col);
    return 0;
}
