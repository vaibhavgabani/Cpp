#include<iostream>
using namespace std;
int main(){
    int size1 , size2 ;
    cout<<"Enter size of 1 array : ";
    cin>>size1;
    cout<<"Enter size of 2 array : ";
    cin>>size2;
    
    if(size1 > 0 && size2 > 0){
       int arr1[size1] , arr2[size2];
       //input
       cout<<endl<<"Enter value in 1 array"<<endl;
       for(int i = 0 ; i < size1 ; i++){
            cout<<"Enter value at ["<<i+1<<"] : ";
            cin>>arr1[i];
       }
       cout<<endl<<"Enter value in 2 array"<<endl;
       for(int i = 0 ; i < size2 ; i++){
            cout<<"Enter value at ["<<i+1<<"] : ";
            cin>>arr2[i];
       }
       //print
       cout<<endl<<"Entered value in 1 array : ";
       for(int i = 0 ; i < size1 ; i++){
            cout<<arr1[i]<<" ";
       }

       cout<<endl;
       
       cout<<endl<<"Entered value in 2 array : ";
       for(int i = 0 ; i < size1 ; i++){
            cout<<arr2[i]<<" ";
       }

        //mearge arry1 and arry2
        int size3 = size1 + size2;
        int arr3[size3];
        // transfer 1 to 3
        for(int i = 0 ; i < size1 ; i++){
            arr3[i] = arr1[i];
        }
        // transfer 2 to 3
        for(int i = 0 ; i < size2 ; i++){
            arr3[size1 + i] = arr2[i];
        }
        //print
        cout<<endl<<"Entered value in 3 array : ";
        for(int i = 0 ; i < size3 ; i++){
            cout<<arr3[i]<<" ";
        }
        //sort
        for(int i = 0 ; i < size3 ; i++){
            for(int j = 0 ; j < size3 ; j++){
                if(arr3[i] < arr3[j]){
                    int temp = arr3[j];
                    arr3[j] = arr3[i];
                    arr3[i] = temp;
                }
            }
        }
        //print
        cout<<endl<<"Sorted value of 3 array : ";
        for(int i = 0 ; i < size3 ; i++){
            cout<<arr3[i]<<" ";
        }
    } else {
        cout<<"Enter valid size of string...";
    }
    return 0;
}