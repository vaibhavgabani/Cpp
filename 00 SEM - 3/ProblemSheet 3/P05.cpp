/*
 * P05.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */


#include <iostream>
using namespace std;

class Binary {

	float data;
public:
	void input(){
		cout<<"Enter data in float :";
		cin>>data;
	}
	void display(){
		cout<<data;
	}

	void set_data(float d){
		data = d;
	}
	float get_data(){
		return data;
	}

	Binary operator +(Binary obj){
		float temp;
		Binary tmp;
		temp = data + obj.get_data();
		tmp.set_data(temp);
		return tmp;
	}

	void operator >>(Binary &obj){
		float tmp;
		cin>>tmp;
		obj.set_data(tmp);
	}

	void operator <<(Binary &obj){
		cout<<obj.get_data();
	}

	friend Binary operator -(Binary obj1 ,Binary obj2);
	friend Binary operator *(Binary obj1 ,Binary obj2);
	friend Binary operator /(Binary obj1 ,Binary obj2);
};

Binary operator -(Binary obj1 ,Binary obj2){
	float temp;
	Binary tmp;
	temp = obj1.get_data() - obj2.get_data();
	tmp.set_data(temp);
	return tmp;
}

Binary operator *(Binary obj1 ,Binary obj2){
	float temp;
	Binary tmp;
	temp = obj1.get_data() * obj2.get_data();
	tmp.set_data(temp);
	return tmp;
}

Binary operator /(Binary obj1 ,Binary obj2){
	float temp;
	Binary tmp;
	temp = obj1.get_data() / obj2.get_data();
	tmp.set_data(temp);
	return tmp;
}

int main() {
	Binary a , b , c , d;
	cout<<"Enter Value in A : ";
    a.input();
    cout<<"Enter Value in B : ";
    b.input();
    cout<<"Data in A : ";
    a.display();
    cout<<endl;
    cout<<"Data in B : ";
    b.display();
    cout<<endl;

    c = a + b;
    cout<<"+ of a + b is : ";
    c.display();
    cout<<endl;

    c = a - b;
    cout<<"- of a - b is : ";
    c.display();
    cout<<endl;

    c = a * b;
    cout<<"* of a * b is : ";
    c.display();
    cout<<endl;

    c = a / b;
    cout<<"/ of a / b is : ";
    c.display();
    cout<<endl;

    cout<<"Enter data: ";
    d>>d;
    cout<<"enterd data : ";
    d<<d;
    return 0;
}





