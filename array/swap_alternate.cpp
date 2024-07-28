#include<iostream>
using namespace std;

void display(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}


void swap_alternate(int arr[],int n){
    int first = 0;
    int second = 1;

    while(second < n){
        swap(arr[first],arr[second]);
        first = first + 2;
        second = second + 2;
    }
    display(arr,n);
}

int main(){

    int arr[10] = {2,3,4,5,2,8,1,9,77,33};
    cout<<"original array : ";
    display(arr,10);

    cout<<"swap alternate : ";
    swap_alternate(arr,10);
}