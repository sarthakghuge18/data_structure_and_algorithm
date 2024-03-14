#include<iostream>
#include<vector>
using namespace std;

void sum(int arrA[],int arrB[]){
    int i = 5-1;
    int j = 2-1;
    int sum = 0;
    int carry = 0;
    vector <int >v ;

    while(i >= 0 && j >= 0){
        int n1 = arrA[i];
        int n2 = arrB[j];

        sum = n1 + n2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        v.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0){
        sum = arrA[i]+carry;
        carry = sum /10;
        sum = sum % 10;
        v.push_back(sum);
        i--;
    }

    while(j >= 0){
        sum = arrB[j]+carry;
        carry = sum /10;
        sum = sum % 10;
        v.push_back(sum);
        j--;
    }

    

    for(int k = v.size()-1;k>=0;k--){
        cout<<v[k]<<" ";
    }
}

int main(){
    int arrA[5]={4,6,2,8,1};
    int arrB[2] = {9,9};

    sum(arrA,arrB);
}