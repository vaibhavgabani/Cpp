/*
 * P02.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */




#include<iostream>
using namespace std;

int size = 500;

class DateTime {
    int dd = 0, mm = 0 , yy = 0 ;
    int ss = 0 , min = 0 , hr = 0 ;

public:
    int checkdate(int day, int month, int year) {
        if (year < 1900 || year > 2100) {
            return 1; // Date is not valid
        }

        if (month < 1 || month > 12) {
            return 1; // Date is not valid
        }

        if (day < 1 || day > 31) {
            return 1; // Date is not valid
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return 1; // Date is not valid
        }

        if (month == 2) {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    return 1; // Date is not valid
                }
            } else {
                if (day > 28) {
                    return 1; // Date is not valid
                }
            }
        }
        return 0; // Date is valid
    }

    int checkTime(int hour, int minute, int second) {
        if (hour < 0 || hour > 23) {
            return 1; // Time is not valid
        }

        if (minute < 0 || minute > 59) {
            return 1; // Time is not valid
        }

        if (second < 0 || second > 59) {
            return 1; // Time is not valid
        }

        return 0; // Time is valid
    }

    void insert_date() {
        while (true) {
            cout << "Enter Date (dd): ";
            cin >> dd;
            cout << "Enter Month (mm): ";
            cin >> mm;
            cout << "Enter Year (yyyy): ";
            cin >> yy;

            if (checkdate(dd, mm, yy) == 0) {
                break; // Exit loop if date is valid
            } else {
                cout << "Invalid date, please try again." << endl;
            }
        }
    }

    void insert_time() {
        while (true) {
            cout << "Enter Second (ss): ";
            cin >> ss;
            cout << "Enter Minute (mm): ";
            cin >> min;
            cout << "Enter Hour (hh): ";
            cin >> hr;

            if (checkTime(hr, min, ss) == 0) {
                break; // Exit loop if time is valid
            } else {
                cout << "Invalid time, please try again." << endl;
            }
        }
    }

    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month, int year) {
        // Return the number of days in the given month and year
        switch (month) {
            case 2:
                return isLeapYear(year) ? 29 : 28;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }

    void date_diff(int cd, int cm, int cy) {
        int c_d = cd;
        int c_m = cm;
        int c_y = cy;

        if (dd > c_d) {
            c_m--;
            c_d += daysInMonth(cm, cy);
        }
        if (mm > c_m) {
            c_y--;
            c_m += 12;
        }

        c_d = c_d - dd;
        c_m = c_m - mm;
        c_y = c_y - yy;

        // Output the result
        cout << "\nCompleted years : " << c_y;
        cout << "\nCompleted months : " << c_m;
        cout << "\nCompleted days : " << c_d << endl;
    }

    int get_date() {
        return dd;
    }

    int get_month() {
        return mm;
    }

    int get_year() {
        return yy;
    }

    int get_hour() {
        return hr;
    }

    int get_minute() {
        return min;
    }

    int get_second() {
        return ss;
    }

    void display() {
        cout << dd << "/" << mm << "/" << yy << endl; // Corrected output format
    }
};


class Patient{
public:
	string name , gender;
	int age;
};

class IPD{
public:
	int ward_no , bed_no , charge_per_day;
};

class IPD_Patient: public Patient, public IPD{
public:
	DateTime date_of_join , curr_date;
	int no_of_days;
	void input(){
		cout<<"Enter Patient Name : ";
		cin>>name;
		cout<<"Enter gender : ";
		cin>>gender;
		cout<<"Enter word no : ";
		cin>>ward_no;
		cout<<"Enter Bed No : ";
		cin>>bed_no;
		cout<<"Enter charge per day: ";
		cin>>charge_per_day;
		cout<<"Enter Date of join : ";
		date_of_join.insert_date();
	}

	void display(){
		cout<<"\nName is : "<<name;
		cout<<"\nGender : "<<gender;
		cout<<"\nWord No : "<<ward_no;
		cout<<"\nBed no : "<<bed_no;
		cout<<"\nCharge per day is : "<<charge_per_day<<endl<<endl;
	}

	void display_data_with_no_of_days(){
		cout<<"Enter Date of join : ";
		curr_date.insert_date();
		cout<<"\nName is : "<<name;
		cout<<"\nGender : "<<gender;
		cout<<"\nWord No : "<<ward_no;
		cout<<"\nBed no : "<<bed_no;
		cout<<"\nCharge per day is : "<<charge_per_day;
		cout<<"\ntotal admitted duraction : \n";
		date_of_join.date_diff(curr_date.get_date(),curr_date.get_month(),curr_date.get_year());
		cout<<endl<<endl;
	}
};

int main(){

	IPD_Patient p[size];
	int s = 0;
	p[s];
	int choice;
	while(1){
		cout<<"Press 1: Enter Patient Detail\nPress 2: Dsiplay Patient Detail\nPress 3: Display Patient Detail with total days of Adimated\nPress 0: Exit\nEnter your choice here: ";
		cin>>choice;
		switch(choice){
		case 1:
			p[s].input();
			s++;
			break;
		case 2:
		{
			for(int i = 0 ; i < s ; i++){
				p[i].display();
			}
		}
		break;
		case 3:
		{
			for(int i = 0 ; i < s ; i++){
				p[i].display_data_with_no_of_days();
			}
		}
		break;
		case 0:
			return 0;
			break;
		}
	}

	return 1;
}




