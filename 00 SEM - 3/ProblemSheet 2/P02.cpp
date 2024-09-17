/*
 * P02.cpp
 *
 *  Created on: 22-Aug-2024
 *      Author: root
 */

#include<iostream>
//#include<string>
using namespace std;
class array{
	int size;
	int *arr;
	int temp;
public:
	 array(int size){
		 this->size = size;
		 arr = new int[size];
		 temp = 0;
	 }
	 void insert(){
		 for(int i = 0 ; i < size ; i++){
			 cout<<"Enter value at ["<<i+1<<"] :";
			 cin>>arr[i];
		 }
	 }

	 void search(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
			 return;
		 }
		 bool flag = false;
		 cout<<"Enter Element which you want to founder : ";
		 cin>>temp;
		 for(int i = 0 ; i < size ; i++){
			 if(arr[i] == temp){
				 flag = true;
				 break;
			 }
		 }
		 if(flag == true){
			 cout<< "Element found.\n";
		 } else {
			 cout<< "Element not found.\n";
		 }
	 }

	 void bubble_Sort(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
		 return;
		 }
		 for(int i=0;i<size-1;i++){
			 for(int j=i+1;j< size - 1;j++){
				 if(arr[i] > arr[j]){
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] =temp;
				 }
			 }
		 }
		 cout<<"\nArray elements after bubble sorting :\n"<<endl;
		 for(int i=0;i<size;i++){
			 cout<<" "<<arr[i];
		 }
		 cout<<endl;
	 }

	 int sum_of_array_elements(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
		 	 return -1;
		 }
		 temp = 0;
		 for(int i = 0 ; i < size ; i++){
			 temp += arr[i];
		 }
//		 cout<<"sum of Sum of array elements is : "<<temp<<endl;
		 return temp;
	 }

	 void average_of_array_elements(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
			 return;
		 }
		 cout<<"Average of array elements is : "<<(sum_of_array_elements()/size)<<endl;
	 }

	 void max(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
		 	 return;
		 }
		 temp = arr[0];
		 for(int i = 1; i < size; i++) {
			 if(arr[i] > temp) {
				 temp = arr[i];
			 }
		 }
		 cout<<"Maximum value from array elements is : "<<temp<<endl;
	 }

	 void min(){
	 		 if(arr[0] == '\0'){
	 			 cout<<"First Ensert value.\n";
	 		 	 return;
	 		 }
	 		 temp = arr[0];
	 		 for(int i = 1; i < size; i++) {
	 			 if(arr[i] < temp) {
	 				 temp = arr[i];
	 			 }
	 		 }
	 		 cout<<"Minimum value from array elements is : "<<temp<<endl;
	 	 }


	 void swap_f_and_s(){
		 if(arr[0] == '\0'){
			 cout<<"First Ensert value.\n";
			 return;
		 }
		 temp = arr[size-1];
		 arr[size-1] = arr[0];
		 arr[0] = temp;
		 cout<<"\nArray elements after Swap:\n"<<endl;
		 for(int i=0;i<size;i++){
			 cout<<" "<<arr[i];
		 }

	 }
	 ~array(){
		 delete [] arr;
	 }
};

int main(){
	int s , choice;
	cout<<"Enter Value of N : ";
	cin>>s;
	array s1(s);

	do{
		cout<<"\n\nPress 1: Insert\nPress 2: Search\nPress 3: Bubble Sort\nPress 4: Sum of array elements\nPress 5: Average of array elements.\nPress 6: Find Maximum value from array elements\nPress 7: Find Minimum value from array element\nPress 8: Swap first and last element of an array\n Press 0: Exit\nEnter Your choice here: ";
		cin>>choice;
		cout<<"\n\n\n";
		switch(choice){
		case 1:
			s1.insert();
			break;
		case 2:
			s1.search();
			break;
		case 3:
			s1.bubble_Sort();
			break;
		case 4:
			cout<<"sum of Sum of array elements is : "<<s1.sum_of_array_elements()<<endl;;
			break;
		case 5:
			s1.average_of_array_elements();
			break;
		case 6:
			s1.max();
			break;
		case 7:
			s1.min();
			break;
		case 8:
			s1.swap_f_and_s();
			break;
		case 0:
			return -1;
		default:
			cout<<"Enter Valid Choice!!!\n";
			break;
		}
	}while(1);

	return 0;
}





