/*
 * P05.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	char c;
public:
	void set_char(){
		cout<<"Enter Char : ";
		cin>>c;
	}
	void get_ascii(){
		int asci = c;
		cout<<"ASCII Value of '"<<c<<"' is : "<<asci;
	}
};

int main(){
	myclass o1;
	o1.set_char();
	o1.get_ascii();
	return 0;
}





