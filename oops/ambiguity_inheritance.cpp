#include<iostream>
using namespace std;

class A{
    public : 
        void func(){
            cout<<"function of A"<<endl;
        }
};

class B{
    public : 
        void func(){
            cout<<"function of B"<<endl;
        }
};


class C : public A, public B{
    public : 
        void func(){
            cout<<"function of C"<<endl;
        }
};

int main(){

    C obj;
    obj.A::func();    //ambiguity handle with the help of scope resoltion operator 
    obj.B::func();
    obj.func();
}