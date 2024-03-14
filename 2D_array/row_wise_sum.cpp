#include<iostream>
using namespace std;

//function for row wise sum
void row_wise_sum(int arr[3][3],int row,int col){
    
    
    for(int i = 0 ;i< row ; i++ ){
        int sum = 0;
        for(int j = 0; j< col ; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){

    //declare 2D array
    int arr[3][3];

    //taking input 
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }


    //displaying array 
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }


    row_wise_sum(arr,3,3); //calling the function
}