#include <iostream>
#include <string>
#include <vector>

using namespace std;
int count=0;
int sumdigit(int num){
    if (num==0)
    {
        return 1;
    }
     count++;

     (num %10) + sumdigit(num/10);
     return count;
}
int countDigits(int num) {
    // Base case: when number becomes 0
    if (num == 0) {
        return 0;    // Return 0, not 1
    }
    
    // Recursive call with one less digit
    return 1 + countDigits(num / 10);
}


int main() {
    int x;
  cout << "enter";
  cin >> x;

  cout << "\ntotal digit sare = " << sumdigit(x);

  
    return 0;
}

