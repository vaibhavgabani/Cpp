/*
 * P03.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */




#include<iostream>
#include<iomanip>
using namespace std;

class human {
    public:
    string name;
    int age;
};

class employee : public human {
    public:
    int employee_id;

    // Default constructor
    employee() {}

    // Parameterized constructor
    employee(string name, int age, int employee_id) {
        this->name = name;
        this->age = age;
        this->employee_id = employee_id;
    }

    // Display function
    void display() {
        cout << left <<  setw(15) << name << setw(10) << age << setw(15) << employee_id << endl;
    }
};

int main() {
    int max = 50 , size = 0 , id , flag = 0;
    employee emp[max];  // Initialize employee object
    int choice, age, employee_id;
    string name;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert Employee Details (using constructor)\n";
        cout << "2. Display Employee Details\n";
        cout << "3. Search by employee id\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout<<endl<<endl<<endl;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Employee ID: ";
                cin >> employee_id;

                // Using the parameterized constructor to initialize 'emp'
                emp[size++] = employee(name, age, employee_id);
                break;
            }
            case 2:
            {
                cout<<endl<<endl<<endl;
                cout<< left << setw(15) << "Name" << setw(10) << "Age" << setw(15) << "employee id "<<endl;
                for(int i = 0 ; i < size ; i++){
                    emp[i].display();
                }
            }
                break;

            case 3:
            {
                cout<<endl<<endl<<endl;
                cout<<"Enter Employee ID which detail you want : ";
                cin>>id;
                cout<<endl<<endl;
                for(int i = 0 ; i < size ; i++){
                    if(id == emp[i].employee_id){
                        cout<< left << setw(15) << "Name" << setw(10) << "Age" << setw(15) << "employee id "<<endl;
                        emp[i].display();
                        flag = 1;
                    }
                }
                if(flag == 0){
                    cout<<"data not found!!!\n\n";
                }
            }
            break;
            case 0:
                cout<<endl<<endl<<endl;
                cout << "Exiting program." << endl;
                break;

            default:
            cout<<endl<<endl<<endl;
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
