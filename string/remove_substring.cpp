#include<iostream>
using namespace std;

string remove_part(string s,string part){

    while(s.length() != 0 && s.find(part) < s.length()){
        cout<<s.find(part);
        s.erase(s.find(part),part.length());
    }

    return s;
}

int main(){

    string str;
    cout<<"enter the string : ";
    cin>>str;

    string part;
    cout<<"enter the part : ";
    cin>>part;

    cout<<"Original string : "<<str<<endl;
    cout<<"part : "<<part<<endl;
    cout<<"After remove : "<<remove_part(str,part)<<endl;

    return 0;
}