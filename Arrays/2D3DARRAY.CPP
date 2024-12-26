#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[2][2] = {
        {0, 1},
        {2, 3},
    };
    int arr3D[2][2][2] = {
        {{0, 1},
         {2, 3}},
        {
            {4, 5},
            {6, 7},
        }};
    cout << arr3D[0][0][0] << endl;
    cout << arr3D[0][0][1] << endl;
    cout << arr3D[0][1][0] << endl;
    cout << arr3D[0][1][1] << endl;
    cout << arr3D[1][0][0] << endl;
    cout << arr3D[1][0][1] << endl;
    cout << arr3D[1][1][0] << endl;
    cout << arr3D[1][1][1] << endl;

    return 0;
}