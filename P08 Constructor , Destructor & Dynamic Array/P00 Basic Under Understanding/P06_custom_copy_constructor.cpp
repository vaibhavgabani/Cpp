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

    // copy constructor
    student(student &obj){
        cout<<"this is custom copy constructor...\n";
        this->rollno = obj.rollno;
        this->name = obj.name;
    }

    void getInfo() {
        cout << "Rollno is : " << rollno << endl;
        cout << "Name is : " << name << endl;
    }
};

int main() {    
    student s1(1, "Vaibhav");
    //default copy constructor
    student s2(s1); // custom copy constructor
    s2.getInfo();

    return 0;
}
