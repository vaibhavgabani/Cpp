/*
 * P08.cpp
 *
 *  Created on: 18-Jul-2024
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
	void get_sum_of_prime(){

		int dum = 0 , sum = 0;
		int temp = 1;

		while(1){
			int cnt = 0;
			for(int i = 1 ; i <= temp ; i++){
				if(temp % i == 0){
					cnt++;
				}
			}
			if(cnt == 2){
				cout<<" "<<temp;
				dum++;
				sum += temp;
			}
			if(dum == num){
				break;
			}
			temp++;
		}

		cout<<" sum is : "<<sum;
	}
};

int main(){
	myclass o1;
	o1.set_num();
	o1.get_sum_of_prime();
	return 0;
}




