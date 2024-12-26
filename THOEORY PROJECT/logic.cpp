#include <iostream>
#include <cstdlib> // needed for exit()
using namespace std;

int main() {
    // int age;
    // std::cout << "Enter your age: ";
    
    // if (!(std::cin >> age)) {
    //     std::cout << "Error: Invalid input!\n";
    //     exit(1);  // Exits with error code 1 (indicating input error)
    // }
    
    // if (age < 0) {
    //     std::cout << "Error: Age cannot be negative!\n";
    //     exit(2);  // Exits with error code 2 (indicating invalid age)
    // }
    
    // std::cout << "Valid age entered!\n";
    // exit(0);  // Normal exit - everything worked fine

   
    int number;
    
    // Without cin.clear() and cin.ignore()
  

    // With proper error handling
    cout << "Enter a number: ";
    while (!(cin >> number)) {
        cout << "Invalid input! Try again: ";
        cin.clear();           // Reset error flags
        cin.ignore(100, '\n'); // Clear bad input from buffer
    }

    cout << "You entered: " << number << endl;
    return 0;


}
