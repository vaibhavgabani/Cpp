/*
 * P07.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Date{
	int dd = 0, mm = 0 , yy = 0 ;
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

	void display() {
		cout << "Date is : " << dd << "/" << mm << "/" << yy << endl; // Corrected output format
	}

};
int main(){
	Date d;#include<iostream>
using namespace std;

class employee
{
private:
int code;
string name,designation;
string dob,doj;
int bs;
float hra,da;
string dept;
public:
void input()
{
cout<<"Enter Code:-";
cin>>code;
cout<<"Enter Name:-";
cin>>name;
cout<<"Enter designation:-";
cin>>designation;
cout<<"Enter Date OF Birth:-";
cin>>dob;
cout<<"Enter Date Of Joing:-";
cin>>doj;
cout<<"Enter Basic Salary:-";
cin>>bs;
cout<<"Enter Department Name:-";
cin>>dept;
}
void display()
{
cout<<"\nCode:- "<<code<<endl;
cout<<"Name:- "<<name<<endl;
cout<<"Designation:- "<<designation<<endl;
cout<<"Date Of Birth:- "<<dob<<endl;
cout<<"Date Of Joing:- "<<doj<<endl;
cout<<"Basic Salary:- "<<bs<<endl;
cout<<"Department Name:- "<<dept<<endl;
}
void claculate()
{
if(bs<30000)
{
da=bs*60/100;
hra=bs*20/100;
}
else if(bs>30000||bs<45000)
{
da=bs*70/100;
hra=bs*30/100;
}
else if(bs>45000)
{
da=bs*85/100;
hra=bs*40/100;
}
cout<<"\nDA:- "<<da<<endl;
cout<<"HRA:- "<<hra<<endl;
cout<<"Total Salary:- "<<bs+da+hra<<endl;
}

void search()
{
if(dept=="sales")
{
cout<<name<<endl;
}
}
};


int main()
{
employee e,e1,e2;
e.input();
e1.input();
e2.input();
e.display();
e.claculate();
e1.display();
e1.claculate();
e2.display();
e2.claculate();
cout<<"Sales department employee:-";
e.search();
e1.search();
e2.search();

return 0;
}
	d.insert_date();
	d.display();
}
