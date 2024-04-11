#include<iostream>
using namespace std;


int sum_of_element(int arr[],int size){
   
    if(size <= 0){
        return 0;
    }
    
    return arr[size-1] + sum_of_element(arr,size-1);
}



int main(){

    int arr[] = {2,3,4,5,6,7};
    int size = 6;

    int ans = sum_of_element(arr,size);
    cout<<"\nsum is : "<<ans;

}