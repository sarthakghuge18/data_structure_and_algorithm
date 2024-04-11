#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key){

    //base case 
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    linear_search(arr+1 , size-1 , key);
}

int main(){

    int arr[] = {2,4,1,8,9,3};
    int size = 6;
    int key = 8;

    int ans = linear_search(arr,size,key);

    if(ans){
        cout<<"element is found ";
    }
    else{
        cout<<"element is not found ";
    }
}