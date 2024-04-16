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

int main(){

    Dog d;


    d.setage(10);
    d.weight = 30 ;

    cout<<"age : "<<d.age<<endl;
    cout<<"weight : "<<d.weight<<endl;
    d.speak();

}