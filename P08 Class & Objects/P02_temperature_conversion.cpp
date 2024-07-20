/*
 * P02.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	float celsius , Fahrenheit ;
public:
	void set_cel(){
		cout<<"Enter celsius : ";
		cin>>celsius;
	}
	void get_fer(){
		Fahrenheit = ( celsius * 9 / 5) + 32;
		cout<<celsius<<" into Fahrenheit is : "<<Fahrenheit<<endl;
	}
};

int main(){
	myclass o1;
	o1.set_cel();
	o1.get_fer();
	return 0;
}







