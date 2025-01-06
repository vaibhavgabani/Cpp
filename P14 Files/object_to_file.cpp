#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    void input() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
    }

    void displayInfo(){
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    int size = 2;
    Student s[size], tmp[size];

    fstream file;
    file.open("file1.txt",ios::binary | ios::in | ios:: out);
    for(int i = 0 ; i < size ; i++){
        cout<<i+1<<"enter data\n";
        s[i].input();
        file.write((char*)&s[i],sizeof(s[i]));
    }
    
    file.seekg(0);

    for(int i = 0 ; file.eof() == 0 ; i++){
        file.read((char*)&tmp[i],sizeof(tmp[i]));
    }

    for(int i = 0 ; i < size; i++){
        tmp[i].displayInfo();
    }
    return 0;
}
