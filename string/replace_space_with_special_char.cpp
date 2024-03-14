#include<iostream>
using namespace std;

string remove_space(string s){
    string temp = " ";

    for (int i = 0; i<s.length() ; i++ ){
        if(s[i] == ' '){
            temp.push_back('@');
        }else{
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main(){
    
    string str ;
    cout<<"enter the string : ";
    getline(cin,str);
    cout<<"before : "<<str<<endl;
    cout<<"after "<<remove_space(str);
}