#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }else{
            end=mid;
        }

        mid=(start+end)/2;
    }

    return start;
}

int main(){

    int arr[7]={0,1,2,3,5,2,0};
    
    int result=peak(arr,7);
    cout<<"peak element in mountain array : "<<arr[result];
}