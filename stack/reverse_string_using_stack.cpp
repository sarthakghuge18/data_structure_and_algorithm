#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "sarthak";
    string ans = "";
    stack<char> s;

    for(int i = 0 ; i < str.length(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout<<"string before reverse : "<<str<<endl;
    cout<<"string after reverse : "<<ans<<endl;


}