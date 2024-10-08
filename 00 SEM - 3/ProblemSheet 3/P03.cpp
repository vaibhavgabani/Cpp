/*
 * P03.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */


#include <iostream>
using namespace std;

class tog {
public:
	string str;
	void input(){
		cout<<"Enter data : ";
		cin>>str;
	}
	void display(){
		cout<<str;
	}

	void operator ~(){
		for(int i = 0 ; str[i] != '\0' ; i++){
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] -= 32;
			} else if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] += 32;
			}
		}
	}
};


int main() {
	tog obj;
	obj.input();
	cout<<"Before tougle : ";
	obj.display();
	cout<<endl;

	~obj; //perform unary methord
	cout<<"After tougle : ";
	obj.display();
	cout<<endl;

    return 0;
}





