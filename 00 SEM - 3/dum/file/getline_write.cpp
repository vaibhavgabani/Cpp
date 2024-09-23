#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int size = 20;
    char str[size];
    
    cout << "Enter char here: ";
    cin.getline(str, size);  
    
    cout<<str;
    // we can use both methord to print
    size = strlen(str);
    cout.write(str,size);
    return 0;
}
