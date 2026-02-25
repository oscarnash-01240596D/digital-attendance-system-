#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string indexNumber;
    string name;

    Student(string idx, string nm) {
        indexNumber = idx;
        name = nm;
    }

    void display() {
        cout << "Index: " << indexNumber << " | Name: " << name << endl;
    }
};

vector<Student> students;

void addStudent() {
    string index, name;

    cout << "Enter Index Number: ";
    cin >> index;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    students.push_back(Student(index, name));
    cout << "Student added successfully!\n";
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students registered.\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }
}

int main() {
    int choice;

    do {
        cout << "\n==== DIGITAL ATTENDANCE SYSTEM ====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
        }

    } while (choice != 0);

    return 0;
}
