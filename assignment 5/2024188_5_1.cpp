#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Global variables to store different averages
double average1 = 0;  // Average for first subject
double average2 = 0;  // Average for second subject
double average3 = 0;  // Average for third subject
double average;       // Overall class average

// Function to calculate and display grades for each student
void grading(int arr[100][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        int studentAverage = 0;

        // Calculate sum of marks for current student
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        studentAverage = sum / 3;
        
        // Display student's average
        cout << "the avergae of " << i + 1 << " student is == " << sum / 3 << endl;
        cout << "the grade of student " << i + 1 << " is == ";
        
        // Determine and display letter grade based on average
        if (studentAverage >= 90)
            cout << "A";
        else if (studentAverage >= 80)
            cout << "B";
        else if (studentAverage >= 70)
            cout << "C";
        else if (studentAverage >= 60)
            cout << "D";
        else
            cout << "F";
        cout << endl;
    }
}

// Function to calculate average marks for each subject and overall class average
void calculateAverage(int arr[100][3], int size)
{
    int sum = 0;    // For overall sum
    int sum1 = 0;   // For first subject sum
    int sum2 = 0;   // For second subject sum
    int sum3 = 0;   // For third subject sum

    // Calculate sum for first subject
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            sum1 = sum1 + arr[i][j];
        }
    }
    average1 = sum1 / size;

    // Calculate sum for second subject
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            sum2 = sum2 + arr[i][j];
        }
    }
    average2 = sum2 / size;

    // Calculate sum for third subject
    for (int i = 0; i < size; i++)
    {
        for (int j = 2; j < 3; j++)
        {
            sum3 = sum3 + arr[i][j];
        }
    }
    average3 = sum3 / size;

    // Calculate overall sum for class average
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    average = sum / (size * 3);

    // Display all calculated averages
    cout << "the average of the first subject is == " << average1 << endl;
    cout << "the average of the second subject is == " << average2 << endl;
    cout << "the average of the third subject is == " << average3 << endl;
    cout << "the average of the class is == " << average << endl;
}

int main()
{
    int students;
    cout << "ente the total number of students \n";
    cin >> students;

    // Create 2D array to store marks: rows=students, columns=subjects
    int arr[students][3];
    
    // Input marks for each student in each subject
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "for the student number == " << i + 1 << " enter his marks in == " << j + 1 << " subject" << endl;
            cin >> arr[i][j];
        }
    }
    
    // Calculate and display averages and grades
    calculateAverage(arr, students);
    grading(arr, students);
    return 0;
}
