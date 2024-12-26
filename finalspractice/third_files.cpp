#include <iostream>
#include <fstream>
using namespace std;

// Function declarations
void addStudent();
void displayAllStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int choice;

    do
    {
        cout << "\n=== Student Record System ===";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayAllStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

// Implement these functions:

void addStudent()
{
    ofstream file("students.txt");
    int students;
    cout << "how many studnets do you want to add \n";
    cin >> students;
    cin.ignore(); // Clear the input buffer

    for (int i = 0; i < students; i++)
    {
        string x;
        cin >> x;
        file << x << endl;
    }
}

void displayAllStudents()
{
    ifstream file("students.txt");

    string line;

    while (file >> line)
    {
        cout << line << endl;
    }
}

void searchStudent()
{
    string name;
    bool flag = false;
    cout << "enter the students name\n";
    cin >> name;

    ifstream file("students.txt");
    string line;

    while (file >> line)
    {
        if (line == name)
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << "student found \n";
    }
    else
    {
        cout << "not found \n";
    }
}

void updateStudent()
{

    string name;
    bool flag = false;
    cout << "enter the students name\n";
    cin >> name;

    ifstream file("students.txt");
    string line;

    while (file >> line)
    {
        if (line == name)
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << "student found \n";

        ofstream myfile("students.txt", ios::app);

        if (myfile.is_open())
        {
            string newname;
            cout << "enter the new name ";
            cin >> newname;
            myfile << endl
                   << newname;
        }
    }
    else
    {
        cout << "not found \n";
    }
}

void deleteStudent()
{

    string name;
    bool flag = false;
    cout << "enter the students name\n";
    cin >> name;

    ifstream file("students.txt");
    string line;
    string line2;

    while (file >> line)
    {
        if (line == name)
        {
            flag = true;
            continue;
        }
        line2 = line2 + line;
    }

    if (flag)
    {
        cout << "student found \n";

        cout << "student found and deleted\n";
        ofstream writeFile("students.txt");
        writeFile << line2;
        writeFile.close();
    }
    else
    {
        cout << "not found \n";
    }
}