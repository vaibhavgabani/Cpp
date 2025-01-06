#include <iostream>
#include<cstring>
using namespace std;

class String{
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

    String operator +(String a){
        String tmp;
        tmp.size = size + a.size;
        strcat(tmp.str,str);
        strcpy(tmp.str,a.str);
        return tmp;
    }

    int operator ==(String a){
        if(strcmp(str,a.str) == 0){
            return 0;
        }
        return 1;
    }

    int operator !=(String a){
        if(strcmp(str,a.str) == 0){
            return 0;
        }
        return 1;
    }
    
    int operator <=(String a){
        if(size <= a.size){
            return 0;
        }
        return 1;
    }
    
    int operator <(String a){
        if(size < a.size){
            return 1;
        }
        return 0;
    }

    int operator >=(String a){
        if(size >= a.size){
            return 0;
        }
        return 1;
    }

    int operator >(String a){
        if(size > a.size){
            return 0;
        }
        return 1;   
    }
};

int main() {
   String s1,s2,s3;
   s1.get();
   s1.display();
   s2.get();
   s2.display();
    
    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 != s2: " << (s1 != s2) << endl;
    cout << "s1 < s2: " << (s1 < s2) << endl;
    cout << "s1 <= s2: " << (s1 <= s2) << endl;
    cout << "s1 > s2: " << (s1 > s2) << endl;
    cout << "s1 >= s2: " << (s1 >= s2) << endl;
    return 0;
}
