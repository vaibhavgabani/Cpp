#include<iostream>
using namespace std;
int main(){
    float distance;
    cout<<"Enter Distance : ";
    cin>>distance;
    if(distance >= 0){
        float meters, feet, inches, centimeters;
        meters = distance * 1000;
        feet = meters * 3.28084;
        inches = feet * 12;
        centimeters = inches * 2.54;
        cout << distance << "KM into meters is : " << meters << "\nfeets is : " << feet << "\ninches is : " << inches << "\ncentimeters is : " << centimeters;
    } else {
        cout<<"Enter valid distance...\n";
    }
}