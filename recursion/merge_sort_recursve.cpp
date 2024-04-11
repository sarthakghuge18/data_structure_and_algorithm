#include<iostream>
using namespace std;

void merge(int* arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int* first = new int[len1];
    int* second = new int[len2];

    //copy value
    int index = s;
    for(int i = 0 ; i <len1 ; i++){
        first[i] = arr[index++];
    }

    for(int i = 0 ; i <len2 ; i ++){
        second[i] = arr[index++];
    }

    //merge two sorted array

    int index1 = 0;
    int index2 = 0;
    index = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[index++]=first[index1++];
        }else{
            arr[index++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[index++] =first[index1++];
    }

    while(index2 < len2){
        arr[index++] = second[index2++];
    }

}

void merge_sort(int *arr, int s, int e){
    //base case 
    if(s >= e){
        return;
    }

    int mid = (s + e) / 2;

    //left part sort 
    merge_sort(arr, s, mid);

    //right part sort
    merge_sort(arr, mid + 1, e);

    //merge 
    merge(arr, s, e);
}


int main(){

    int arr[] = {2,6,3,7,4,8};
    int size = 6;

    merge_sort(arr,0,size);

    for(int i = 0 ; i < size ; i ++){
        cout<<arr[i]<<" ";
    }
}