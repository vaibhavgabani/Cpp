/*
 * P12.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int size = 10;
	int *arr;
public:
	void set_arr(){
		cout<<"Enter size of array : ";
		cin>>size;
		arr = new int[size];
		for(int i = 0 ; i < size ; i++){
			cout<<"Enter value at ["<<(i+1)<<"] : ";
			cin>>arr[i];
		}
	}
	void get_sum_of_arr(){
		int sum = 0;
		for(int i = 0 ; i < size ; i++){
			sum += arr[i];
		}
		cout<<"sum is : "<<sum<<endl;
	}
	void get_avg_of_arr(){
		int sum = 0;
		for(int i = 0 ; i < size ; i++){
			sum += arr[i];
		}
		float avg = (sum / size);
		cout<<"Average is : "<<avg<<endl;
	}

	~myclass(){
		delete[] arr;
	}
};

int main(){
	myclass o1;
	o1.set_arr();
	o1.get_sum_of_arr();
	o1.get_avg_of_arr();
	return 0;
}





