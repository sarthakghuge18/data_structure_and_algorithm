#include<iostream>
using namespace std;


void selection_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_idx=i;

        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
}


void display(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main(){

    int arr[6]={6,5,7,4,8,2};
    cout<<"array before sorting : ";
    display(arr,6);
    selection_sort(arr,6);
    cout<<"array after sorting  : ";
    display(arr,6);

}