/*
 * P06.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int a , b;
public:
	void set_swap(){
		cout<<"Enter A : ";
		cin>>a;
		cout<<"Enter B : ";
		cin>>b;
	}
	void get_swap(){
		int temp = b;
		b = a;
		a = temp;
		cout<<"B is : '"<<b<<"' A is : '"<<a<<"'"<<endl;
	}
};

int main(){
	myclass o1;
	o1.set_swap();
	o1.get_swap();
	return 0;
}






