#include <iostream>
#include <string>

using namespace std;

// declerations
char choice;
bool repeat;
bool isintvalid;
bool isphonevalid;
bool isstringvalid;
long long int rolenumber;
int i = 0, totalStudents = 2;

int rollno[10000];
float semestergpa[10000];
string regNO[10000];

string studentname[10000] = {"Asad khan", "Saad Khan"}; // THIS DATA WILL BE ALREADY STORED
string father[10000] = {"Abdul Wahid", "Amjad Ali"};
string studentphone[10000] = {"03484755592", "03458877645"};
int studentpassword[10000] = {4774, 4774};
// courses
float cgpa[10000] = {0, 3.5, 3.3};
float phy_gpa[10000] = {0, 3.5, 3.3};
float bio_gpa[10000] = {0, 3.5, 3.3};
float chem_gpa[10000] = {0, 3.5, 3.3};
float math_gpa[10000] = {0, 3.5, 3.3};
float eng_gpa[10000] = {0, 3.5, 3.3};

string schedule[6][9] = {
    // First row - Time slots
    {
        "             ", // Empty corner cell (13 spaces)
        "  8:00 - 8:50", // Time slots with proper spacing
        "  9:00 - 9:50",
        "10:30 - 11:20",
        "11:30 - 12:20",
        "12:30 - 13:20",
        "14:30 - 15:20",
        "15:30 - 16:20",
        "16:30 - 17:20",
    },
    {"Monday       "}, // Days of the week
    {"Tuesday      "}, // Each padded to 13 characters
    {"Wednesday    "},
    {"Thursday     "},
    {"Friday       "}};

int calculateGPA(int x)
{

    float total_gpa = phy_gpa[rolenumber] * 3 +
                      chem_gpa[rolenumber] * 3 +
                      bio_gpa[rolenumber] * 3 +
                      math_gpa[rolenumber] * 3 +
                      eng_gpa[rolenumber] * 3;

    return cgpa[x] = total_gpa / 15; // Total credit hours (5 subjects × 3 credits)
}
string space(string &value)
{
    int size = value.size();
    switch (size)
    {
    case 1:
        value = value + "            ";
        break;
    case 2:
        value = value + "           ";
        break;
    case 3:
        value = value + "          ";
        break;
    case 4:
        value = value + "         ";
        break;
    case 5:
        value = value + "        ";
        break;
    case 6:
        value = value + "       ";
        break;
    case 7:
        value = value + "      ";
        break;
    case 8:
        value = value + "     ";
        break;
    case 9:
        value = value + "    ";
        break;
    case 10:
        value = value + "   ";
        break;
    case 11:
        value = value + "  ";
        break;
    case 12:
        value = value + " ";
        break;
    default:
        break;
    }
    return value;
}

