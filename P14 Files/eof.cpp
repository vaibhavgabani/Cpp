#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string str;
    char ch;
    cout<<"Enter Here : ";
    cin>>str;

    ofstream fout("file1.txt",ios::app);
    fout<<str;
    fout.close();

    ifstream fin("file1.txt");

    while(fin.eof() == 0){
        fin.get(ch);
        cout<<ch;
    }

    return 0;
}
