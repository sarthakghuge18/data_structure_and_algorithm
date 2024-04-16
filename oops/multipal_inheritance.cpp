#include<iostream>
using namespace std;

class Animal{

    public :

        int age;
        int weight;

        void speak(){
            cout<<"speaking"<<endl;
        }
};

class Dog : public Animal{

    public:

        void setage(int a){
            this->age = a;
        }

        int getage(){
            return this->age;
        }
       
};

class GermanSheper : public Dog{

    public :

        void eat(){
            cout<<"eating...."<<endl;
        }
};

int main(){

   GermanSheper g;


    g.setage(10);
    g.weight = 30 ;

    cout<<"age : "<<g.age<<endl;
    cout<<"weight : "<<g.weight<<endl;
    g.speak();
    g.eat();

}