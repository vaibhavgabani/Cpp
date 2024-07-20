/*
 * P09.cpp
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

	void get_sum_of_nacture(){
		int sum = 0;
		for(int i = 1 ; i <= 10 ; i++){
			sum+=i;
		}
		cout<<"Sum of nactural number is : "<<sum;
	}
};

int main(){
	myclass o1;
	o1.get_sum_of_nacture();
	return 0;
}



