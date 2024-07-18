#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[4] = {9,9,6,4};
    int arr2[3] = {3,4,9};
    int arr3[4];

    int i = 4 - 1;
    int j = 3 - 1;
    int k = 4 - 1;

    int carry = 0;
    int sum = 0;
    int ans;

    while(i >= 0 && j >= 0){
        int ans = arr1[i] + arr2[j] + carry;
        i--;
        j--;

        carry = ans/10;
        sum = ans%10;

        arr3[k] = sum;
        k--;

    }

    while(i >= 0){
        arr3[k] = arr1[i] + carry;
        carry = 0;
        i--;
        k--;
    }

    while(j >= 0){
        arr3[k] = arr2[j];
        carry = 0;
        j--;
        k--;
    }

    cout<<"first array : ";
    display(arr1,4);
    cout<<"second array : ";
    display(arr2,3);
    cout<<"answer array : ";
    display(arr3,4);
}