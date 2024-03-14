#include<iostream>
using namespace std;

bool palindrome(char name[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end ){
        if(name[start] != name[end]){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1;

}
int getlength(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout<<"enter name : ";
    cin>>name;

    cout<<"your name : "<<name<<endl;

    int length = getlength(name);
    bool flag = palindrome(name,length);

    if(flag){
        cout<<name <<" is palindrome ";
    }else{
        cout<<name <<" is not palindrome ";
    }

}