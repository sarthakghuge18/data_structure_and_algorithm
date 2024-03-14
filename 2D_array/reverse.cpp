#include<iostream>
using namespace std;

void reverse(int arr[],int c){
    int start =0;
    int end = c-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int reverse_2d(int arr[][3],int r,int c){

    for(int i=0;i<r;i++){
        reverse(arr[i],c);
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
    cout<<"Before Reverse : "<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    //calling the function 
    reverse_2d(arr,3,3);

    //displaying array
    cout<<"After reverse : "<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }


}