#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>d;

    d.push_front(1);
    d.push_back(2);
    d.push_back(5);
    d.push_back(3);

    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;

    d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;
    cout<<"check it is empty : "<<d.empty()<<endl;


    cout<<"size : "<<d.size()<<endl;
}