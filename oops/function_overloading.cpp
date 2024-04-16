#include<iostream>
using namespace std;

class A{

    public:

        void add(int a){
            cout<<a<<endl;
        }

        void add(double a){
            cout<<a<<endl;
        }

        void add(int a,int b){
            cout<<a+b<<endl;
        }

        void add(int a,int b, int c){
            cout<<a+b+c<<endl;
        }
};

int main(){

    A obj;
    obj.add(2);
    obj.add(2.1);
    obj.add(2,3);
    obj.add(2,3,4);

}