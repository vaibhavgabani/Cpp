#include<iostream>
using namespace std;
int main(){
   float hours;
   cout<<"Enter your working hours : ";
   cin>>hours;
   if(hours > 0 && hours <= 168){
    float sal;
    if(hours > 40){
        float overtime = hours - 40;
        if(overtime >= 1 && overtime <= 5){
            sal = hours * 70.00;
            cout<<"your salary is : "<<sal;
        } else if (overtime >= 6 && overtime <= 10){
            sal = hours * 85.00;
            cout<<"your salary is : "<<sal;
        } else if (overtime >= 10){
            sal = hours * 120.00;
            cout<<"your salary is : "<<sal;
        }
    } else {
         sal = hours*50;
        cout <<"your paid at "<< sal;
    }
   } else {
    cout<<"Enter valid hours..\n";
   }
} 