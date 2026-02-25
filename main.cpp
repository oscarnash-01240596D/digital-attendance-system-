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
        cout << indexNumber << " - " << name << endl;
    }
};

class AttendanceSession {
public:
    string courseCode;
    string date;
    string startTime;
    int duration;

    AttendanceSession(string c, string d, string s, int dur) {
        courseCode = c;
        date = d;
        startTime = s;
        duration = dur;
    }

    void display() {
        cout << courseCode << " | " << date << " | " << startTime
             << " | " << duration << " mins\n";
    }
};

vector<Student> students;
vector<AttendanceSession> sessions;

void addStudent() {
    string index, name;
    cout << "Enter Index: ";
    cin >> index;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);

    students.push_back(Student(index, name));
}

void viewStudents() {
    for (int i = 0; i < students.size(); i++)
        students[i].display();
}

void createSession() {
    string code, date, time;
    int duration;

    cout << "Course Code: ";
    cin >> code;
    cout << "Date: ";
    cin >> date;
    cout << "Start Time: ";
    cin >> time;
    cout << "Duration: ";
    cin >> duration;

    sessions.push_back(AttendanceSession(code, date, time, duration));
    cout << "Session created.\n";
}

void viewSessions() {
    for (int i = 0; i < sessions.size(); i++)
        sessions[i].display();
}

int main() {
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Create Session\n";
        cout << "4. View Sessions\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: createSession(); break;
            case 4: viewSessions(); break;
        }

    } while (choice != 0);

    return 0;
}
