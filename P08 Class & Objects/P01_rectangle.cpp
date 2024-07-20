/*
 * P01.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int l , b ;
public:
	void set_area(){
		cout<<"Enter Length of : ";
		cin>>l;
		cout<<"Enter Breath of : ";
		cin>>b;
	}
	void get_ans(){
		cout<<"Parameter of is : "<<2*(l+b);
	}
};

int main(){
	myclass o1;
	o1.set_area();
	o1.get_ans();
	return 0;
}



