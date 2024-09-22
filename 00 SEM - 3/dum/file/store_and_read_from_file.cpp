#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string str , str2;
    cout<<"Enter Here: ";
    // cin>>str; // use to store single word in str
    getline(cin,str);  // use to store  whole line in str
    // store data in file
    ofstream de("file1.txt");
    de<<str;
    de.close();

    //get data from file
    ifstream le("file1.txt");
    // le>>str2; // read single word
    getline(le,str2); // read while line form file
    cout<<"Data inside file is : "<<str2;
    return 0;
}
