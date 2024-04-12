#include<iostream>
using namespace std;

int sqrt_by_binary_search(int n){
    int start=0;
    int end=n;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        int square=mid*mid;
        if(square==n){
            ans=mid;
            return ans;
        }

        if(square<n){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }

        mid=(start+end)/2;
    }

    return ans;
}


int main(){

    cout<<"enter the number : ";
    int n;
    cin>>n;
    int result=sqrt_by_binary_search(n);
    cout<<"The root of given number is  : "<<result;
}