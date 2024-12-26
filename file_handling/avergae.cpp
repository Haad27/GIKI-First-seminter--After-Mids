#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string line;
    int sum = 0;
    int count = 0;
    ifstream myfile("numbers.txt");

    if (myfile.is_open())
    {
        // Read numbers directly instead of processing character by character
        int number;
        while (myfile >> number)
        {
            cout << "Number found: " << number << endl;
            sum += number;
            count++;
        }
        myfile.close();

        if (count > 0)
        {
            double average = static_cast<double>(sum) / count;
            cout << "\nSum: " << sum << endl;
            cout << "Count: " << count << endl;
            cout << "Average: " << average << endl;
        }
        else
        {
            cout << "No numbers found in the file." << endl;
        }
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
