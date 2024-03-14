#include<iostream>
using namespace std;

void transpose(int arr[][3],int r,int c){


    for(int i =0; i<r;i++){
        for(int j =0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    cout<<"array after transpose : "<<endl;
    for(int i = 0; i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    cout<<"array before transpose : "<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    //calling the transpose function
    transpose(arr,3,3);

}