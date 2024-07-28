#include<iostream>
using namespace std;

void reverse(char name[] , int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(name[start++],name[end--]);
    }
}

int find_length(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){

    char name [10] ;
    cout<<"enter the name :";

    cin>>name;

    cout<<"character array : ";
    cout<<name<<endl;

    int len = find_length(name);
    cout<<"size of string : "<<len<<endl;

    reverse(name,len);
    cout<<"reverse string : "<<name<<endl;
}