#include<iostream>
using namespace std;
int main(){
  int m , n;
  cout<<"Enter M size for array : ";
  cin>>m;
  cout<<"Enter N size for array : ";
  cin>>n;
  if(m >0 && n > 0){
       int arr[m][n] , sum = 0;
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
        //row wise sum
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                sum += arr[j][i];
            }
            cout<<"sum of ["<<i+1<<"] is : "<<sum<<endl;
            sum = 0;
        }
  } else {
      cout<<"Enter Valid sizer of m or n...";
  }
    return 0;
}
