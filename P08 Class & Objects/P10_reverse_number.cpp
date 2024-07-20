/*
 * P10.cpp
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

	void get_rev(){
		for(int i = num ; i>=0 ; i++){
			cout<<" "<<i;
		}
	}

	void get_rev_num(){
		int reminder = 0 , ans = 0;
		while(num != 0){
			reminder = num % 10;
			ans = ans * 10 + reminder;
			num = num / 10;
		}
		cout<<"Reverce is : "<<ans<<endl;
	}
};

int main(){
	myclass o1;
	o1.set_num();
	o1.get_rev_num();
	return 0;
}






