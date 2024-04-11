#include<iostream>
using namespace std;

void reverse_string(string& str,int s,int e){

    //base case
    if(s>e){
        return ;
    }

    swap(str[s],str[e]);
    s++;
    e--;

    reverse_string(str,s,e);
}

int main(){

    string str = "sarthak";
    int start = 0;
    int end = str.length()-1;
    reverse_string(str,start,end);
    cout<<str;
}