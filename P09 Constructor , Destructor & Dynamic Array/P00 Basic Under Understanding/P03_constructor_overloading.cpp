#include <iostream>
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    // Non-parameterized constructor
    student() {
        cout << "This is from student class\n";
    }

    // Parameterized constructor
    student(int rno, string sname) {
        rollno = rno;
        name = sname;
    }

    void getInfo() {
        cout << "Rollno is : " << rollno << endl;
        cout << "Name is : " << name << endl;
    }
};

int main() {
    // Creating objects of student class using constructors

    // Non-parameterized constructor
    cout << "This is called from non-parameterized constructor\n";
    student s1; // Output: "This is from student class"

    // Parameterized constructor
    cout << "\n\nThis is called from parameterized constructor\n";
    student s2(1, "Vaibhav");
    s2.getInfo(); // Output: "Rollno is : 1" and "Name is : Vaibhav"

    return 0;
}
