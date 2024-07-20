#include<iostream>

using namespace std;

// Define a class named 'student'
class student {
    // Private member variables
    int rollno; // Variable to store roll number
    char name[20]; // Variable to store name

public: // Access specifier to make the following methods public

    // Setter for roll number
    void setRollno() {
        cout << "Enter roll no : ";
        cin >> rollno;
    }

    // Setter for name
    void setName() {
        cout << "Enter name : ";
        cin >> name;
    }

    // Getter for roll number
    void getRollno() {
        cout << "Rollno is : " << rollno << endl;
    }

    // Getter for name
    void getName() {
        cout << "Name is : " << name << endl;
    }
};

int main() {
    // Create two objects of class 'student'
    student s1, s2;

    // Input for first student
    s1.setRollno();
    s1.setName();

    // Output for first student
    s1.getRollno();
    s1.getName();

    return 0; // Return 0 to indicate successful execution
}
