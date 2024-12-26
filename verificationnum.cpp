#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main (){
    int num;
    cout << "enter ";
    while(!(cin >> num)){
        cout << "errors enter a number not a string \n";
        cin.clear();
        cin.ignore(133 ,'\n');
    }
    cout << "than k you\n";
}
