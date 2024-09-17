/*
 * P04.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int code = 0;
    string name, designation;
    float salary;
    float da, hra;
    string dept;
    int dob_day, dob_month, dob_year;
    int doj_day, doj_month, doj_year;
    float total_salary;
    int exp_days, exp_months, exp_years;

    void input() {
        cout << "\tEnter the Code of Employee: ";
        cin >> code;
        cin.ignore(); // Ignore any leftover newline characters

        cout << "\tEnter the Name of Employee: ";
        getline(cin, name);

        cout << "\tEnter the Designation of Employee: ";
        getline(cin, designation);

        while (true) {
            while (true) {
                cout << "\tEnter the Date of Birth (DD MM YYYY): ";
                cin >> dob_day >> dob_month >> dob_year;
                if (is_valid_date(dob_day, dob_month, dob_year)) break;
                cout << "\tInvalid Date of Birth. Please enter again." << endl;
            }

            while (true) {
                cout << "\tEnter the Date of Joining (DD MM YYYY): ";
                cin >> doj_day >> doj_month >> doj_year;
                if (is_valid_date(doj_day, doj_month, doj_year)) break;
                cout << "\tInvalid Date of Joining. Please enter again." << endl;
            }

        	if ((dob_year + 18 < doj_year)) break;
        	cout << "\tYour age not 18 Years Old !!!!\n";
        }

        cout << "\tEnter the Salary of Employee: ";
        cin >> salary;
        cin.ignore(); // Ignore any leftover newline characters
        cout << "\tEnter the Department of Employee: ";
        getline(cin, dept);
    }

    bool is_valid_date(int day, int month, int year) {
        if (year < 1000 || year > 9999) return false;
        if (month < 1 || month > 12) return false;
        if (day < 1) return false;

        int days_in_months[] = {31, (year % 4 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (day > days_in_months[month - 1]) return false;

        return true;
    }

    void calculate_da_hra() {
        if (salary < 30000) {
            da = 0.60;
            hra = 0.20;
        } else if (salary < 45000) {
            da = 0.70;
            hra = 0.30;
        } else {
            da = 0.85;
            hra = 0.40;
        }
    }

    void display() {
        cout << "\t" << code << "\t" << name << "\t" << designation << "\t\t"
             << dob_day << "-" << dob_month << "-" << dob_year << "\t"
             << doj_day << "-" << doj_month << "-" << doj_year << "\t"
             << salary << "\t" << dept << endl;
    }

    void calculate_total_salary() {
        total_salary = salary + (da * salary) + (hra * salary);
        cout << "\t" << code << "\t" << name << "\t" << designation << "\t"
             << dob_day << "-" << dob_month << "-" << dob_year << "\t"
             << doj_day << "-" << doj_month << "-" << doj_year << "\t"
             << salary << "\t" << dept << "\t" << total_salary << endl;
    }

    void calculate_experience() {
        int current_day, current_month, current_year;
        while (true) {
            cout << "\tEnter Current Date (DD MM YYYY): ";
            cin >> current_day >> current_month >> current_year;
            if (is_valid_date(current_day, current_month, current_year)) break;
            cout << "\tInvalid Date. Please enter again." << endl;
        }

        int days_in_months[] = {31, (current_year % 4 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (current_year < doj_year || (current_year == doj_year && current_month < doj_month) ||
            (current_year == doj_year && current_month == doj_month && current_day < doj_day)) {
            cout << "\tInvalid current date: Joining date is after current date." << endl;
            return;
        }

        if (current_day < doj_day) {
            current_day += days_in_months[current_month - 2];
            current_month--;
        }
        if (current_month < doj_month) {
            current_month += 12;
            current_year--;
        }

        exp_days = current_day - doj_day;
        exp_months = current_month - doj_month;
        exp_years = current_year - doj_year;

        cout << "\tExperience: " << exp_years << " Years, " << exp_months << " Months, " << exp_days << " Days" << endl;
    }

    void check_experience() {
        if (exp_years >= 5) {
            cout << name << " has More Than 5 Years of Experience." << endl;
        } else {
            cout << name << " Does not have 5 Years of Experience." << endl;
        }
    }

    void print_sales_department_employees(string department = "sales") {
        if (dept == department) {
            display();
            cout << endl;
        }
    }

    int get_code(){return code;}
};

int main() {
    int num_employees, choice;

    cout << "\nEnter the Number of Employees: ";
    cin >> num_employees;

    if (num_employees <= 0) {
        cout << "\nInvalid Number of Employees." << endl;
        return 1;
    }

    Employee* employees = new Employee[num_employees];

    while (true) {
        cout << "\n\t\t1. Accept the input from the user." << endl;
        cout << "\t\t2. Display the data." << endl;
        cout << "\t\t3. Calculate Total Salary." << endl;
        cout << "\t\t4. Search for employees in Sales Dept." << endl;
        cout << "\t\t5. Calculate the total experience of employees." << endl;
        cout << "\t\t6. Search employees with more than 5 years of experience." << endl;
        cout << "\t\t7. Exit" << endl;

        cout << "\nEnter your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < num_employees; i++) {
                    cout << "\nEnter Details for Employee " << i + 1 << ":\n";
                    employees[i].input();
                }
                break;

            case 2:
            	if(employees[0].get_code() == 0){
            		cout<<"First Insert Data!!!\n";
            		break;
            	}
                cout << "\nEmployee Details:\n";
                cout << "\tCode\tName\tDesignation\tDOB\t\tDOJ\t\tSalary\tDept\n";
                for (int i = 0; i < num_employees; i++) {
                    employees[i].display();
                }
                break;

            case 3:
            	if(employees[0].get_code() == 0){
            		cout<<"First Insert Data!!!\n";
            		break;
            	}
                cout << "\nEmployee Details (With Total Salary):\n";
                cout << "\tCode\tName\tDesignation\tDOB\t\tDOJ\t\tSalary\tDept\tTotal Salary\n";
                for (int i = 0; i < num_employees; i++) {
                    employees[i].calculate_da_hra();
                    employees[i].calculate_total_salary();
                }
                break;

            case 4:
            	if(employees[0].get_code() == 0){
            		cout<<"First Insert Data!!!\n";
            		break;
            	}
                cout << "\nEmployees in Sales Department:\n";
                cout << "\tCode\tName\tDesignation\tDOB\t\tDOJ\t\tSalary\tDept\n";
                for (int i = 0; i < num_employees; i++) {
                    employees[i].print_sales_department_employees();
                }
                break;

            case 5:
            	if(employees[0].get_code() == 0){
            		cout<<"First Insert Data!!!\n";
            		break;
            	}
                for (int i = 0; i < num_employees; i++) {
                    cout << "\nFor Employee " << i + 1 << ":\n";
                    employees[i].calculate_experience();
                }
                break;

            case 6:
            	if(employees[0].get_code() == 0){
            		cout<<"First Insert Data!!!\n";
            		break;
            	}
                for (int i = 0; i < num_employees; i++) {
                    cout << "\nEmployee " << i + 1 << ":\n";
                    employees[i].check_experience();
                }
                break;

            case 7:
                cout << "\nExited!" << endl;
                delete[] employees;
                return 0;

            default:
                cout << "\nInvalid Choice. Please enter again." << endl;
                break;
        }
    }
}
