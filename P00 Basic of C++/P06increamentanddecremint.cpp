#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<"x is : "<< x << endl;
    //post increment & decement
    x++;
    cout<<"x++ is : "<< x << endl;
    x--;
    cout<<"x-- is : "<< x << endl;
    //pre increment & decement
    ++x;
    cout<<"++x is : "<< x << endl;
    --x;
    cout<<"--x is : "<< x << endl;
    
    //nellow also valid
    x+=5;
    cout<<"x+=5 is : "<< x << endl;
    x-=5;
    cout<<"x-=5 is : "<< x << endl;
    
}