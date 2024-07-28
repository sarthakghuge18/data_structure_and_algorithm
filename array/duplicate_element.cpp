#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void duplicate(int arr[],int size){
    for(int i = 0 ; i < size-1 ; i ++){
        for(int j = i + 1; j < size ; j ++ ){
            if(arr[i] == arr[j]){
                cout<<"duplicate number is : "<<arr[i]<<endl;
                return;
            }
        }
    }

    cout<<"all number are unique"<<endl;
}

void duplicate_arr(int arr[],int size){
    int ans[10];
    int m = 0;
    for(int i = 0 ; i < size-1 ; i ++){
        for(int j = i + 1; j < size ; j ++ ){
            if(arr[i] == arr[j]){
                ans[m] = arr[i];
                m++;
            }
        }
    }

    display(ans,m);
}

int main (){

    int arr[5] = {1,4,3,4,3};

    display(arr,5);
    duplicate(arr,5);
    duplicate_arr(arr,5);
    
}
