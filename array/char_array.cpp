#include<iostream>
using namespace std;

//char array is string 


int getlength(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}


int main(){

    char name[20];

    cout<<"Enter name : ";
    cin>>name;

    cout<<"\nName is : "<<name;

    int length = getlength(name);
    cout<<"\nLength of array is : "<<length<<endl;

    reverse(name,length);
    cout<<"Reverse name : "<<name;
}