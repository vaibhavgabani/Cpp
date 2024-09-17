/*
 * P05.cpp
 *
 *  Created on: 23-Aug-2024
 *      Author: root
 */

#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students

class Student {
    int rollno;
    string name;
    string grade;
    float marks[3], total = 0, per = 0;
public:
    void insert() {
        cout << "Enter RollNo : ";
        cin >> rollno;
        cout << "Enter Name : ";
        cin >> name;
        total = 0;
        for (int i = 0; i < 3; i++) {
            while (true) {
                cout << "Enter Marks of Subject [" << i + 1 << "]: ";
                cin >> marks[i];
                if (marks[i] >= 0 && marks[i] <= 100) break;
                cout << "Enter Valid Marks (0-100)!!\n";
            }
            total += marks[i];
        }
        per = total / 3;
        if (per >= 90) {
            grade = "A";
        } else if (per >= 80) {
            grade = "B";
        } else if (per >= 70) {
            grade = "C";
        } else if (per >= 60) {
            grade = "D";
        } else if (per >= 50) {
            grade = "E";
        } else {
            grade = "Fail";
        }
    }

    void display() {
        cout << endl << "\t" << rollno << "\t" << name<< "\t\t" << marks[0]<< "\t" << marks[1]<< "\t" << marks[2];
    }

    void get_per() {
        cout << endl << "\t" << rollno<< "\t" << name<< "\t\t" << total<< "\t" << per<< "\t\t" << grade;
    }

    float return_per() {
        return per;
    }

    string return_name() {
        return name;
    }
};

void print_table_header() {
//    cout << "----------------------------------------------------------\n";
    cout << endl << "\tRollNo\tName\t\tMarks 1\tMarks 2\tMarks 3\t\n";
//    cout << "----------------------------------------------------------\n";
}

void print_table_header_with_performance() {
//    cout << "-----------------------------------------------------------\n";
    cout << endl << "\tRollNo\tName\t\tTotal\tPercentage\tGrade\t\n";
//    cout << "-----------------------------------------------------------\n";
}

int main() {
    Student students[MAX_STUDENTS];
    int size = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert Student Record\n";
        cout << "2. Display All Students\n";
        cout << "3. Display Total Marks, Percentage & Grade\n";
        cout << "4. Display Topper (1st Rank)\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (size >= MAX_STUDENTS) {
                    cout << "Student limit reached." << endl;
                    break;
                }
                students[size++].insert();
                break;
            }
            case 2:
                if (size == 0) {
                    cout << "No student records available. Please insert records first." << endl;
                    break;
                }
                print_table_header();
                for (int i = 0; i < size; i++) {
                    students[i].display();
                }
                cout << endl;
                break;
            case 3:
                if (size == 0) {
                    cout << "No student records available. Please insert records first." << endl;
                    break;
                }
                print_table_header_with_performance();
                for (int i = 0; i < size; i++) {
                    students[i].get_per();
                }
                cout << endl;
                break;
            case 4: {
                if (size == 0) {
                    cout << "No students available to rank." << endl;
                    break;
                }
                Student max = students[0];
                for (int i = 1; i < size; i++) {
                    if (students[i].return_per() > max.return_per()) {
                        max = students[i];
                    }
                }
                cout << "1st Rank is: " << max.return_name() << endl;
                break;
            }
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
