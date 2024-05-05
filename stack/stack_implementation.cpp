#include<iostream>
using namespace std;

class Stack{

    public:

        int * arr;
        int top;
        int size;


        Stack(int size){
            
            this->size = size;
            arr = new int[size];
            top = -1;
        }


        void push(int element){

            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"stack is full"<<endl;
            }
        }


        void pop(){
            if(top >= 0 ){
                top--;
            }
            else{
                cout<<"stack is empty "<<endl;
            }
        }


        int peek(){
            if(top > -1){
                return top;
            }
            else{
                cout<<"stack i empty"<<endl;
            }
        }


        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

};

int main(){

    //creating object of stack 
    Stack s(5);



    //pushing element in stack 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    //print the peek element of stack
    cout<<"peek element : "<<s.peek()<<endl;


    //pop the element from stack 
    s.pop();

    //check the stack is empty or not 
    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}