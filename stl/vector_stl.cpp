#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"size : "<<v.size()<<endl;

    cout<<"element at index 2 : "<<v.at(2)<<endl;

    cout<<"front element : "<<v.front()<<endl;
    cout<<"last element : "<<v.back()<<endl;

    cout<<"before pop : "<<endl;
    for (int i:v){
        cout<<i<<" ";
    }

    v.pop_back();

    cout<<"aftre pop : "<<endl;

    for(int i : v){
        cout<<i<<" ";
    }

    cout<<"\nbefore clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"\nafter clear size : "<<v.size()<<endl;




}