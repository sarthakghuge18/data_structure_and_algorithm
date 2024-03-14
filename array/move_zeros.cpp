#include<iostream>
using namespace std;

void move_zero(int arr[],int n){
    int start = 0;
    
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j] , arr[start]);
            start++;
        }
    }
   
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[8] = {0,1,0,3,0,0,0,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"before moving : ";
    display(arr,n);
    move_zero(arr,n);
    cout<<"after moving : ";
    display(arr,n);
}