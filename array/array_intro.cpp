#include<iostream>
using namespace std;

//display function 
void display(int arr[],int n){
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
}


//sum of all element of array 
int sum_of_element(int arr[],int n){
    int sum = 0 ; 
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}

//main function 
int main(){

    int arr[8] = {2,9,0,1,8,2,-1};

    display(arr,7);
    
    int max = arr[0];
    int min = arr[0];

    for(int i = 0 ; i < 7 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0 ; i < 7 ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"\nmaximum is  : "<<max<<endl;
    cout<<"minimum is  : "<<min<<endl;

    //sum of array is 
    int sum = sum_of_element(arr,7);
    cout<<"sum is : "<<sum<<endl;



}