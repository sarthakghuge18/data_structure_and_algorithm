#include<iostream>
using namespace std;

void display(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    display(arr,n);
}

int main(){

    int arr[10] = {2,3,4,5,2,8,1,9,77,33};

    int key = 43;
    bool flag ;

    for(int i = 0 ; i < 10 ; i++){
        if(key == arr[i]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    cout<<"original array : ";
    display(arr,10);
    cout<<"reverse array : ";
    reverse(arr,10);

}