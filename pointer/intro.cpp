#include<iostream>
using namespace std;

int main(){

    int num = 5;
    cout<<"value of num : "<<num<<endl;

    //address is get by -- &
    cout<<"address of num : "<< &num<<endl;

    //pointer * store the address and & give the address
    int *ptr = &num;
    cout<<"value at pointer : "<<*ptr<<endl;
    cout<<"address of num : "<<ptr<<endl;

    //pointer changes chage the num
    cout<<"before : "<<num<<endl;
    *ptr = *ptr + 2;
    cout<<"after : "<<num<<endl;


    //coping a pointer
    int *q = ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

}