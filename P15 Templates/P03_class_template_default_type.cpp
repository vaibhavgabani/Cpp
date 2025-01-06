#include<iostream>
using namespace std;

// Class template with default data types: I = int and C = string
template<class I = int, class C = string>  // Default types for rollno (int) and name (string)
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
    // Create a student object using default template types (int for rollno, string for name)
    student<> s1(1, "Vaibhav");

    // Display student details
    s1.display();
    return 0;
}
