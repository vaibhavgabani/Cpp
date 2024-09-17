/*
 * P01.cpp
 *
 *  Created on: 20-Aug-2024
 *      Author: root
 */
#include<iostream>
//#include<string>
using namespace std;
class String{

	string s;

public:
	String(string s){
		this->s = s;
	}

	int get_len_of_str(){
		int temp = 0;
		while(s[temp] != '\0'){
			temp++;
		}
//		cout<<"Size of String : "<<temp<<endl;
		return temp;
	}

	void get_uppercase(){
		for(int i = 0 ; s[i] != '\0'; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] -= 32;
			}
		}
		cout<<"String in Uppercase : "<<s<<endl;
	}

	void get_lovercase(){
		for(int i = 0 ; s[i] != '\0'; i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += 32;
			}
		}
		cout<<"String in Lowercase : "<<s<<endl;
	}

	void Comparison(string str){
		if(s == str){
			cout<<"Both string are same.\n";
		} else {
			cout<<"Both string are not same.\n";
		}
	}

	void copy(string str){
		s = str;
		cout<<"String copy successfully.";
		cout<<"copy string is : "<<s<<endl;
	}

	void concatenation(string str){
		s += str;
		cout<<"concatenation string is : "<<s<<endl;
	}

	void Reverse(){
		char *start = &s[0] , *end =  &s[0] + (get_len_of_str() - 1);
		cout<<"Reverse is :"<<*start<<endl;
		while (start < end) {
		        char temp = *end;
		        *end = *start;
		        *start = temp;
		        start++;
		        end--;
		    }
		cout<<"Reverse is :"<<s<<endl;
	}

	void palindrome(){
		char *start = &s[0] , *end =  &s[0] + (get_len_of_str() - 1);
		int flag = 0;
		while(start < end){
			if(*start != *end){
				flag = 1;
				break;
			}
			start++;
			end--;
		}
		if(flag == 1){
			cout<<"String is not Palindrome\n";
		} else {
			cout<<"String is Palindrome\n";
		}
	}
};

int main(){
	int choice = 0;
	string str , str2;
	cout<<"Enter Value in String : ";
	cin>>str;
	String s1(str);

	do{
		cout<<"\n\nPress 1: Get Length of string\nPress 2: Upper case\nPress 3: Lower case\nPress 4: Comparison\nPress 5: Copy\nPress 6: Concatenation\nPress 7: Reverse\nPress 8: Palindrome\n Press 0: Exit\nEnter Your choice here: ";
		cin>>choice;
		cout<<"\n\n\n";
		switch(choice){
		case 1:
			cout<<"Size of String : "<<s1.get_len_of_str()<<endl;
			break;
		case 2:
			s1.get_uppercase();
			break;
		case 3:
			s1.get_lovercase();
			break;
		case 4:
			cout<<"Enter Value of string for compare : ";
			cin>>str2;
			s1.Comparison(str2);
			break;
		case 5:
			cout<<"Enter Value of string for Copy : ";
			cin>>str2;
			s1.copy(str2);
			break;
		case 6:
			cout<<"Enter Value of string for Concatenation. : ";
			cin>>str2;
			s1.concatenation(str2);
			break;
		case 7:
			s1.Reverse();
			break;
		case 8:
			s1.palindrome();
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



