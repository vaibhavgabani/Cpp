/*
 * P04.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int num;
public:
	void set_num(){
		cout<<"Enter Number : ";
		cin>>num;
	}
	void get_ans(){
		if(num == 0){
			cout<<"Enter number is zero.";
		} else if(num < 0){
			cout<<"Enter number is Negative.";
		} else {
			cout<<"Enter number is Positive.";
		}
	}
};

int main(){
	myclass o1;
	o1.set_num();
	o1.get_ans();
	return 0;
}






