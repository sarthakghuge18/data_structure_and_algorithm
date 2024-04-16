#include<iostream>
using namespace std;

class Human{

    public:
        int height ;
        int weight ;
        int age ;

};


class Male : public Human{

    public : 

        string color;

        void sleep(){
            cout<<"male sleeping ";
        }

};

int main(){

    Male obj;
    obj.age = 20;
    obj.height = 170;
    obj.weight = 65;
    obj.color = "normal";

    cout<<"age : "<<obj.age<<endl;
    cout<<"height : "<<obj.height<<endl;
    cout<<"weight : "<<obj.weight<<endl;
    cout<<"color : "<<obj.color<<endl;
    obj.sleep();


}