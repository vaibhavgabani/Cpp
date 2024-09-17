/*
 * P03.cpp
 *
 *  Created on: 23-Aug-2024
 *      Author: root
 */
#include <iostream>
using namespace std;

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

int main() {
    DateTime dt;
    int ch = -1;
    while (ch != 0) {
        cout << "1. Insert Date" << endl;
        cout << "2. Insert Time" << endl;
        cout << "3. Format Date & Display" << endl;
        cout << "4. Difference between 2 dates" << endl;
        cout << "5. Check Leap Year" << endl;
        cout << "6. Retrieve Day" << endl;
        cout << "7. Retrieve Month" << endl;
        cout << "8. Retrieve Year" << endl;
        cout << "9. Retrieve Hour" << endl;
        cout << "10. Retrieve Minute" << endl;
        cout << "11. Retrieve Second" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                dt.insert_date();
                break;
            case 2:
                dt.insert_time();
                break;
            case 3:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            	    break;
            	}
                dt.display();
                break;
            case 4:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            	    break;
            	}
            {
                int cd, cm, cy;
                while (true) {
                    cout << "Enter comparison Date (dd): ";
                    cin >> cd;
                    cout << "Enter comparison Month (mm): ";
                    cin >> cm;
                    cout << "Enter comparison Year (yyyy): ";
                    cin >> cy;

                    // Validate comparison date
                    if (dt.checkdate(cd, cm, cy) == 0 && (cy > dt.get_year() || (cy == dt.get_year() && cm > dt.get_month()) || (cy == dt.get_year() && cm == dt.get_month() && cd >= dt.get_date()))) {
                        break;
                    } else {
                        cout << "Comparison date is invalid or older than or eqal stored date!" << endl;
                    }
                }
                dt.date_diff(cd, cm, cy);
                break;
            }
            case 5:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            		break;
            	}
                cout << (dt.isLeapYear(dt.get_year()) ? "The year is a leap year." : "The year is not a leap year.") << endl;
                break;
            case 6:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            		break;
            	}
                cout << "Day: " << dt.get_date() << endl;
                break;
            case 7:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            		break;
            	}
                cout << "Month: " << dt.get_month() << endl;
                break;
            case 8:
            	if(dt.get_date() == 0){
            		cout<<"First enter Date!!!\n";
            		break;
            	}
                cout << "Year: " << dt.get_year() << endl;
                break;
            case 9:
            	if((dt.get_second() == 0) && (dt.get_minute() == 0 && (dt.get_hour()== 0))){
            		cout<<"First enter Time!!!\n";
            		break;
            	}
                cout << "Hour: " << dt.get_hour() << endl;
                break;
            case 10:
            	if((dt.get_second() == 0) && (dt.get_minute() == 0 && (dt.get_hour()== 0))){
            		cout<<"First enter Time!!!\n";
            		break;
            	}
                cout << "Minute: " << dt.get_minute() << endl;
                break;
            case 11:
            	if((dt.get_second() == 0) && (dt.get_minute() == 0 && (dt.get_hour()== 0))){
            		cout<<"First enter Time!!!\n";
            		break;
            	}
                cout << "Second: " << dt.get_second() << endl;
                break;
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    }
    return 0;
}




