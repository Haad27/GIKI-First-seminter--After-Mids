#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    ofstream writefile("numbers.txt");
    if (writefile.is_open())
    {
       writefile << 453<<endl;
       writefile << 234<<endl;
       writefile << 1<<endl;
       writefile << 2<<endl;

       writefile.close();
    }
    

    ifstream file("numbers.txt");
    
    if (file.is_open()) {
        int number;
        while (file >> number) {
            cout << "readnumber " << number << endl;
        }
        file.close(); 
    } else {
        cout << "Error: Could not open the file" << endl;
    }
    
    return 0;
}
