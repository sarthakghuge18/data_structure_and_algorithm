#include<iostream>
using namespace std;


bool is_sorted(int arr[],int size){

    //base case 
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }else{
        return is_sorted(arr+1,size-1);
    } 
}



int main(){

    int arr[] = {2,3,4,5,6,7};
    int size = 6;

    if(is_sorted(arr,size)){
        cout<<"array is sorted";
    }else{
        cout<<"array is not sorted";
    }


}