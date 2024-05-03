#include<iostream>
using namespace std;
int main(){
  int m , n;
  cout<<"Enter M size for array : ";
  cin>>m;
  cout<<"Enter N size for array : ";
  cin>>n;
  if(m >0 && n > 0){
       int arr[m][n] , small = 999999999;
       //input of 1 array
       cout<<"Enter Value in Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<"Enter value at ["<<i+1<<"]["<<j+1<<"] : ";
               cin>>arr[i][j];
           }
       }
        //print of 2 array
        cout<<endl<<"Entered Value in Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }
       //small row wise
       cout<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               if(small > arr[i][j]){
                   small = arr[i][j];
               }
           }
           cout<<"Small in "<<i+1<<"Row is : "<<small<<" "<<endl;
           small = 999999999;
       }
       //small cols wise
       small = 999999999;
        cout<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               if(small > arr[j][i]){
                   small = arr[j][i];
               }
           }
           cout<<"Small in "<<i+1<<"Cols is : "<<small<<" "<<endl;
           small = 999999999;
       }
  } else {
      cout<<"Enter Valid sizer of m or n...";
  }
    return 0;
}