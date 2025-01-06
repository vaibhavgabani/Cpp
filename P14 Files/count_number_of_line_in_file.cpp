#include <iostream>
#include<fstream>

using namespace std;
int main() {
    
    string ch;
    fstream file;
    file.open("file1.txt",ios::in);
    int cnt = 0;
    while(!file.eof()){
        getline(file,ch);
        cnt++;
    }
    cout<<cnt;
    return 0;
}
