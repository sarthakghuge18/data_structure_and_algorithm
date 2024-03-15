#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    cout<<arr<<endl;


    //pointer in char array is work different as compare to integer array
    char ch[6] = "abcde";
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;
    
    return 0;
}