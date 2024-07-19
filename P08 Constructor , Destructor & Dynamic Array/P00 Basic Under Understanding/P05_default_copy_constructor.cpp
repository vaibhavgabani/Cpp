#include <iostream>
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    // Parameterized constructor
    student(int rollno, string name) {
        this->rollno = rollno; 
        this->name = name;
    }

    void getInfo() {
        cout << "Rollno is : " << rollno << endl;
        cout << "Name is : " << name << endl;
    }
};

int main() {    
    student s1(1, "Vaibhav");
    //default copy constructor
    student s2(s1);
    s2.getInfo(); // Output: "Rollno is : 1" and "Name is : Vaibhav"

    return 0;
}
