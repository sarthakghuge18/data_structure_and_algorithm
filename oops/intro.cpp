#include<iostream>
using namespace std;

class Hero{

    int health;
    char level;;

    public:

    //constructer 
    Hero(){
        cout<<"constructer called"<<endl;
    }

    //parametrized constructer
    Hero(int health , char level){
        this->health = health;
        this->level = level;
    }

    //copy constructer
    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
    }

    int age;
    int marks;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){
    Hero h1; //statically memory allocation
    //when we create object of class is invoke(call) the constructer of class

    h1.age = 20;
    h1.marks = 90;

    //private data is set or get with the help of getter and setter
    h1.setHealth(70);
    h1.setLevel('A');

    cout<<"health : "<<h1.getHealth()<<endl;
    cout<<"level : "<<h1.getLevel()<<endl;
    cout<<"age : "<<h1.age<<endl;
    cout<<"marks : "<<h1.marks<<endl;


    
    Hero *h2 = new Hero; //dynamically memory allocation


    h2->age = 10;
    h2->marks = 100;

    //private data is set or get with the help of getter and setter
    h2->setHealth(80);
    h2->setLevel('B');

    cout<<"health : "<<h2->getHealth()<<endl;
    cout<<"level : "<<h2->getLevel()<<endl;
    cout<<"age : "<<h2->age<<endl;
    cout<<"marks : "<<h2->marks<<endl;


    Hero Ramesh(70,'d');
    cout<<"health : "<<Ramesh.getHealth()<<endl;
    cout<<"level : "<<Ramesh.getLevel()<<endl;

    Hero suresh(Ramesh);  //with the help of copy constructer we copy 
    cout<<"health : "<<suresh.getHealth()<<endl;
    cout<<"level : "<<suresh.getLevel()<<endl;

}