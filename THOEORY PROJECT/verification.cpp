#include <iostream>
#include <string>
using namespace std;

// declerations
char choice;
long long int rolenumber;
int i = 0, totalStudents = 0;

string studentname[2000];
int rollno[9999] = {};
float semestergpa[9999];
string regNO[9999];

string father[9999];
long int studentphone[9999];
int studentpassword[9999];

// courses
float phy_gpa[9999];
float bio_gpa[9999];
float chem_gpa[9999];
float math_gpa[9999];
float eng_gpa[9999];

float cgpa[9999];


string stringverification(string &value)
{
    while ((cin >> value))
    {
        bool number = true;
        for (char x : value)
        {
            if (!isdigit(x))
            {
                return value;
                break;
            }
        }
        if (!number)
        {
            break;
        }
        cout << "enter a string not a number ";
    }
}
// for floats

int number_verification_float(float &x)
{
    while (!(cin >> x))
    {
        cout << "Enter a number not a string: ";
        cin.clear();
        cin.ignore(199, '\n');
    }
    return x;
}
int number_verification_int(int &x)
{
    while (!(cin >> x))
    {
        cout << "Enter a number not a string: ";
        cin.clear();
        cin.ignore(199, '\n');
    }
    return x;
}
int number_verification_long(long &x)
{
    while (!(cin >> x))
    {
        cout << "Enter a number not a string: ";
        cin.clear();
        cin.ignore(199, '\n');
    }
    return x;
}

float GPA_verifier(float gpa)
{
    while (true)
    {
        if (gpa >= 0 && gpa <= 4) // Changed || to && to correctly check range
        {
            return gpa; // Return valid GPA
        }
        else
        {
            cout << "Please enter GPA in the range of 0 to 4: ";

            number_verification_float(gpa);
        }
    }
}
float password_verifier(int password)
{
    while (true)
    {
        if (password >= 0 && password <= 4) // Changed || to && to correctly check range
        {
            return password; // Return valid GPA
        }
        else
        {
            cout << "Please enter GPA in the range of 0 to 4: ";
            cin >> password;
        }
    }
}
int number_verification_role(long long &x)
{
    cout << "\nEnter 4-digit roll number (1000-9999): ";
    
    while (true)
    {
        cin >> x;
        
        if (cin.fail())
        {
            cout << "\n=======================================\n";
            cout << "          ERROR MESSAGE               \n";
            cout << "=======================================\n";
            cout << "Enter a number not a string!\n";
            cout << "---------------------------------------\n";
            cin.clear();
            cin.ignore(199, '\n');
            cout << "\nEnter 4-digit roll number (1000-9999): ";
        }
        else if (x > 0 && x <= 9999)  // Changed condition to check for valid range
        {
            return x;  // Immediately return valid input
        }
        else
        {
            cout << "\n=======================================\n";
            cout << "          ERROR MESSAGE               \n";
            cout << "=======================================\n";
            cout << "Please enter a 4-digit roll number\n";
            cout << "Range: (1000-9999)\n";
            cout << "---------------------------------------\n";
            cout << "\nEnter 4-digit roll number (1000-9999): ";
        }
    }
}



int password_verifier_float(float password)
{
    cout << "\nEnter 4-digit roll number (1000-9999): ";
    
    while (true)
    {
        cin >> password;
        
        if (cin.fail())
        {
            cout << "\n=======================================\n";
            cout << "          ERROR MESSAGE               \n";
            cout << "=======================================\n";
            cout << "Enter a number not a string!\n";
            cout << "---------------------------------------\n";
            cin.clear();
            cin.ignore(199, '\n');
            cout << "\nEnter 4-digit roll number (1000-9999): ";
        }
        else if ( password>= 1000 && password <= 9999)  // Changed condition to check for valid range
        {
            return password;  // Immediately return valid input
        }
        else
        {
            cout << "\n=======================================\n";
            cout << "          ERROR MESSAGE               \n";
            cout << "=======================================\n";
            cout << "Please enter a 4-digit roll number\n";
            cout << "Range: (1000-9999)\n";
            cout << "---------------------------------------\n";
            cout << "\nEnter 4-digit roll number (1000-9999): ";
        }
    }
}
