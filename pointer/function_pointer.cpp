#include<iostream>
using namespace std;

void display(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p = *p + 1;
}

int getsum(int *arr,int n){
    
    int sum = 0;
    for(int i = 0 ; i < n ;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int value = 5;
    int *p = &value;

    display(p);
    update(p);
    display(p);

    int arr[5] = {1,2,3,4,5};
    cout<<"sum is : "<<getsum(arr+3,2)<<endl;

    return 0;
}