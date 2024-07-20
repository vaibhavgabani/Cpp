/*
 * P15.cpp
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
	void min_max(){
		int min_value = arr[0];
		    for(int i = 1; i < size; i++) {
		        if(arr[i] < min_value) {
		            min_value = arr[i];
		        }
		    }
		int max_value = arr[0];

		    for(int i = 1; i < size; i++) {
		        if(arr[i] > max_value) {
		             max_value = arr[i];
		        }
		    }
		    cout<<"Min is : "<<min_value<<"\n Max is : "<<max_value;
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
	o1.min_max();


	return 0;
}




