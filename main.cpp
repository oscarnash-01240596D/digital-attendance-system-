#include <iostream>
#include <vector>
using namespace std;

struct AttendanceRecord {
    string indexNumber;
    string status;
};

vector<AttendanceRecord> records;

void markAttendance() {
    string index, status;

    cout << "Enter Index Number: ";
    cin >> index;

    cout << "Enter Status (Present/Absent/Late): ";
    cin >> status;

    records.push_back({index, status});
    cout << "Recorded.\n";
}

void showReport() {
    int present = 0, absent = 0, late = 0;

    for (int i = 0; i < records.size(); i++) {
        if (records[i].status == "Present") present++;
        else if (records[i].status == "Absent") absent++;
        else if (records[i].status == "Late") late++;
    }

    cout << "\n--- SUMMARY ---\n";
    cout << "Present: " << present << endl;
    cout << "Absent : " << absent << endl;
    cout << "Late   : " << late << endl;
}

int main() {
    int choice;

    do {
        cout << "\n==== ATTENDANCE MENU ====\n";
        cout << "1. Mark Attendance\n";
        cout << "2. View Report\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: markAttendance(); break;
            case 2: showReport(); break;
        }

    } while (choice != 0);

    return 0;
}
