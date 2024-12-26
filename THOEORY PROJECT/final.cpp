#include <iostream>
// #include "verification.cpp"
#include "scedule.cpp"
// #include "asad.cpp"
#include <string>

using namespace std;

// declerations
char choice;
bool repeat;
bool isintvalid;
bool isstringvalid;
long long int rolenumber;
int i = 0, totalStudents = 0;

string studentname[10000];
int rollno[10000] = {};
float semestergpa[10000];
string regNO[10000];

string father[10000];
string studentphone[10000];
int studentpassword[10000];

// courses
float phy_gpa[10000];
float bio_gpa[10000];
float chem_gpa[10000];
float math_gpa[10000];
float eng_gpa[10000];
float cgpa[10000];

int calculateGPA(int x)
{

    float total_gpa = phy_gpa[rolenumber] * 3 +
                      chem_gpa[rolenumber] * 3 +
                      bio_gpa[rolenumber] * 3 +
                      math_gpa[rolenumber] * 3 +
                      eng_gpa[rolenumber] * 3;

    return cgpa[x] = total_gpa / 15; // Total credit hours (5 subjects × 3 credits)
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
        isstringvalid = false;
        temp = false;
    }

    // Check each character
    for (char x : value)
    {
        if (!isdigit(x))
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
        cout << "\nEnter Roll Number (1-10000): ";
        cin >> rolenumber;
        intCheck(); // to check if integer or not
        if (isintvalid == false)
        {
            repeat = true;
            continue;
        }
        if (rolenumber >= 1 && rolenumber < 10000)
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
                        intCheck();
                        if (isintvalid == false)
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
                        stringcheck(studentphone[rolenumber]);
                        if (isstringvalid == false)
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
                        repeat = false;
                    } while (repeat != false);

                    // Add the rest of your code here (Mathematics and English GPA)
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
                        repeat = false;
                    } while (repeat != false);

                    repeat = false;
                } while (repeat != false);

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
    int rolenumber;
    char choice;

    do
    {
        do
        {
            cout << "\n=======================================\n";
            cout << "         VIEW STUDENT DETAILS         \n";
            cout << "=======================================\n";
            cout << "\nEnter 4-digit Roll Number to view: ";
            cin >> rolenumber;

            // Using your intCheck function for validation
            intCheck();
            isintvalidbool();

            // Additional check for 4-digit number
            if (isintvalid && (rolenumber < 1000 || rolenumber > 9999))
            {
                cout << ">>> Please enter a 4-digit number <<<" << endl;
                repeat = true;
                continue;
            }

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
                 // ... rest of the display code remains same ...
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

            string choiceStr;
            cin >> choiceStr;

            // Using stringcheck for validation
            stringcheck(choiceStr);

            if (isstringvalid && choiceStr.length() == 1)
            {
                choice = choiceStr[0];
                if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n')
                {
                    repeat = false;
                }
                else
                {
                    cout << ">>> Please enter Y or N only <<<" << endl;
                    repeat = true;
                }
            }
            else
            {
                repeat = true;
            }

        } while (repeat);

    } while (choice == 'y' || choice == 'Y');

    cout << "\n=======================================\n";
    cout << "    Thank you for using the system!    \n";
    cout << "=======================================\n";
}

void remove_members()
{
    int remove;

    do
    {
        cout << "\n=======================================\n";
        cout << "         REMOVE STUDENT RECORD        \n";
        cout << "=======================================\n";
        cout << "\nEnter Registration Number to remove: ";
        cin >> remove;

        // Using your intCheck function for validation
        intCheck();
        isintvalidbool();

        if (isintvalid)
        {
            // Check if student exists
            if (rollno[remove] == 0)
            {
                cout << "\n>>> Student with this registration number does not exist! <<<\n";
                repeat = true;
                continue;
            }
            repeat = false;
        }

    } while (repeat);

    rollno[remove] = {};
    cout << "\n=======================================\n";
    cout << "          SYSTEM NOTIFICATION         \n";
    cout << "=======================================\n";
    cout << "Student successfully removed from the system!\n";
    cout << "---------------------------------------\n";
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
    string name, fatherchange;
    int regno, phonenumber, password;
    float newGPA;
    int choice;
    float CGPA;

    cout << "\n=======================================\n";
    cout << "        CURRENT STUDENT DETAILS       \n";
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
         << "CGPA          : " << cgpa[rolenumber] << "\n\n"
         << "---------------------------------------\n"
         << "Contact Information:\n"
         << "---------------------------------------\n"
         << "Father Name    : " << father[rolenumber] << "\n"
         << "Phone Number   : " << studentphone[rolenumber] << "\n"
         << "Password       : " << studentpassword[rolenumber] << "\n"
         << "---------------------------------------\n";

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

    cout << "\n---------------------------------------\n";
    cout << "Enter New Information:\n";
    cout << "---------------------------------------\n";

    switch (choice)
    {
    case 1:
        cout << "Enter the new name: ";
        cin.ignore();
        getline(cin, name);
        studentname[rolenumber] = name;
        break;

    case 2:
        cout << "Enter the new registration number: ";
        cin >> regno;
        regNO[rolenumber] = regno;
        break;

    case 3:
        cout << "Enter the new Physics GPA: ";
        cin >> newGPA;
        phy_gpa[rolenumber] = newGPA;
        break;

    case 4:
        cout << "Enter the new Chemistry GPA: ";
        cin >> newGPA;
        chem_gpa[rolenumber] = newGPA;
        break;

    case 5:
        cout << "Enter the new Biology GPA: ";
        cin >> newGPA;
        bio_gpa[rolenumber] = newGPA;
        break;

    case 6:
        cout << "Enter the new Mathematics GPA: ";
        cin >> newGPA;
        math_gpa[rolenumber] = newGPA;
        break;

    case 7:
        cout << "Enter the new English GPA: ";
        cin >> newGPA;
        eng_gpa[rolenumber] = newGPA;
        break;

    case 8:
        cout << "Enter the new father name: ";
        cin.ignore();
        getline(cin, fatherchange);
        father[rolenumber] = fatherchange;
        break;

    case 9:
        cout << "Enter the new phone number: ";
        cin >> phonenumber;
        studentphone[rolenumber] = phonenumber;
        break;

    case 10:
        cout << "Enter the new password: ";
        cin >> password;
        studentpassword[rolenumber] = password;
        break;

    default:
        cout << "\n=======================================\n";
        cout << "            ERROR MESSAGE             \n";
        cout << "=======================================\n";
        cout << "Invalid choice! Please enter a number between 1 and 10.\n";
        cout << "---------------------------------------\n";
        break;
    }

    // Calculate new CGPA
    float newCGPA = calculateGPA(rolenumber);

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
    do
    {
        cout << "\n=======================================\n";
        cout << "         MODIFY STUDENT RECORD         \n";
        cout << "=======================================\n";
        cout << "\nEnter Your Registration Number: ";
        cin >> rolenumber;
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

        cout << "\n=======================================\n";
        cout << "            CONTINUE?                 \n";
        cout << "=======================================\n";
        cout << "Press 'Y' to modify another student or\n";
        cout << "Press 'N' to return to main menu: ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

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
        cout << "2. View yourself\n";
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
            view_student();
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
