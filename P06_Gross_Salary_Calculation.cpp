#include<iostream>
using namespace std;
int main(){
    float salary ;
    cout<<"Enter your Salary : ";
    cin>>salary;
    if(salary >= 0){
        float  da , hr , ma , grosssalary;
        da = (salary * 40) / 100;
        hr = (salary * 20) / 100;
        ma = (salary * 5) / 100;
        grosssalary = da + hr + ma + ma + salary;
        cout << "da is " << da << " hr is " << hr << " ma is " << ma << " grosssalary is :" << grosssalary; 
    } else {
        cout<<"Enter valid salary.\n";
    }
}   