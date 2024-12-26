#include <iostream>
#include <ctime> // For random number generation
using namespace std;

// Function to find employee with highest total working hours
// Parameters: 2D array of hours, number of employees (m), number of days (n)
void highestvalue(int arr[6][5], int m, int n)
{
    int highest = 0;          // Store highest total hours
    int sumarr[100] = {};    // Array to store sum of hours for each employee
    int sum = 0;             // Temporary variable for calculating sum
    int maxrow = 0;          // Store employee number with highest hours

    // Calculate total hours for each employee
    for (int i = 0; i < m; i++)
    {
        sum = 0;  // Reset sum for each employee
        // Sum hours for all days
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        sumarr[i] = sum;  // Store total hours for current employee
    }

    // Display total hours for each employee
    for (int i = 0; i < m; i++)
    {
        cout << sumarr[i] << " ";
    }
    cout << endl;

    // Find employee with highest hours
    for (int i = 0; i < m; i++)
    {
        // Update highest if current employee has more hours
        if (sumarr[i] > highest)
        {
            highest = sumarr[i];
            maxrow = i;
        }
        // Display hours worked by each employee
        cout << "\nEmployee " << i+1 << " worked the most with " << sumarr[i] << " hours";
    }
    
    // Display final results
    cout << "\n\nhighest value is " << highest << endl;
    cout << "the employee who won is number " << maxrow + 1;
}

int main()
{
    // Seed random number generator with current time
    srand(time(0));
    
    int m;           // Number of employees
    const int n = 5; // Number of weekdays (Mon-Fri)

    // Get number of employees from user
    cout << "Enter total number of employees: ";
    cin >> m;

    // Create 2D array to store hours
    int arr[m][n]; 

    // Fill array with random hours between 5 and 9
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 5 + rand() % 5;
        }
    }

    // Display table header
    cout << "\nMon  Tue  Wed  Thu  Fri\n";

    // Display hours for each employee
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << "     ";
        }
        cout << endl;
    }

    // Call function to find employee with highest hours
    highestvalue(arr, m, 5);

    return 0;
}
