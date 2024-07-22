#include<iostream>

using namespace std;

// Base class 'person' with public members 'name' and 'age'
class person {
    public:
        string name;
        int age;
};

// Derived class 'student' inheriting from 'person' and adding 'rollno'
class student : public person {
    public:
        int rollno;
};

int main() {
    student s;  // Creating an object of class 'student'
    s.name = "Vaibhav";  // Setting the name of the student
    s.age = 19;  // Setting the age of the student
    s.rollno = 1;  // Setting the roll number of the student
    
    return 0;
}
