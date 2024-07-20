/*
 * P11.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	string str;
public:
	void set_str(){
		cout<<"Enter Number : ";
		cin>>str;
	}
	void get_str(){
		int sum = 0;
		for(int i = 0 ; str[i] != '\0'; i++){
			if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'O'||str[i] == 'u' || str[i] == 'U'){
				sum++;
			}
		}
		cout<<sum;
	}

};

int main(){
	myclass o1;
	o1.set_str();
	o1.get_str();
	return 0;

}





