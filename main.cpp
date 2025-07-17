#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

void addRecord() {
    Student s;
    ofstream outFile("students.dat", ios::binary | ios::app);
    s.input();
    outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    outFile.close();
}

void displayAll() {
    Student s;
    ifstream inFile("students.dat", ios::binary);
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        s.display();
    }
    inFile.close();
}

void searchRecord(int roll) {
    Student s;
    ifstream inFile("students.dat", ios::binary);
    bool found = false;
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        if (s.getRollNo() == roll) {
            cout << "Record Found:\n";
            s.display();
            found = true;
            break;
        }
    }
    inFile.close();
    if (!found) cout << "Record not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Record Manager ---\n";
        cout << "1. Add Record\n2. Display All\n3. Search\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addRecord(); break;
            case 2: displayAll(); break;
            case 3: {
                int roll;
                cout << "Enter Roll No: ";
                cin >> roll;
                searchRecord(roll);
                break;
            }
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
