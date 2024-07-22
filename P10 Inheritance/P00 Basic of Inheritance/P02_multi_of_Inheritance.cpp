#include<iostream>

using namespace std;

// Base class 'person' with public members 'name' and 'age'
class person {
    public:
        string name;
        int age;
};

// Derived class 'teacher' inheriting from 'person' and adding 'subject' and 'salary'
class teacher : public person {
    public:
        string subject;
        double salary;
};

// Derived class 'TA_student' inheriting from 'teacher' and adding 'rollno'
class TA_student : public teacher {
    public:
        int rollno;
};

int main() {
    TA_student s;  // Creating an object of class 'TA_student'
    s.name = "Vaibhav";  // Setting the name of the TA student
    s.age = 19;  // Setting the age of the TA student
    s.rollno = 1;  // Setting the roll number of the TA student

    // Printing the data of the TA student
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Roll No: " << s.rollno << endl;
    
    return 0;
}
