/*
 * P13.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class myclass{
private:
	int size ;
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
	void swap_f_and_l(){
		int *start = arr;
		int *end = arr;
		end += (size - 1);
		int temp = *start;
		*start = *end;
		*end = temp;
	}
	void print(){
		for(int i = 0 ; i < size ; i++){
			cout<<" "<<arr[i];
		}
	}
	~myclass(){
		delete[] arr;
	}
};

int main(){
	myclass o1;
	o1.set_arr();
	o1.print();
	cout<<endl;
	o1.swap_f_and_l();
	o1.print();
	cout<<endl;
	return 0;
}





