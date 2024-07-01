#include<iostream>

using namespace std;

class student{
    int rollno;
    char name[20];

    public: //access access specifer

    //setter
    void setRollno(){
        cout<<"Enter roll no : ";
        cin >> rollno;
    }
    void setName(){
        cout<<"Enter name : ";
        cin >> name;
    }

    //getter
    void getRollno(){
        cout<<"Rollno is : "<<rollno<<endl;
    }
    void getName(){
        cout<<"Name is : "<<name<<endl;
    } 
};

int main(){
    student s1 , s2;
    // input
    s1.setRollno();
    s1.setName();

    //output
    s1.getRollno();
    s1.getName();
    return 0;
}