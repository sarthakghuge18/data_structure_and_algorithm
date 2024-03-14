#include<iostream>
using namespace std;

void reverse(int arr[] ,int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void display(int arr[],int n){
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array : ";
    display(arr,n);
    reverse(arr,n);
    cout<<"\nReverse array : ";
    display(arr,n);
}