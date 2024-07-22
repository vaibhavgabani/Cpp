#include<iostream>

using namespace std;

// Base class 'person' with public members 'name' and 'age'
class person {
    public:
        string name;
        int age;
};

// Derived class 'teacher' inheriting virtually from 'person' and adding 'subject' and 'salery'
class teacher : public person {
    public:
        string subject;
        double salery;
};

// Derived class 'student' inheriting virtually from 'person' and adding 'rollno'
class student : public person {
    public:
        int rollno;
};

// Class 'teaching_assistant' inheriting virtually from 'student' and 'teacher'
class teaching_assistant : public student, public teacher {
    // Now 'teaching_assistant' has a single instance of 'person'
};

int main() {
    student s;  // Creating an object of class 'student'
    s.name = "Vaibhav";  // Setting the name of the student
    s.age = 19;  // Setting the age of the student
    s.rollno = 1;  // Setting the roll number of the student
    
    // Printing the data of the TA student
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Roll No: " << s.rollno << endl;
    return 0;
}
