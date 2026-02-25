# DIGITAL ATTENDANCE SYSTEM (C++)

 Student Information

Name: Oscar Nash Tetteh
Student ID: 01240596D 
Programme: HND Electrical Engineering (Level 200)
Course Code: EEE227
Project Type: Mid-Semester Capstone Project

---

 Project Title

**Digital Attendance System for Hour-Based Lectures**

---

 Project Description

This project is a **console-based Digital Attendance System** developed using **C++**.

The system replaces the traditional paper-based attendance system used in lecture halls. It allows lecturers to:

* Register students
* Create lecture sessions
* Mark attendance (Present, Absent, Late)
* Generate attendance summaries
* Save and load records using files

The system works **offline on Windows** and stores data using **text files**.

---

 Objectives of the Project

* Apply C++ programming to solve a real-world problem
* Use **classes, arrays, and functions**
* Build a **menu-driven console application**
* Implement **file handling using fstream**
* Practice **version control using GitHub**

---

 Development Tools

* Programming Language: **C++**
* IDE Used: **Dev C++ / VS Code**
* Version Control: **GitHub**
* Platform: **Windows (Offline First)**

---

Project Structure

```
digital-attendance-system/

│── week1/
│   └── main.cpp

│── week2/
│   └── main.cpp

│── week3/
│   └── main.cpp

│── week4/
│   └── main.cpp

│── students.txt
│── README.md
```

---

 System Features

 Week 1 – Student Management
Add new students
 View all registered students

---

 Week 2 – Session Management

 Create lecture sessions
Store course code, date, start time, and duration

---

 Week 3 – Attendance System

 Mark attendance as:

   Present
   Absent
   Late
 Generate attendance summary report

---

 Week 4 – File Storage

 Save students to file
 Load students from file
Data remains after program closes

---
 File Storage Format

 Students File

File Name: `students.txt`

Format:

```
indexNumber,name
```

Example:

```
ATU12345,John Mensah
ATU67890,Akosua Boateng
```

---

 How to Run the Program

 Using Dev C++

1. Open Dev C++
2. Open any `main.cpp` file from week1, week2, week3 or week4
3. Click Compile & Run
4. Follow the menu instructions on screen

---

 Sample Menu (Final System)

```
==== FINAL SYSTEM ====
1. Add Student
2. View Students
0. Exit
```

---

 Testing Performed

The system was tested for:

 Adding multiple students
Viewing student lists
 Marking attendance correctly
 Counting Present, Absent and Late
 Saving and loading student data from file

---

 Challenges Faced

 Handling input using `cin` and `getline`
 Managing file reading and writing
 Designing a simple and clear menu system

---

 Conclusion

The Digital Attendance System successfully replaces manual attendance taking with a **simple, reliable, and reusable C++ solution**.

It demonstrates the use of **core programming concepts** and solves a real academic problem.

---

Acknowledgement

I would like to thank my lecturer for guiding us through the concepts of C++ programming and project development.

---

 GitHub Repository

(https://github.com/oscarnash-01240596D/digital-attendance-system-)
