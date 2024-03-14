#include<iostream>
using namespace std;

//searching the data in 2D array 
bool ispresent(int arr[][3],int search ,int row ,int col){

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j]==search){
                return 1;
            }
        }
    }
    return 0;
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

    int search;
    cout<<"enter search element : ";
    cin>>search;
    
    if(ispresent(arr,search,3,3)){
        cout<<"\nfound ";
    }else{
        cout<<"\nnot found ";
    }
}