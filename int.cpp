#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int x = 20000;
    // To get number of digits:
    string str = to_string(x);
    cout << str.length() << endl;  // or
    cout << x << endl;
    return 0;
}
