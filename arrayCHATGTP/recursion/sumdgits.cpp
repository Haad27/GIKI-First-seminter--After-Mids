#include <iostream>
#include <string>
#include <vector>

using namespace std;
int sumdigit(int num){
    if (num==0)
    {
        return 1;
    }
    return (num %10) + sumdigit(num/10);
}

int main() {
    int x;
  cout << "enter";
  cin >> x;

  cout << "\ntotal digit sare = " << sumdigit(x);

  
    return 0;
}