void view_table()
{
    // Top border
    cout << "\n+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+\n";

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << "|" << space(schedule[i][j]);
        }
        cout << "|\n"; // End of row

        // Separator between rows (except last row)
        if (i < 5)
        {
            cout << "+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+\n";
        }
    }

    // Bottom border
    cout << "+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+\n";
}
void update_table()
{
    int row, col;
    string value, choice;
    bool repeat;

    view_table(); // Show current table first

    do
    {
        do
        {
            cout << "\n+--------------------------------+\n";
            cout << "Enter row (1-5, where 1=Monday, 5=Friday): ";

            if (!(cin >> row))
            {
                cout << ">>> Please enter a valid number <<<\n";
                cin.clear();
                cin.ignore(199, '\n');
                repeat = true;
                continue;
            }

            if (row < 1 || row > 5)
            {
                cout << ">>> Invalid row. Please enter 1-5 <<<\n";
                repeat = true;
                continue;
            }
            repeat = false;
        } while (repeat);

        do
        {
            cout << "\n+--------------------------------+\n";
            cout << "Enter column (1-8, representing time slots): ";

            if (!(cin >> col))
            {
                cout << ">>> Please enter a valid number <<<\n";
                cin.clear();
                cin.ignore(199, '\n');
                repeat = true;
                continue;
            }

            if (col < 1 || col > 8)
            {
                cout << ">>> Invalid column. Please enter 1-8 <<<\n";
                repeat = true;
                continue;
            }
            repeat = false;
        } while (repeat);

        cout << "\n+--------------------------------+\n";
        cout << "Current value at " << schedule[row][0]
             << " at " << schedule[0][col]
             << " is: " << schedule[row][col] << "\n";

        do
        {
            cout << "\n+--------------------------------+\n";
            cout << "Enter new value: ";
            cin.ignore();
            getline(cin, value);

            if (value.empty())
            {
                cout << ">>> Value cannot be empty <<<\n";
                repeat = true;
                continue;
            }

            if (value.length() > 13)
            {
                cout << ">>> Value too long (max 13 characters) <<<\n";
                repeat = true;
                continue;
            }
            repeat = false;
        } while (repeat);

        schedule[row][col] = space(value);

        cout << "\n* Updated successfully!\n";
        view_table();

        do
        {
            cout << "\n+--------------------------------+\n";
            cout << "Would you like to update another slot? (Y/N): ";
            cin >> choice;

            if (choice.length() != 1)
            {
                cout << ">>> Please enter a single character (Y/N) <<<\n";
                repeat = true;
                continue;
            }

            choice[0] = toupper(choice[0]);
            if (choice[0] != 'Y' && choice[0] != 'N')
            {
                cout << ">>> Please enter Y or N only <<<\n";
                repeat = true;
                continue;
            }
            repeat = false;
        } while (repeat);

    } while (choice[0] == 'Y');
}

void add_time_table()
{
    string value;
    bool repeat;

    // Display current timetable with borders
    view_table();

    // Input new values
    cout << "\n* Enter new values:\n";
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            do
            {
                cout << "\n+--------------------------------+\n"
                     << "| Time: " << schedule[0][j] << "\n"
                     << "| Day:  " << schedule[i][0] << "\n"
                     << "+--------------------------------+\n"
                     << "Enter period: ";

                cin.ignore();
                getline(cin, value);

                if (value.empty())
                {
                    cout << ">>> Value cannot be empty <<<\n";
                    repeat = true;
                    continue;
                }

                if (value.length() > 13)
                {
                    cout << ">>> Value too long (max 13 characters) <<<\n";
                    repeat = true;
                    continue;
                }
                repeat = false;
            } while (repeat);

            schedule[i][j] = space(value);
        }
    }

    // Display updated timetable
    cout << "\n* Updated Timetable:\n";
    view_table();
}

void display_menu()
{
    cout << "\n+--------------------------------+\n"
         << "|      TIMETABLE MANAGER         |\n"
         << "+--------------------------------+\n"
         << "| 1: add time table              |\n"
         << "| 2: Update time table           |\n"
         << "| 3: View time table             |\n"
         << "| 4: Quit                        |\n"
         << "+--------------------------------+\n"
         << "Enter your choice: ";
}

void main_scedule()
{
    bool running = true;
    do
    {
        display_menu();
        int choice;

        while (!(cin >> choice))
        {
            cout << "\n! Please enter a number\n";
            cin.clear();
            cin.ignore(199, '\n');
            display_menu();
        }

        switch (choice)
        {
        case 1:
            cout << "\n* Adding/Viewing Timetable:\n";
            add_time_table();
            break;
        case 2:
            cout << "\n* Updating Timetable:\n";
            update_table();
            break;
        case 3:
            cout << "\n* Current Timetable:\n";
            view_table();
            break;
        case 4:
            running = false;
            cout << "\n* Goodbye!\n";
            break;
        default:
            cout << "\n! Invalid choice. Please enter 1-4\n";
            break;
        }
    } while (running);
}

