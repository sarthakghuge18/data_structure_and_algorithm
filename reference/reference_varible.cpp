#include<iostream>
using namespace std;

void update(int &y){   //using reference passing
    y++;
}

void update2(int y){  //using value passing
    y++;
}

int main (){

    int i = 5;
    int &j = i; //create refence variable 

    cout<<i<<endl;  //5
    
    i++;            //increment the value
    cout<<i<<endl;  //6
    
    j++;            //increment with the help of reference variable
    cout<<i<<endl;  //7
    cout<<j<<endl;  //7

    //the variable and reference variable indicating same or single value

    int x = 10;
    cout<<"before : "<<x<<endl;
    update(x);
    cout<<"using reference : "<<x<<endl<<endl;


    int v = 10;
    cout<<"before : "<<v<<endl;
    update2(v);
    cout<<"using value : "<<v<<endl;
}