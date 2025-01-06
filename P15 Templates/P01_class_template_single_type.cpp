#include<iostream>
using namespace std;

// Class template for student
template<class i>
class student {
    i rollno; // Roll number of type 'i'
    i div;    // Division of type 'i'

public:
    // Constructor to initialize rollno and div
    student(i rollno, i div) {
        this->rollno = rollno;
        this->div = div;
    }

    // Set the roll number
    void set_rollno() {
        cout << "update rollno : ";
        cin >> rollno;
    }

    // Get the roll number
    i get_rollno() {
        return rollno;
    }

    // Display rollno and div
    void display() {
        cout << "rollno is : " << rollno << " div is : " << div << endl;
    }
};

// Main function
int main() {
    student<int> s1(1, 1);  // Creating student object with int type
    s1.display();            // Display student details
    return 0;
}
