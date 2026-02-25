#include <iostream>
#include <vector>
#include <fstream>
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
        cout << indexNumber << " - " << name << endl;
    }
};

vector<Student> students;

void loadStudents() {
    ifstream file("students.txt");
    string index, name;

    while (getline(file, index, ',') && getline(file, name)) {
        students.push_back(Student(index, name));
    }

    file.close();
}

void saveStudents() {
    ofstream file("students.txt");

    for (int i = 0; i < students.size(); i++) {
        file << students[i].indexNumber << "," << students[i].name << endl;
    }

    file.close();
}

void addStudent() {
    string index, name;
    cout << "Index: ";
    cin >> index;
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);

    students.push_back(Student(index, name));
}

void viewStudents() {
    for (int i = 0; i < students.size(); i++)
        students[i].display();
}

int main() {
    loadStudents();

    int choice;
    do {
        cout << "\n==== FINAL SYSTEM ====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
        }

    } while (choice != 0);

    saveStudents();
    return 0;
}
