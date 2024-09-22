#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int size = 20;
    char str[size];
    
    cout << "Enter char here: ";
    cin.getline(str, size);  
    
    cout<<str;
    return 0;
}
