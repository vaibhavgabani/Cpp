#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct census{
    string name;
    int populaction;
    float literacy;
};
struct census input();
void print(struct census);
void sort_literacy(struct census [], int);
void sort_populaction(struct census [], int);
void sort_alphabetically(struct census [], int);
int main(){
    int size = 3;
    struct census s[size];
    
    //input
    for(int i = 0 ; i < size ; i++){
        cout<<endl<<"Enter Value in ["<<i+1<<"] : "<<endl;
        s[i] = input();
    }

    //print
    cout << setw(20) << left << "|City Name" << "  | " << setw(15) << left << "Population" << " | " << setw(10) << left << "Literacy  |" << endl;
    for(int i = 0 ; i < size ; i++){
        print(s[i]);
    }

    //sort and print alphabetically
    sort_alphabetically(s, size);
    cout<<endl<<endl<<"shorted alphabetically in accending order : "<<endl;
    cout << setw(20) << left << "|City Name" << "  | " << setw(15) << left << "Population" << " | " << setw(10) << left << "Literacy  |" << endl;
    for(int i = 0 ; i < size ; i++){
        print(s[i]);
    }

    //sort and print literacy
    sort_literacy(s, size);
    cout<<endl<<endl<<"shorted literacy in accending order : "<<endl;
    cout << setw(20) << left << "|City Name" << "  | " << setw(15) << left << "Population" << " | " << setw(10) << left << "Literacy  |" << endl;
    for(int i = 0 ; i < size ; i++){
        print(s[i]);
    }

    //sort and print populaction
    sort_populaction(s, size);
    cout<<endl<<endl<<"shorted populaction in accending order : "<<endl;
    cout << setw(20) << left << "|City Name" << "  | " << setw(15) << left << "Population" << " | " << setw(10) << left << "Literacy  |" << endl;
    for(int i = 0 ; i < size ; i++){
        print(s[i]);
    }

    return 0;
}

struct census input(){
    struct census s;
    cout<<"Enter CIty Name :";
    cin>>s.name;
    cout<<"Enter CIty  Populaction :";
    cin>>s.populaction;
    cout<<"Enter CIty  literacy :";
    cin>>s.literacy;
    return s;
} 
void print(struct census s){
    cout<<"|"<< setw(20) << left << s.name << " | " << setw(15) << left << s.populaction << " | " << setw(10) << left << s.literacy << "|"<< endl;
    return;
}
void sort_literacy(census s[] , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(s[i].literacy < s[j].literacy){
                struct census temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    return;
}
void sort_populaction(struct census s[], int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(s[i].populaction < s[j].populaction){
                struct census temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    return;
}
void sort_alphabetically(struct census s[], int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(s[i].name < s[j].name){
                struct census temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    return;
}
