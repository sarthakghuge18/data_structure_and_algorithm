#include<iostream>
using namespace std;


int pivot(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }

        mid=(start+mid)/2;
    }

    return start;
}

int main(){

    int arr[6]={7,9,1,2,3,4} ;  //sorted then rotated

    int result = pivot(arr,6);
    cout<<"the pivot element in array : "<<arr[result];
}