void intCheck()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << ">>> Please Enter valid input <<<" << endl;
        isintvalid = false;
    }
    else
    {
        isintvalid = true;
    }
}
void stringcheck(string &value)
{
    bool temp;
    isstringvalid = true;
    // Check if string is empty

    if (value.empty())
    {
        isstringvalid = false;
        temp = false;
    }

    // Check each character
    for (char x : value)
    {
        if (isdigit(x))
        {
            isstringvalid = false;
            temp = false;
        }
        else
        {
            temp = true;
            repeat = true;
        }
    }
    if (temp == false)
    {
        cout << "Enter a string without numbers" << endl;
    }
}
void phonecheck(string &value)
{
    bool temp;
    isstringvalid = true;
    // Check if string is empty

    if (value.empty())
    {
        isphonevalid = false;
        temp = false;
    }

    // Check each character
    for (char x : value)
    {
        if (isdigit(x))
        {
            isphonevalid = true;
            temp = true;
        }
        else
        {
            temp = false;
            repeat = false;
        }
    }
    if (temp == false)
    {
        cout << "Enter numbers only" << endl;
    }
}

void isintvalidbool()
{
    if (isintvalid == false)
    {
        repeat = true;
    }
}

void add_members()
{
    // do loop to make sure the the project never ends so data remains stored
    do
    {
        cout << "\nEnter Roll Number 4 digit : ";
        cin >> rolenumber;
        intCheck(); // to check if integer or not
        if (isintvalid == false)
        {
            repeat = true;
            continue;
        }
        if (rolenumber > 999 && rolenumber <= 9999)
        {
            // check if the student already exists in database or not
            if (rollno[rolenumber] == rolenumber)
            {
                cout << "\nStudent Already Exists:\n";
                cout << "Name: " << studentname[rolenumber] << "\n"
                     << "Registration Number: " << regNO[rolenumber] << "\n"
                     << "Father Name: " << father[rolenumber] << "\n"
                     << "Phone Number: " << studentphone[rolenumber] << "\n"
                     << "Password: " << studentpassword[rolenumber] << "\n"
                     << "Physics GPA: " << phy_gpa[rolenumber] << "\n"
                     << "Chemistry GPA: " << chem_gpa[rolenumber] << "\n"
                     << "Biology GPA: " << bio_gpa[rolenumber] << "\n"
                     << "Mathematics GPA: " << math_gpa[rolenumber] << "\n"
                     << "English GPA: " << eng_gpa[rolenumber] << "\n"
                     << "Semester GPA: " << cgpa[rolenumber] << "\n";
            }
            // if student not found
            else
            {
                do
                {
                    cout << "Enter Password 4 digit: ";
                    cin >> studentpassword[rolenumber];
                    intCheck();
                    if (isintvalid == false)
                    {
                        repeat = true;
                        continue;
                    }
                    if (studentpassword[rolenumber] <= 999 || studentpassword[rolenumber] > 9999)
                    {
                        repeat = true;
                        continue;
                    }

                    repeat = false;
                } while (repeat != false);

                rollno[rolenumber] = rolenumber;

                // getting data
                do
                {
                    cout << "\nEnter details for student " << rolenumber << ":\n";

                    do
                    {
                        cout << "Enter Name: ";
                        cin.ignore();
                        getline(cin, studentname[rolenumber]);
                        stringcheck(studentname[rolenumber]);
                        if (isstringvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Registration Number: ";
                        cin >> regNO[rolenumber];
                        phonecheck(regNO[rolenumber]);
                        if (isphonevalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Father Name: ";
                        cin.ignore();
                        getline(cin, father[rolenumber]);
                        stringcheck(father[rolenumber]);
                        if (isstringvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Phone Number: ";
                        cin >> studentphone[rolenumber];
                        phonecheck(studentphone[rolenumber]);
                        if (studentphone[rolenumber].size() != 11)
                        {
                            cout << "Phone number must be 11 digits" << endl;
                            repeat = true;
                            continue;
                        }
                        if (isphonevalid == false)
                        {
                            repeat = true;
                            continue;
                        }

                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Physics GPA: ";
                        cin >> phy_gpa[rolenumber];
                        intCheck();
                        if (isintvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        if (phy_gpa[rolenumber] < 0 || phy_gpa[rolenumber] > 4)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Chemistry GPA: ";
                        cin >> chem_gpa[rolenumber];
                        intCheck();
                        if (isintvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        if (chem_gpa[rolenumber] < 0 || chem_gpa[rolenumber] > 4)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Biology GPA: ";
                        cin >> bio_gpa[rolenumber];
                        intCheck();
                        if (isintvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        if (bio_gpa[rolenumber] < 0 || bio_gpa[rolenumber] > 4)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter Mathematics GPA: ";
                        cin >> math_gpa[rolenumber];
                        intCheck();
                        if (isintvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        if (math_gpa[rolenumber] < 0 || math_gpa[rolenumber] > 4)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);

                    do
                    {
                        cout << "Enter English GPA: ";
                        cin >> eng_gpa[rolenumber];
                        intCheck();
                        if (isintvalid == false)
                        {
                            repeat = true;
                            continue;
                        }
                        if (eng_gpa[rolenumber] < 0 || eng_gpa[rolenumber] > 4)
                        {
                            repeat = true;
                            continue;
                        }
                        repeat = false;
                    } while (repeat != false);
                    repeat = false;
                } while (repeat != false);
                totalStudents++;

                calculateGPA(rolenumber);
                // Your existing code for displaying results...
                cout << "\nStudent Details Added:\n";
                cout << "Name: " << studentname[rolenumber] << "\n"
                     << "Registration Number: " << regNO[rolenumber] << "\n"
                     << "Father Name: " << father[rolenumber] << "\n"
                     << "Phone Number: " << studentphone[rolenumber] << "\n"
                     << "Password: " << studentpassword[rolenumber] << "\n"
                     << "Physics GPA: " << phy_gpa[rolenumber] << "\n"
                     << "Chemistry GPA: " << chem_gpa[rolenumber] << "\n"
                     << "Biology GPA: " << bio_gpa[rolenumber] << "\n"
                     << "Mathematics GPA: " << math_gpa[rolenumber] << "\n"
                     << "English GPA: " << eng_gpa[rolenumber] << "\n"
                     << "Semester GPA: " << cgpa[rolenumber] << "\n";
            }
        }
        else
        {
            cout << "Role number out of range. Please enter again" << endl;
            repeat = true;
        }
    } while (repeat == true);
}

void view_student()
{
    string input;
    do
    {
        do
        {
            cout << "\n=======================================\n";
            cout << "         VIEW STUDENT DETAILS         \n";
            cout << "=======================================\n";
            cout << "\nEnter 4-digit Roll Number to view: ";
            cin >> rolenumber;

            intCheck();
            if (isintvalid == false)
            {
                repeat = true;
                continue;
            }

            if (rolenumber < 1000 || rolenumber > 9999)
            {
                cout << ">>> Please enter a 4-digit number <<<" << endl;
                repeat = true;
                continue;
            }

            if (rollno[rolenumber] == 0)
            {
                cout << ">>> Student with this roll number does not exist! <<<" << endl;
                repeat = true;
                continue;
            }

            repeat = false;

        } while (repeat);

        cin.ignore();

        if (rollno[rolenumber] == rolenumber)
        {
            cout << "\n=======================================\n";
            cout << "          STUDENT DETAILS             \n";
            cout << "=======================================\n";
            cout << "\n---------------------------------------\n";
            cout << "Personal Information:\n";
            cout << "---------------------------------------\n";
            cout << "Name            : " << studentname[rolenumber] << "\n"
                 << "Registration No.: " << regNO[rolenumber] << "\n\n"
                 << "---------------------------------------\n"
                 << "Academic Records:\n"
                 << "---------------------------------------\n"
                 << "Physics GPA    : " << phy_gpa[rolenumber] << "\n"
                 << "Chemistry GPA  : " << chem_gpa[rolenumber] << "\n"
                 << "Biology GPA    : " << bio_gpa[rolenumber] << "\n"
                 << "Mathematics GPA: " << math_gpa[rolenumber] << "\n"
                 << "English GPA    : " << eng_gpa[rolenumber] << "\n"
                 << "Semester GPA   : " << cgpa[rolenumber] << "\n\n"
                 << "---------------------------------------\n"
                 << "Contact Information:\n"
                 << "---------------------------------------\n"
                 << "Father Name    : " << father[rolenumber] << "\n"
                 << "Phone Number   : " << studentphone[rolenumber] << "\n"
                 << "Password       : " << studentpassword[rolenumber] << "\n"
                 << "---------------------------------------\n";
        }
        else
        {
            cout << "\n=======================================\n";
            cout << "          STUDENT NOT FOUND           \n";
            cout << "=======================================\n";
            cout << "\nPlease enroll first from the main menu.\n";
        }

        do
        {
            cout << "\n=======================================\n";
            cout << "            CONTINUE?                 \n";
            cout << "=======================================\n";
            cout << "Press 'Y' to view another student or\n";
            cout << "Press 'N' to return to main menu: ";

            cin >> input;
            stringcheck(input);

            if (!isstringvalid || input.length() != 1)
            {
                cout << ">>> Please enter a single character (Y/N) <<<" << endl;
                repeat = true;
                continue;
            }

            choice = toupper(input[0]);
            if (choice != 'Y' && choice != 'N')
            {
                cout << ">>> Please enter Y or N only <<<" << endl;
                repeat = true;
                continue;
            }

            repeat = false;

        } while (repeat);

    } while (choice == 'Y');

    cout << "\n=======================================\n";
    cout << "    Thank you for using the system!    \n";
    cout << "=======================================\n";
}

void remove_members()
{
    int remove;
    string confirm;

    do
    {
        cout << "\n=======================================\n";
        cout << "         REMOVE STUDENT RECORD        \n";
        cout << "=======================================\n";
        cout << "\nEnter Registration Number to remove: ";
        cin >> remove;

        intCheck();
        if (isintvalid == false)
        {
            repeat = true;
            continue;
        }

        if (rollno[remove] == 0)
        {
            cout << ">>> Student with this registration number does not exist! <<<" << endl;
            repeat = true;
            continue;
        }

        // Confirmation before deletion
        do
        {
            cout << "\nAre you sure you want to remove this student? (Y/N): ";
            cin >> confirm;
            stringcheck(confirm);

            if (!isstringvalid || confirm.length() != 1)
            {
                cout << ">>> Please enter a single character (Y/N) <<<" << endl;
                repeat = true;
                continue;
            }

            choice = toupper(confirm[0]);
            if (choice != 'Y' && choice != 'N')
            {
                cout << ">>> Please enter Y or N only <<<" << endl;
                repeat = true;
                continue;
            }

            repeat = false;

        } while (repeat);

        if (choice == 'Y')
        {
            rollno[remove] = {};
            cout << "\n=======================================\n";
            cout << "          SYSTEM NOTIFICATION         \n";
            cout << "=======================================\n";
            cout << "Student successfully removed from the system!\n";
            cout << "---------------------------------------\n";
        }
        else
        {
            cout << "\n>>> Deletion cancelled <<<\n";
        }

        repeat = false;

    } while (repeat);
}

void view_all()
{
    cout << "\n=======================================\n";
    cout << "         ALL STUDENT RECORDS          \n";
    cout << "=======================================\n";

    if (totalStudents == 0)
    {
        cout << "\n---------------------------------------\n";
        cout << "          NO RECORDS FOUND            \n";
        cout << "---------------------------------------\n";
        cout << "No students found in the system\n";
        return;
    }

    for (int i = 0; i < 9999; i++)
    {
        if (rollno[i] != 0)
        {
            cout << "\n---------------------------------------\n";
            cout << "Personal Information:\n";
            cout << "---------------------------------------\n";
            cout << "Name            : " << studentname[i] << "\n"
                 << "Registration No.: " << regNO[i] << "\n\n"
                 << "---------------------------------------\n"
                 << "Academic Records:\n"
                 << "---------------------------------------\n"
                 << "Physics GPA    : " << phy_gpa[i] << "\n"
                 << "Chemistry GPA  : " << chem_gpa[i] << "\n"
                 << "Biology GPA    : " << bio_gpa[i] << "\n"
                 << "Mathematics GPA: " << math_gpa[i] << "\n"
                 << "English GPA    : " << eng_gpa[i] << "\n"
                 << "Semester GPA   : " << cgpa[rolenumber] << "\n\n"
                 << "---------------------------------------\n"
                 << "Contact Information:\n"
                 << "---------------------------------------\n"
                 << "Father Name    : " << father[i] << "\n"
                 << "Phone Number   : " << studentphone[i] << "\n"
                 << "Password       : " << studentpassword[i] << "\n"
                 << "---------------------------------------\n";
        }
    }
    cout << "\n=======================================\n";
    cout << "          END OF RECORDS              \n";
    cout << "=======================================\n";
}

void changedetails_2()
{
    string name, fatherchange, phoneStr;
    int regno, phonenumber, password;
    float newGPA;
    int choice;
    float CGPA;

    // Display current details (keep existing display code)
    cout << "\n=======================================\n";
    // ... (previous display code remains the same until choice input)

    do
    {
        cout << "\n=======================================\n";
        cout << "         MODIFY STUDENT DATA          \n";
        cout << "=======================================\n";
        cout << "1 : Name\n"
             << "2 : Registration Number\n"
             << "3 : Physics GPA\n"
             << "4 : Chemistry GPA\n"
             << "5 : Biology GPA\n"
             << "6 : Mathematics GPA\n"
             << "7 : English GPA\n"
             << "8 : Father Name\n"
             << "9 : Phone Number\n"
             << "10: Password\n"
             << "---------------------------------------\n"
             << "Enter your choice (1-10): ";
        cin >> choice;

        intCheck();
        if (isintvalid == false)
        {
            repeat = true;
            continue;
        }

        if (choice < 1 || choice > 10)
        {
            cout << ">>> Please enter a number between 1 and 10 <<<" << endl;
            repeat = true;
            continue;
        }
        repeat = false;
    } while (repeat);

    cout << "\n---------------------------------------\n";
    cout << "Enter New Information:\n";
    cout << "---------------------------------------\n";

    switch (choice)
    {
    case 1:
        do
        {
            cout << "Enter the new name: ";
            cin.ignore();
            getline(cin, name);
            stringcheck(name);
            if (!isstringvalid)
            {
                repeat = true;
                continue;
            }
            studentname[rolenumber] = name;
            repeat = false;
        } while (repeat);
        break;

    case 2:
        do
        {
            cout << "Enter the new registration number: ";
            cin >> regno;
            intCheck();
            if (isintvalid == false)
            {
                repeat = true;
                continue;
            }
            if (regno < 1000 || regno > 9999)
            {
                cout << ">>> Please enter a 4-digit registration number <<<" << endl;
                repeat = true;
                continue;
            }
            regNO[rolenumber] = regno;
            repeat = false;
        } while (repeat);
        break;

    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        do
        {
            cout << "Enter the new GPA (0.0 - 4.0): ";
            cin >> newGPA;
            intCheck();
            if (isintvalid == false)
            {
                repeat = true;
                continue;
            }
            if (newGPA < 0.0 || newGPA > 4.0)
            {
                cout << ">>> Please enter a GPA between 0.0 and 4.0 <<<" << endl;
                repeat = true;
                continue;
            }

            switch (choice)
            {
            case 3:
                phy_gpa[rolenumber] = newGPA;
                break;
            case 4:
                chem_gpa[rolenumber] = newGPA;
                break;
            case 5:
                bio_gpa[rolenumber] = newGPA;
                break;
            case 6:
                math_gpa[rolenumber] = newGPA;
                break;
            case 7:
                eng_gpa[rolenumber] = newGPA;
                break;
            }
            repeat = false;
        } while (repeat);
        break;

    case 8:
        do
        {
            cout << "Enter the new father name: ";
            cin.ignore();
            getline(cin, fatherchange);
            stringcheck(fatherchange);
            if (!isstringvalid)
            {
                repeat = true;
                continue;
            }
            father[rolenumber] = fatherchange;
            repeat = false;
        } while (repeat);
        break;

    case 9:
        do
        {
            cout << "Enter the new phone number: ";
            cin >> phoneStr;
            phonecheck(phoneStr);
            if (!isstringvalid)
            {
                repeat = true;
                continue;
            }
            if (phoneStr.length() != 11)
            {
                cout << ">>> Please enter a valid 11-digit phone number <<<" << endl;
                repeat = true;
                continue;
            }
            phonenumber = stoi(phoneStr);
            studentphone[rolenumber] = phonenumber;
            repeat = false;
        } while (repeat);
        break;

    case 10:
        do
        {
            cout << "Enter the new password (4 digits): ";
            cin >> password;
            intCheck();
            if (isintvalid == false)
            {
                repeat = true;
                continue;
            }
            if (password < 1000 || password > 9999)
            {
                cout << ">>> Please enter a 4-digit password <<<" << endl;
                repeat = true;
                continue;
            }
            studentpassword[rolenumber] = password;
            repeat = false;
        } while (repeat);
        break;
    }

    // Calculate new CGPA
    float newCGPA = calculateGPA(rolenumber);

    // Display updated details (keep existing display code)
    cout << "\n=======================================\n";
    cout << "        UPDATED STUDENT DETAILS       \n";

    cout << "=======================================\n";
    cout << "\n---------------------------------------\n";
    cout << "Personal Information:\n";
    cout << "---------------------------------------\n";
    cout << "Name            : " << studentname[rolenumber] << "\n"
         << "Registration No.: " << regNO[rolenumber] << "\n\n"
         << "---------------------------------------\n"
         << "Academic Records:\n"
         << "---------------------------------------\n"
         << "Physics GPA    : " << phy_gpa[rolenumber] << "\n"
         << "Chemistry GPA  : " << chem_gpa[rolenumber] << "\n"
         << "Biology GPA    : " << bio_gpa[rolenumber] << "\n"
         << "Mathematics GPA: " << math_gpa[rolenumber] << "\n"
         << "English GPA    : " << eng_gpa[rolenumber] << "\n"
         << "New CGPA       : " << newCGPA << "\n\n"
         << "---------------------------------------\n"
         << "Contact Information:\n"
         << "---------------------------------------\n"
         << "Father Name    : " << father[rolenumber] << "\n"
         << "Phone Number   : " << studentphone[rolenumber] << "\n"
         << "Password       : " << studentpassword[rolenumber] << "\n"
         << "---------------------------------------\n";
}

void changedetails()
{
    string input;
    do
    {
        do
        {
            cout << "\n=======================================\n";
            cout << "         MODIFY STUDENT RECORD         \n";
            cout << "=======================================\n";
            cout << "\nEnter Your Registration Number: ";
            cin >> rolenumber;

            intCheck();
            if (isintvalid == false)
            {
                cout << ">>> Please enter a valid registration number <<<" << endl;
                repeat = true;
                continue;
            }

            if (rolenumber < 1000 || rolenumber > 9999)
            {
                cout << ">>> Please enter a 4-digit registration number <<<" << endl;
                repeat = true;
                continue;
            }

            if (rollno[rolenumber] == 0)
            {
                cout << "\n=======================================\n";
                cout << "          SYSTEM NOTIFICATION         \n";
                cout << "=======================================\n";
                cout << "Student not found!\n";
                cout << "Please enroll first from the main menu.\n";
                cout << "---------------------------------------\n";
                repeat = true;
                continue;
            }

            repeat = false;

        } while (repeat);

        cin.ignore();

        if (rollno[rolenumber] == rolenumber)
        {
            changedetails_2();
        }
        else
        {
            cout << "\n=======================================\n";
            cout << "          SYSTEM NOTIFICATION         \n";
            cout << "=======================================\n";
            cout << "Student not found!\n";
            cout << "Please enroll first from the main menu.\n";
            cout << "---------------------------------------\n";
        }

        do
        {
            cout << "\n=======================================\n";
            cout << "            CONTINUE?                 \n";
            cout << "=======================================\n";
            cout << "Press 'Y' to modify another student or\n";
            cout << "Press 'N' to return to main menu: ";

            cin >> input;
            stringcheck(input);

            if (!isstringvalid || input.length() != 1)
            {
                cout << ">>> Please enter a single character (Y/N) <<<" << endl;
                repeat = true;
                continue;
            }

            choice = toupper(input[0]);
            if (choice != 'Y' && choice != 'N')
            {
                cout << ">>> Please enter Y or N only <<<" << endl;
                repeat = true;
                continue;
            }

            repeat = false;

        } while (repeat);

    } while (choice == 'Y');

    cout << "\n=======================================\n";
    cout << "    Thank you for using the system!    \n";
    cout << "=======================================\n";
}

void admin_main()
{
    while (true)
    {
        int select;
        cout << "\n=======================================\n";
        cout << "      STUDENT MANAGEMENT SYSTEM       \n";
        cout << "=======================================\n";
        cout << "\n---------------------------------------\n";
        cout << "               MAIN MENU              \n";
        cout << "---------------------------------------\n";
        cout << "1. Add Student\n";
        cout << "2. View Student\n";
        cout << "3. View All Students\n";
        cout << "4. Remove Student\n";
        cout << "5. Change Details\n";
        cout << "6. Schedule\n";
        cout << "7. Exit\n";
        cout << "---------------------------------------\n";
        cout << "Enter your choice (1-7): ";
        cin >> select;
        intCheck();

        switch (select)
        {
        case 1:
            cout << "\n=======================================\n";
            cout << "         ADD STUDENT SECTION          \n";
            cout << "=======================================\n";
            add_members();
            break;

        case 2:
            cout << "\n=======================================\n";
            cout << "         VIEW STUDENT SECTION         \n";
            cout << "=======================================\n";
            view_student();
            break;

        case 3:
            cout << "\n=======================================\n";
            cout << "       VIEW ALL STUDENTS SECTION      \n";
            cout << "=======================================\n";
            view_all();
            break;

        case 4:
            cout << "\n=======================================\n";
            cout << "        REMOVE STUDENT SECTION        \n";
            cout << "=======================================\n";
            remove_members();
            break;

        case 5:
            cout << "\n=======================================\n";
            cout << "       MODIFY STUDENT SECTION         \n";
            cout << "=======================================\n";
            changedetails();
            break;

        case 6:
            cout << "\n=======================================\n";
            cout << "          SCHEDULE SECTION            \n";
            cout << "=======================================\n";
            main_scedule();
            admin_main();
            break;

        case 7:
            cout << "\n=======================================\n";
            cout << "              GOODBYE!                \n";
            cout << "=======================================\n";
            cout << "Thank you for using the Student\n";
            cout << "Management System!\n";
            cout << "---------------------------------------\n";
            break;

        default:
            cout << "\n=======================================\n";
            cout << "          ERROR MESSAGE               \n";
            cout << "=======================================\n";
            cout << "Invalid input!\n";
            cout << "Please enter a number between 1 and 7.\n";
            cout << "---------------------------------------\n";
            break;
        }
    }
}

int main()
{
    admin_main();
}
