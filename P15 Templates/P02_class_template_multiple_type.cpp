#include<iostream>
using namespace std;

// Class template with two parameters: I for roll number and C for name
template<class I, class C>
class student{
    I rollno;  // Roll number of the student
    C name;    // Name of the student
public:
    // Constructor to initialize roll number and name
    student(I rollno, C name){
        this->rollno = rollno;
        this->name = name;
    }

    // Function to display roll number and name
    void display(){
        cout << "Rollno is : " << rollno << endl;
        cout << "Name is : " << name;
    }
};

int main(){
    // Create a student object with roll number and name
    student<int, string> s1(1, "Vaibhav");

    // Display student details
    s1.display();
    return 0;
}
