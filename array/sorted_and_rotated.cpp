#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    int count = 0;

    for(int i = 1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }

    return count <= 1;
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n);
}