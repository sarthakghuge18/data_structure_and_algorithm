#include<iostream>
using namespace std;

char max_occurance(string s){
    int arr[26] = {0};

    //create array count of character 
    for(int i=0;i<s.length() ;i++){
        char ch = s[i];
        
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //finding maximum count 
    int max = -1;
    int ans = 0;
    for(int i = 0; i < 26 ; i++){
        if(max < arr[i]){
            max = arr[i];
            ans = i;
        }
    }

    return 'a'+ ans;
}

int main(){

    string str;
    cout<<"enter the string : ";
    cin>>str;
    cout<<max_occurance(str);
}