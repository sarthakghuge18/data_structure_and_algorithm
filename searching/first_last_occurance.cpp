#include<iostream>
using namespace std;

// total number of occurance = last occurance index - first occurance index + 1

int first_occurance(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }

        mid=(start+end)/2;
    }
    return ans;
}


int last_occurance(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }

        mid=(start+end)/2;
    }
    return ans;
}

int main(){

    int arr[5]={1,2,3,3,4};
    int key=3;
    cout<<"first ocurrance : "<<first_occurance(arr,5,key)<<endl;
    cout<<"last ocurrance : "<<last_occurance(arr,5,key);
}