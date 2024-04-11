#include<iostream>
using namespace std;

bool check_pallindrome(string str ,int i, int j){
    
    //base case
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    i++;
    j--;

    check_pallindrome(str,i,j);

}



int main(){

    string str = "sarthak";

    int ans = check_pallindrome(str,0,str.length()-1);

    if(ans){
        cout<<"String is pallindrome";
    }else{
        cout<<"string is not pallindrome";
    }
}