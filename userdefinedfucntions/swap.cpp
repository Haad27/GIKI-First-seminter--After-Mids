#include <iostream>
using namespace std;

int incrementCounter(bool reset = false) {
    static int count = 0;
    if (reset) {
        count = 0;
    }
    return ++count;
}

int main() {
    cout << incrementCounter() << endl;  // 1
    cout << incrementCounter() << endl;  // 2
    cout << incrementCounter() << endl;  // 3
    cout << incrementCounter(true) << endl;  // 1 (reset)
    cout << incrementCounter() << endl;  // 2
    return 0;
}
