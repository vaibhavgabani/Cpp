#include<iostream>
using namespace std;
int main(){
    int num = 10 , dum = 0;
    int arr[num];
    //inut
    for(int i = 0 ; i < num ; i++){
        cout<<"Enter Value at ["<<i+1<<"] :";
        cin>>arr[i];
    }
    //print
    cout<<"Value Which you Enter : ";
    for(int i = 0 ; i < num ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i < num ; i++){
        int cnt = 0 ;
        for(int j = 1 ; j <=arr[i]  ; j++){
            if(arr[i] % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            dum++;
        }  
    }
    cout<<endl<<"Total prime num in array is : "<<dum;
     
    return 0;
}
