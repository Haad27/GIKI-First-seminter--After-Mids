#include <iostream>
#include <string>
#include <vector>

using namespace std;
             int emptyy = 0;

int class_row(string arr[][9], int row)
{
    bool running = false;
    int count = 0;
    if (row < 0 || row >= 7)
    {
        cout << "Invalid row number!\n";
        return -1;
    }
    for (int j = 1; j < 9; j++)
    {
        // if (arr[row][j] != ' ') works for an integer if that i sempty for  astring use
        if ( arr[row][j] != " " && !arr[row][j].empty())
        {
            count++;
            cout << "Class " << count << ": " << arr[row][j] << endl;
            running = false;
        }
        else
        {
        cout << "emoty  at " << arr[row][j];
        }
    }
    if (running)
    {
    }

    return count;
}

int empty_spaces(string arr[][9], int row){

    if (row < 0 && row > 7)
    {
        cout << "invalid ";
    }

    for (int i = 1; i < 9; i++)
    {
       if (arr[row][i].empty() || arr[row][i] == " " )
       {
         cout <<endl<< arr[row][0] << "at " << arr[0][i] << "the day is empty\n"  << arr[row][i] <<endl;
         emptyy++;
       }
       
    }
    
}
int main()
{
    // 7 are days in week
    // 9 are teh classes on every day
    string schedule[7][9] = {
        // Time slots
        {"Day/Time    ", "8:00-8:50  ", "9:00-9:50  ", "10:00-10:50", "11:00-11:50", 
         "12:00-12:50", "1:00-1:50  ", "2:00-2:50  ", "3:00-3:50  "},
        
        // Monday
        {"Monday      ", "Math       ", "Physics    ", "Chemistry  ", "Break      ", 
         "Programming", "Lab        ", " ", " "},
        
        // Tuesday
        {"Tuesday     ", "Physics    ", "Chemistry  ", "Math       ", "English    ", 
         "Break      ", "Lab        ", " ", " "},
        
        // Wednesday
        {"Wednesday   ", "Chemistry  ", "Math       ", "Programming", "Physics    ", 
         "Break      ", " ", " ", " "},
        
        // Thursday
        {"Thursday    ", "Programming", "English    ", "Physics    ", "Chemistry  ", 
         "Math       ", "Break      ", " ", " "},
        
        // Friday
        {"Friday      ", "English    ", "Math       ", "Chemistry  ", "Physics    ", 
         "Programming", "Break      ", " ", " "},
        
        // Saturday
        {"Saturday    ", "Lab        ", "Lab        ", " ", " ", 
         " ", " ", " ", " "}
    };

    
    int row;
    cout << "enter the row you want ot see if have any nclass ot not \n";
    cin >> row;
    cout << class_row(schedule, row);
    cout << empty_spaces(schedule, row);
    cout << "total empty spaces are " << emptyy;
    return 0;
}