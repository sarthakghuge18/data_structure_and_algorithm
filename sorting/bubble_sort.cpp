#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {3,5,2,6,1,7};
    cout<<"array before sorting : ";
    display(arr,6);
    bubble_sort(arr,6);
    cout<<"array after sorting : ";
    display(arr,6);
}