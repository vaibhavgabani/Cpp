#include<iostream>
using namespace std;

class student{
    private:
    int rollno;
    string name;

    public:
    //perameterized constructor
    student(int rno,string sname){
        rollno = rno;
        name = sname;
    }

    void getInfo(){
        cout<<"Rollno is : "<<rollno<<endl;
        cout<<"Name is : "<<name<<endl;
    }

};

int main(){
    student s1(1,"Vaibhav");
    s1.getInfo();
    return 0;
}