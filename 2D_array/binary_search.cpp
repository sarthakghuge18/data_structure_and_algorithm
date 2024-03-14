#include<iostream>
using namespace std;

//check the element is present or not 
bool binary_search(int arr[][3],int r,int c,int target){
    
    //initilize 
    int start = 0;
    int end = (r*c) -1;
    int mid = (start+end)/2;

    while(start<=end){

        int element = arr[mid/c][mid%c];   // element at mid index
        if(element == target){   //element found
            return 1;
        }

        if(element < target){
            start = mid + 1 ;
        }
        else{
            end = mid -1;
        }

        mid = (start + end)/2;
    }
    return 0;
}

int main(){

    //declare 2D array
    int arr[3][3];

    //taking input 
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }


    //displaying array 
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    //taking element to find 
    int target;
    cout<<"enter the element to search : ";
    cin>>target;

    // check elemnt is found or not
    if(binary_search(arr,3,3,target)){
        cout<<"element found";
    }else{
        cout<<"element not found ";
    }
}