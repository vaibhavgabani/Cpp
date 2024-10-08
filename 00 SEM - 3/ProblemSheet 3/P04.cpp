/*
 * P04.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */


#include <iostream>
#include<cstring>
using namespace std;

class Cstring{
    public:
    char str[20];
    int size = 0;

    void get(){
        cout<<"Enter Here : ";
        cin>>str;
        size = strlen(str);
    }
    void display(){
        cout<<str<<endl;
    }

    Cstring operator +(Cstring a){
        Cstring tmp;
        tmp.size = size + a.size;
        strcpy(tmp.str,str);
        strcat(tmp.str,a.str);

        return tmp;
    }

    int operator ==(Cstring b){
        if(size == b.size){
            return 1;
        }
        return 0;
    }

    int operator !=(Cstring a){
        if(size != a.size){
            return 0;
        }
        return 1;
    }

    int operator <=(Cstring a){
        if(size <= a.size){
            return 1;
        }
        return 0;
    }

    int operator <(Cstring a){
        if(size < a.size){
            return 1;
        }
        return 0;
    }

    int operator >=(Cstring a){
        if(size >= a.size){
            return 1;
        }
        return 0;
    }

    int operator >(Cstring a){
        if(size > a.size){
            return 1;
        }
        return 0;
    }
};
int main() {
    Cstring s1, s2, s3;
    s1.get();
    cout << "Data inside 1 string: ";
    s1.display();
    cout << endl;

    s2.get();
    cout << "Data inside 1 string: ";
    s2.display();
    cout << endl;

    s3 = s1 + s2;
    cout << "S1 + S2: ";
    s3.display();
    cout << endl;

    // Full if-else statements for comparisons
    if (s1 == s2) {
            cout << "s1 and s2 are equal." << endl;
        } else {
            cout << "s1 and s2 are not equal." << endl;
        }

        if (s1 != s2) {
            cout << "s1 and s2 are not equal." << endl;
        } else {
            cout << "s1 and s2 are equal." << endl;
        }

        if (s1 < s2) {
            cout << "s1 is < s2" << endl;
        } else {
            cout << "s1 is not < s2" << endl;
        }

        if (s1 <= s2) {
            cout << "s1 is <= s2" << endl;
        } else {
            cout << "s1 is not <= s2" << endl;
        }

        if (s1 > s2) {
            cout << "s1 is > s2" << endl;
        } else {
            cout << "s1 is not > s2" << endl;
        }

        if (s1 >= s2) {
            cout << "s1 is >= s2" << endl;
        } else {
            cout << "s1 is not >= s2" << endl;
        }


    return 0;
}






