#include<iostream>
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }

    return n * fact(n-1);
}

int main(){

    int a;
    cout<<"enter the number : ";
    cin>>a;
    int ans = fact(a);
    cout<<"factorial is : "<<ans;
}