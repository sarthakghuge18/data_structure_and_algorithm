#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }


}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6]={6,5,4,3,2,1};
    cout<<"array before sorting : ";
    display(arr,6);
    insertion_sort(arr,6);
    cout<<"array after sorting : ";
    display(arr,6);
}