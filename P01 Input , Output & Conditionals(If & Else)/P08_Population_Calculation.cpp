#include<iostream>
using namespace std;
int main(){
    float pop2013;
    cout<<"Enter Populaction of 2015 : ";
    cin>>pop2013;
    if(pop2013 > 0){
        float pop2014 , pop2015 , pop2016 , pop2017 , pop2018 ;
        pop2014 = pop2013 + (pop2013 * 10) / 100;
        pop2015 = pop2014 - (pop2014 * 10) / 100;
        pop2016 = pop2015 + (pop2013 * 11.23) / 100;
        pop2017 = pop2016;
        pop2018 = pop2017 - (pop2013 * 4.2) / 100;
        cout<<"Populaction of 2018 is : "<<pop2018;
    }
     else {
        cout<<"Enter valid populaction...\n";
    }
}