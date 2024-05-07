#include<iostream>
using namespace std;
int main(){
   int m = 3 , n = 3;
   int arr1[m][n] , arr2[m][n] , add[m][n] , sub[m][n] , mul[m][n];
   //input of 1 array
   cout<<"Enter Value in 1 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<"Enter value at ["<<i+1<<"]["<<j+1<<"] : ";
           cin>>arr1[i][j];
       }
   }
    //input of 2 array
    cout<<endl<<"Enter Value in 2 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<"Enter value at ["<<i+1<<"]["<<j+1<<"] : ";
           cin>>arr2[i][j];
       }
   }
   //print of 1 array
    cout<<endl<<"Entered Value in 1 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<arr1[i][j]<<" ";
       }
       cout<<endl;
   }
   //print of 2 array
    cout<<endl<<"Entered Value in 2 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<arr2[i][j]<<" ";
       }
       cout<<endl;
   }
   //addition
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
       }
   }
   //print
   cout<<endl<<"addition of 1 & 2 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<add[i][j]<<" ";
       }
       cout<<endl;
   }
   //subtraction
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];
       }
   }
   //print
   cout<<endl<<"subtraction of 1 & 2 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<sub[i][j]<<" ";
       }
       cout<<endl;
   }
   //multiplication
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
            mul[i][j] = 0;
       }
   }
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < n ; k++){\
                mul[i][k] += arr1[i][j] * arr2[i][j];
            }
       }
   }
   //print
   cout<<endl<<"multiplication of 1 & 2 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<mul[i][j]<<" ";
       }
       cout<<endl;
   }
   
   //transpose
   cout<<endl<<"transpose of 1 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<arr1[j][i]<<" ";
       }
       cout<<endl;
   }
   cout<<endl<<"transpose of 1 Array : "<<endl;
   for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           cout<<arr2[j][i]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
