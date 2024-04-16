#include<iostream>
using namespace std;

class A{

    public : 

        int a;

        void operator +(A &obj){

            int num1 = this->a;
            int num2 = obj.a;

            cout<<"substraction by operator overloading : "<< num2 - num1 <<endl;
        }

        void operator <<(A &obj){

            int num1 = this->a;
            int num2 = obj.a;

            cout<<"addition by operator overloading : "<< num2 + num1 <<endl;
        }

        
};

int main(){

    A obj1;
    A obj2;


    obj1.a = 3;
    obj2.a = 7;

    obj1 + obj2 ;  

    obj1 << obj2 ;

}