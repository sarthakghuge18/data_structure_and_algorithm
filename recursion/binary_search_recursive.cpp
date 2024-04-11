#include<iostream>
using namespace std;

bool binary_search(int arr[],int start,int end,int key){
   
    //base case
    if(start>end){
        return false;
    }
     
    int mid = (start+end)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid]<key){
        return binary_search(arr,mid+1,end,key);
    }

    if(arr[mid]>key){
        return binary_search(arr,start,mid-1,key);
    }

}

int main(){

    int arr[] = {2,3,4,5,6,7,8}; //array must sorted in binary search
    int size = 7;
    int key = 10;
    int start = 0;
    int end = size - 1;

    int ans = binary_search(arr,start,end,key);

    if(ans){
        cout<<"element found ";
    }
    else{
        cout<<"element not found ";
    }

}