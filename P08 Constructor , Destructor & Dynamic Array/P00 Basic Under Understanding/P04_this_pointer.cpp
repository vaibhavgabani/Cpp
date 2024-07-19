#include <iostream>
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    // Parameterized constructor
    student(int rollno, string name) {
        // *(this).rollno == this->rollno
        this->rollno = rollno; // initialize rollno 
        this->name = name; // initialize name
    }

    void getInfo() {
        cout << "Rollno is : " << rollno << endl;
        cout << "Name is : " << name << endl;
    }
};

int main() {    
    // Parameterized constructor
    cout << "\n\nThis is called from parameterized constructor\n";
    student s2(1, "Vaibhav");
    s2.getInfo(); // Output: "Rollno is : 1" and "Name is : Vaibhav"

    return 0;
}
