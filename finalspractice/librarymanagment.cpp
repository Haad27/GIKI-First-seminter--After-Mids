#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int number;
    string book;
    string books;
    cout << "enter the fueil name you want to sdave all boioks anmes as \n";
    cin >> books;
    ofstream file(books);
    cout << "enter the total books you wanna add\n";
    cin >> number;
    cout << "engter the books you want to add in the file";
    for (int i = 0; i < number; i++)
    {
        cin >> book;
        file << book << endl;
    }
    file.close();

    cout << "\n\n\nview the file \n";
    ifstream myfile(books);
    string line;

    while (myfile >> line)
    {
        cout << line << endl;
    }

    myfile.close();

    string name, bookname;
    int rollno;
    ofstream file1(books, ios::app); // Open in append mode
    cout << "enter the book name you wanna purchase\n";
    cin >> bookname;
    cout << "enter the student name and roll number\n";
    cin >> name >> rollno;
    ifstream file2(books);
    string line1;
    bool bookFound = false; // Flag to check if book exists

    while (file2 >> line1)
    {
        if (line1.find(bookname) != string::npos)
        {
            // Format: BookName - StudentName RollNumber
            file1 << bookname << " - Issued to: " << name << " " << rollno << endl;
            bookFound = true;
            break;
        }
    }

    if (!bookFound)
    {
        cout << "Book not found in the library!\n";
    }

    file2.close();
    file1.close();

    cout << "\n\n\nview the file \n";
    ifstream myfile5(books);
    string line4;

    while (myfile5 >> line4)
    {
        cout << line4 << endl;
    }

    myfile5.close();

    return 0;
}
