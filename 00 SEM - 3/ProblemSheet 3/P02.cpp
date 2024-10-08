/*
 * P02.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class Time {


public:
	 int hours, minutes, seconds;
    Time() : hours(0), minutes(0), seconds(0) {}

    void input() {

        cout << "Enter hours: ";
        cin >> hours;

        do {
            cout << "Enter minutes (0 to 59): ";
            cin >> minutes;

            if (minutes < 0 || minutes > 59) {
                cout << "Invalid input. Minutes must be between 0 and 59." << endl;
            }
        } while (minutes < 0 || minutes > 59);

        do {
            cout << "Enter seconds (0 to 59): ";
            cin >> seconds;

            if (seconds < 0 || seconds > 59) {
                cout << "Invalid input. Seconds must be between 0 and 59." << endl;
            }
        } while (seconds < 0 || seconds > 59);
    }

    void display() {
        cout << "Time is: " << hours << " hours, "<< minutes << " minutes, "<< seconds << " seconds." << endl;
    }

   int operator ==(Time obj){
	   if(hours == obj.hours && minutes == obj.minutes && seconds == obj.seconds){
		   return 1;
	   }
	   return 0;
   }

   void operator >>(Time &obj){

	   do{
		    cout << "Enter hours: ";
	        cin >> hours;
	        if(minutes < 0 || hours> 24){
                cout << "Invalid input. hours must be between 0 and 24." << endl;
	        }
	   }while(minutes < 0 || hours> 24);

        do {
            cout << "Enter minutes (0 to 59): ";
            cin >> minutes;

            if (minutes < 0 || minutes > 59) {
                cout << "Invalid input. Minutes must be between 0 and 59." << endl;
            }
        } while (minutes < 0 || minutes > 59);

        do {
            cout << "Enter seconds (0 to 59): ";
            cin >> seconds;

            if (seconds < 0 || seconds > 59) {
                cout << "Invalid input. Seconds must be between 0 and 59." << endl;
            }
        } while (seconds < 0 || seconds > 59);
   }

   void operator <<(Time &obj){
	   cout << "Time is: " << obj.hours << " hours, "<< obj.minutes << " minutes, "<< obj.seconds << " seconds." << endl;
   }
};

int main() {
    Time time,tmp;

    time.input();

    cout<<"data in time : ";
    time.display();

    tmp>>tmp;
    cout<<"data in tmp : ";
    tmp<<tmp;

    //check are same or not
    cout<<endl;
    if (time == tmp){
    	cout<<"Both are same\n";
    } else {
    	cout<<"Both are not same\n";
    }
    return 0;
}
