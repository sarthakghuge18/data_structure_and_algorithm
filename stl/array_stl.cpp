#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int ,4>a = {1,3,2,4};

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at index : "<<a.at(2)<<endl;

    cout<<"array is empty or not : "<<a.empty()<<endl;

    cout<<"element at first index : "<<a.front()<<endl;

    cout<<"element at last index : "<<a.back()<<endl;

}