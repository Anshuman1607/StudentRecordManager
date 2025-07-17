#include "Student.h"
#include <iostream>
using namespace std;

void Student::input() {
    cout << "Enter Roll No: "; cin >> rollNo;
    cin.ignore(); // Clears newline left in input buffer
    cout << "Enter Name: "; getline(cin, name);
    cout << "Enter Marks: "; cin >> marks;
}

void Student::display() const {
    cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
}

int Student::getRollNo() const {
    return rollNo;
}
