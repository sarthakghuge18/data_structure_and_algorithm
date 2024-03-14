#include<iostream>
using namespace std;

//displaying the array in wave manner 
void wave_wise_display(int arr[][3],int row,int col){

    for(int i = 0;i<row;i++){
        if(i & 1){
            //odd row case right to left 
            for(int j = col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            //even row case left to right
            for(int j = 0; j < col ; j++){
                cout<<arr[i][j]<<" ";
            }
        }
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

    wave_wise_display(arr,3,3);
}