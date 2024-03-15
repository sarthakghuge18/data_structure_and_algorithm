#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,4};
    int *ptr = &arr[0];

    cout<<"size of arr : "<<sizeof(arr)<<endl;
    cout<<"size of ptr : "<<sizeof(ptr)<<endl;
    

    cout<<"address of first memory block is : "<<arr<<endl;
    cout<<"address of first memory block is : "<<&arr[0]<<endl;
    cout<<"address of second memory block is : "<<&arr[1]<<endl;
    cout<<"value at first memory block is : "<<*arr<<endl;
    cout<<"value at second memory block is : "<<*(arr+1)<<endl;


    //value with the help of pointer
    cout<<arr[0]<<" = "<<*(arr+0)<<endl;
    cout<<arr[1]<<" = "<<*(arr+1)<<endl;
    cout<<arr[2]<<" = "<<*(arr+2)<<endl;


    //another way to display
    cout<<"0[arr] : "<<0[arr]<<endl;
    cout<<"*(0+arr) : "<<*(0+arr);

    return 0;
}
