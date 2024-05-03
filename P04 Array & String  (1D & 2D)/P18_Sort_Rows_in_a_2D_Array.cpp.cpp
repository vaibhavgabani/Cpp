#include<iostream>
using namespace std;
int main(){
  int m , n;
  cout<<"Enter M size for array : ";
  cin>>m;
  cout<<"Enter N size for array : ";
  cin>>n;
  if(m >0 && n > 0){
       int arr[m][n];
       //input of array
       cout<<"Enter Value in Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<"Enter value at ["<<i+1<<"]["<<j+1<<"] : ";
               cin>>arr[i][j];
           }
       }
        //print of array
        cout<<endl<<"Entered Value in Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }
       //sort row
       //ascending
      for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               for(int k = 0 ; k < n ; k++){
                   if(arr[i][j] < arr[i][k]){
                       int temp = arr[i][k];
                       arr[i][k] = arr[i][j];
                       arr[i][j] = temp;
                   }
               }
           }
       }
       //print of array
        cout<<endl<<"Cols wife sort Accending order of Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }
       //descending 
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               for(int k = 0 ; k < n ; k++){
                   if(arr[i][j] > arr[i][k]){
                       int temp = arr[i][k];
                       arr[i][k] = arr[i][j];
                       arr[i][j] = temp;
                   }
               }
           }
       }
       //print of array
        cout<<endl<<"Cols wife sort descending order of Array : "<<endl;
       for(int i = 0 ; i < m ; i++){
           for(int j = 0 ; j < n ; j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }
  } else {
      cout<<"Enter Valid sizer of m or n...";
  }
    return 0;
}