/*
 * P03.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int num1 , num2;
public:
	void set_nums(){
		cout<<"Enter Dividend : ";
		cin>>num1;
		cout<<"Enter Diviser : ";
		cin>>num2;
	}
	void get_quotient(){
		cout<<"Quotient of is : "<<(num1 / num2)<<endl;
	}
	void get_reminder(){
		cout<<"Reminder of is : "<<(num1 % num2)<<endl;
	}
};

int main(){
	myclass o1;
	o1.set_nums();
	o1.get_quotient();
	o1.get_reminder();
	return 0;
}






