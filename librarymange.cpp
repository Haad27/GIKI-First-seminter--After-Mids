#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// Function declarations
void addBook();
void viewBooks();
void searchBook();
void deleteBook();
void borrowBook();
void returnBook();

int main() {
    int choice;
    
    while(true) {
        system("cls"); // Clear screen
        cout << "\n=== Library Management System ===\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Borrow Book\n";
        cout << "6. Return Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: borrowBook(); break;
            case 6: returnBook(); break;
            case 7: 
                cout << "\nThank you for using the Library Management System!\n";
                return 0;
            default: 
                cout << "\nInvalid choice! Press Enter to continue...";
                cin.ignore();
                cin.get();
        }
    }
    return 0;
}

void addBook() {
    ofstream file("books.txt", ios::app);
    string title, author, id;
    
    cin.ignore();
    cout << "\nEnter Book ID: ";
    getline(cin, id);
    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);
    
    file << id << "," << title << "," << author << ",Available" << endl;
    file.close();
    
    cout << "\nBook added successfully! Press Enter to continue...";
    cin.get();
}

void viewBooks() {
    ifstream file("books.txt");
    string line;
    
    system("cls");
    cout << "\n=== Library Books ===\n\n";
    cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
    cout << "------------------------------------------------\n";
    
    while(getline(file, line)) {
        size_t pos = 0;
        string token;
        while ((pos = line.find(",")) != string::npos) {
            token = line.substr(0, pos);
            cout << token << "\t";
            line.erase(0, pos + 1);
        }
        cout << line << endl; // Print status
    }
    
    file.close();
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}

void searchBook() {
    ifstream file("books.txt");
    string line, searchId;
    bool found = false;
    
    cin.ignore();
    cout << "\nEnter Book ID to search: ";
    getline(cin, searchId);
    
    while(getline(file, line)) {
        if(line.find(searchId) == 0) {
            cout << "\nBook Found!\n";
            cout << "Details: " << line << endl;
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "\nBook not found!";
    }
    
    file.close();
    cout << "\nPress Enter to continue...";
    cin.get();
}

void deleteBook() {
    ifstream inFile("books.txt");
    ofstream tempFile("temp.txt");
    string line, searchId;
    bool found = false;
    
    cin.ignore();
    cout << "\nEnter Book ID to delete: ";
    getline(cin, searchId);
    
    while(getline(inFile, line)) {
        if(line.find(searchId) != 0) {
            tempFile << line << endl;
        } else {
            found = true;
        }
    }
    
    inFile.close();
    tempFile.close();
    
    remove("books.txt");
    rename("temp.txt", "books.txt");
    
    if(found) {
        cout << "\nBook deleted successfully!";
    } else {
        cout << "\nBook not found!";
    }
    
    cout << "\nPress Enter to continue...";
    cin.get();
}

void borrowBook() {
    ifstream inFile("books.txt");
    ofstream tempFile("temp.txt");
    string line, searchId, borrower;
    bool found = false;
    
    cin.ignore();
    cout << "\nEnter Book ID to borrow: ";
    getline(cin, searchId);
    
    while(getline(inFile, line)) {
        if(line.find(searchId) == 0) {
            if(line.find("Available") != string::npos) {
                cout << "Enter borrower name: ";
                getline(cin, borrower);
                // Replace "Available" with "Borrowed by [name]"
                size_t pos = line.find("Available");
                line.replace(pos, 9, "Borrowed by " + borrower);
                found = true;
            } else {
                cout << "\nBook is already borrowed!";
                tempFile << line << endl;
                found = true;
                continue;
            }
        }
        tempFile << line << endl;
    }
    
    inFile.close();
    tempFile.close();
    
    remove("books.txt");
    rename("temp.txt", "books.txt");
    
    if(!found) {
        cout << "\nBook not found!";
    } else if(found && line.find("Borrowed") != string::npos) {
        cout << "\nBook borrowed successfully!";
    }
    
    cout << "\nPress Enter to continue...";
    cin.get();
}

void returnBook() {
    ifstream inFile("books.txt");
    ofstream tempFile("temp.txt");
    string line, searchId;
    bool found = false;
    
    cin.ignore();
    cout << "\nEnter Book ID to return: ";
    getline(cin, searchId);
    
    while(getline(inFile, line)) {
        if(line.find(searchId) == 0) {
            if(line.find("Borrowed") != string::npos) {
                // Replace "Borrowed by [name]" with "Available"
                size_t pos = line.find("Borrowed");
                line = line.substr(0, pos) + "Available";
                found = true;
            } else {
                cout << "\nBook is already in library!";
                tempFile << line << endl;
                found = true;
                continue;
            }
        }
        tempFile << line << endl;
    }
    
    inFile.close();
    tempFile.close();
    
    remove("books.txt");
    rename("temp.txt", "books.txt");
    
    if(!found) {
        cout << "\nBook not found!";
    } else if(found && line.find("Available") != string::npos) {
        cout << "\nBook returned successfully!";
    }
    
    cout << "\nPress Enter to continue...";
    cin.get();
}
