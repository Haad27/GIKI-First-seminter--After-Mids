#include <iostream>
#include <string>
#include <vector>

using namespace std;
string subs[] = {"Math", "Physics", "Chemistry", "Sports", "Computer", "Biology"};
string timetable[5][6] = {
    {"Math", "Physics", "Chemistry", "", "Computer", "Biology"},
    {"Physics", "Math", "English", "Math", "", "Sports"},
    {"Chemistry", "", "Math", "Physics", "Sports", "English"},
    {"English", "English", "", "Math", "English", "Chemistry"},
    {"Biology", "Sports", "", "", "Math", "Physics"}};
string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

// question 1&2
void findperiod(string subject)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (subject == timetable[i][j])
            {
                if (i == 0)
                {
                    cout << "monday " << "period " << j + 1 << endl;
                }
                if (i == 1)
                {
                    cout << "tuesday "
                            "period "
                         << j + 1 << endl;
                }
                if (i == 2)
                {
                    cout << "wednesday "
                            "period "
                         << j + 1 << endl;
                }
                if (i == 3)
                {
                    cout << "thirdsay "
                            "period "
                         << j + 1 << endl;
                }
                if (i == 4)
                {
                    cout << "firday "
                            "period "
                         << j + 1 << endl;
                }
            }
        }
    }
}
void findperiodOPMIZ(string subject)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (subject == timetable[i][j])
            {
                cout << "on " << days[i] << "the periodn is " << j + 1 << endl;
            }
        }
    }
}
// qestion 3&4
void classonveryday(string subject)
{
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int periods = 0;

            if (subject == timetable[i][j] && !timetable[i][j].empty())
            {
                periods++;
                cout << days[i] << periods << endl;
            }
        }
    }
}
void total_classes()
{
    int periods = 0;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (!timetable[i][j].empty())
            {
                periods++;
            }
        }
        cout << days[i];

        cout << periods << " " << endl;
        periods = 0;
    }
}
void free_spaces()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (timetable[i][j].empty())
            {
                if (timetable[i][j + 1].empty())
                {
                    cout << "on day => " << days[i] << "period " << j << " and " << j + 1;
                }
            }
        }
    }
}

// my faviorite 5&6
void checkduplicates()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {

                if (timetable[i][j] == timetable[i][k] && !timetable[i][j].empty())
                {
                    cout << "on day => " << days[i] << "period " << j << " and " << k;
                }
            }
        }
    }
}
void twosameday()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = j + 1; k < 3; k++)
            {

                if (timetable[i][j] == timetable[i][k] && !timetable[i][j].empty())
                {

                    cout << "on day => " << days[i] << "period " << j << " and " << k;
                    cout << "the subject is =>" << timetable[i][j];
                }
            }
        }
    }
}
// 7 & 8
void swap_periods()
{
    int row;
    int p1, p2;
    cout << "enter the row";
    cin >> row;
    cout << "enter the priods number you want to change ";
    cin >> p1 >> p2;

    string temp = timetable[row][p1];
    timetable[row][p1] = timetable[row][p2];
    timetable[row][p2] = temp;

    for (int i = 0; i < 5; i++)
    {
        cout << days[i];

        for (int j = 0; j < 6; j++)
        {

            cout << timetable[i][j] << " ";
        }
        cout << endl
             << " ";
    }
}
void swap_days()
{
    int p1, p2;
    cout << "enter the row";
    cin >> p1 >> p2;
    for (int i = 0; i < 6; i++)
    {
        string temp = timetable[p1][i];
    timetable[p1][i] = timetable[p2][i];
    timetable[p2][i] = temp;
    }
    

    for (int i = 0; i < 5; i++)
    {
        cout << days[i] << " ";

        for (int j = 0; j < 6; j++)
        {

            cout << timetable[i][j] << " ";
        }
        cout << endl
             << " ";
    }
}
int main()
{
    string subject;

    // cout << "enter the subject ";
    // cin >> subject;
    // findperiod(subject);
    // //    findperiodOPMIZ(subject);
    // cout << "\nthe class"<<subject<< "in these days\n";
    // classonveryday(subject);
    // cout <<"total classes";
    // total_classes();
    // free_spaces();
    // checkduplicates();
    // twosameday();
    swap_days();
    return 0;
}