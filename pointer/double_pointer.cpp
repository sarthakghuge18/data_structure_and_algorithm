#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int* ptr = &a;
    int** ptr2 = &ptr;
    
    cout<<" value of a : "<<a<<endl;
    cout<<" address of &a : "<<&a<<endl<<endl;

    cout<<" value of ptr : "<<ptr<<endl;
    cout<<" value of *ptr : "<<*ptr<<endl;
    cout<<" address of &ptr : "<<&ptr<<endl<<endl;

    cout<<" value of ptr2 : "<<ptr2<<endl;
    cout<<" address of &ptr2 : "<<&ptr2<<endl;
    cout<<" value of *ptr2 : "<<*ptr2<<endl;
    cout<<" address of **ptr2 : "<<**ptr2<<endl<<endl;

    
}