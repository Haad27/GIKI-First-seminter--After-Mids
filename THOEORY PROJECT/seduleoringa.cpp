#include <iostream>
#include <string>
#include <vector>

using namespace std;
int numverification(int &value)
{
    while (!(cin >> value))
    {
        cout << "\n! Please enter a number\n";
        cin.clear();
        cin.ignore(199, '\n');
    }
    return value;
}
// Global schedule array
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

// Verifies input is a string, not a number
string string_verification(string &value)
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

// Adds padding spaces to maintain 13 character width
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

void add_time_table()
{
    // Display current timetable with borders
    view_table();

    // Input new values
    cout << "\n* Enter new values:\n";
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            string value;
            cout << "+--------------------------------+\n"
                 << "| Time: " << schedule[0][j] << "\n"
                 << "| Day:  " << schedule[i][0] << "\n"
                 << "+--------------------------------+\n"
                 << "Enter period: ";
            string_verification(value);
            schedule[i][j] = value;
        }
    }

    // Display updated timetable
    cout << "\n* Updated Timetable:\n";
    view_table();
}

void update_table()
{
    int row, col;

    do
    {
        cout << "Enter row (1-5, where 1=Monday, 5=Friday): ";
        numverification(row);
        if (row < 1 || row > 5)
        {
            cout << "Invalid row. Please enter 1-5\n";
        }
    } while (row < 1 || row > 5);

    do
    {
        cout << "Enter column (1-8, representing time slots): ";
        numverification(col);
        if (col < 1 || col > 8)
        {
            cout << "Invalid column. Please enter 1-8\n";
        }
    } while (col < 1 || col > 8);

    cout << "Current value at " << schedule[row][0]
         << " at " << schedule[0][col]
         << " is: " << schedule[row][col] << "\n";

    string new_value;
    cout << "Enter new value: ";
    string_verification(new_value);
    schedule[row][col] = space(new_value);

    cout << "\n* Updated successfully!\n";
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
