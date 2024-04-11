#include<iostream>
using namespace std;

void sort(int *arr,int size){

    //base case
    if(size == 0 || size == 1){
        return ;
    }

    for(int i =0 ; i < size -1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sort(arr,size-1);

}

int main(){

    int arr[] = {6,4,7,2,8,1};
    int size = 6;

    sort(arr,size);

    for(int i = 0 ; i < size ; i ++ ){
        cout<<arr[i]<<" ";
    }

}