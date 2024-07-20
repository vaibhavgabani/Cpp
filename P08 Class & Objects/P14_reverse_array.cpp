/*
 * P14.cpp
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
	void rev_1darr(){
		int *start = arr;
		int *end = arr;
		end += (size - 1);
			while(start < end){
				int temp = *start;
				*start = *end;
				*end = temp;
				start++;
				end--;
			}
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
	cout<<endl;
	cout<<"Entered Elements is : ";
	o1.print();
	cout<<endl;

	cout<<"Reverced Elements is : ";
	o1.rev_1darr();
	o1.print();

	return 0;
}





