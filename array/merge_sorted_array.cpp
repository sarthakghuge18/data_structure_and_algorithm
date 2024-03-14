#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int first = 0;
    int second = 0;
    int third = 0;

    while(first < n && second < m){
        if(arr1[first] <= arr2[second]){
            arr3[third] = arr1[first];
            first++;
            third++;
        }else{
            arr3[third] = arr2[second];
            second++;
            third++;
        }
    }

    while(first < n){
        arr3[third] = arr1[first];
        first++;
        third++;
    }

    while(second < m){
        arr3[third] = arr2[second];
        second++;
        third++;
    }
}

void display(int arr3[],int k){
    

    for(int i = 0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[3] = {2,4,6};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[8];

    merge(arr1,n,arr2,m,arr3);

    int k = sizeof(arr3)/sizeof(arr3[0]);
    display(arr3,k);
}