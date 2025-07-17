# Student Record Manager (C++)

A simple console-based application in C++ to manage student records using object-oriented programming and file handling. The project supports adding, searching, and displaying student data in a binary file.

---

##  Features
- Add new student records
- Search for students by roll number
- Display all student records
- Persistent storage using binary files
- Menu-driven interface in terminal

---

## File Structure

StudentRecordManager/
├── main.cpp       // Main menu and file I/O  
├── Student.cpp    // Student class definition  
├── Student.h      // Class declaration  
└── README.md      // Project documentation

---

## Technologies Used

- C++
- OOP (Classes, Encapsulation)
- File Handling with fstream
- Console-based UI

---

##  How to Compile and Run

### Compile
```bash
g++ main.cpp Student.cpp -o StudentManager
