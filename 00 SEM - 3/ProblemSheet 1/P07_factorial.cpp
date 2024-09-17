/*
 * P07.cpp
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
	void set_fact(){
		cout<<"Enter Number : ";
		cin>>num;
	}
	void get_fact(){
		if(num >= 10){
			cout<<"number is gretter than 10\n";
		}
		int sum = 1;
		for(int i = 1 ; i <= num ; i++){
			(sum = sum * i);
		}
		cout<<"Factorial is : "<<sum;
	}
};

int main(){
	myclass o1;
	o1.set_fact();
	o1.get_fact();
	return 0;
}




