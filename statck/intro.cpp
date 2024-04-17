#include<iostream>
#include<stack>
using namespace std ;

int main(){

    //creation of stack
    stack<int>s;           //stack follow the LIFO


    //push element in stack
    s.push(2);
    s.push(4);
    s.push(7);


    //pop the element form stack
    s.pop();


    //top element in stack 
    cout<<"top element in stack : "<<s.top()<<endl;


    //check statck is empty or not 
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }


}