#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cout << "Enter string 1: ";
    cin >> str1; // Reads a single word
    
    cout << "Enter string 2: ";
    cin.ignore(); // Ignores the newline character left in the input buffer
    getline(cin, str2); // Reads the entire line including spaces
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    return 0;
}


