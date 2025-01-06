#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    fstream file;
    file.open("file1.txt", ios::in | ios::out | ios::trunc);
    int size = 3;
    float arr[size], tmp[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter here: ";
        cin >> arr[i];
        file.write((char*)&arr[i], sizeof(arr[i]));
    }

    file.seekg(0);
    

    for(int i = 0 ; file.eof() == 0 ; i++){
        file.read((char*)&tmp[i], sizeof(tmp[i]));
    }

    file.close();

    for (int j = 0; j < size; j++) {
        cout << tmp[j] << endl;
    }

    return 0;
}
