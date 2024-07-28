#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){

    int pivot = arr[s];

    int count = 0;

    for(int i = s+1 ; i <= e ; i++){
        if(pivot >= arr[i]){
            count++;
        }
    }

    //place pivot at right index
    int pivot_index = s + count ;
    swap(arr[pivot_index] , arr[s]);

    //left and right part handle 

    int left = s;
    int right = e;

    while(left < pivot_index && right > pivot_index){
        
        while(arr[left] < arr[pivot_index]){
            left++;
        }

        while(arr[right] > arr[pivot_index]){
            right--;
        }

        if(arr[left] > arr[pivot_index] && arr[right] < arr[pivot_index]){
            swap(arr[left],arr[right]);
        }
    }

    return pivot_index;

}

void quick_sort(int *arr , int s,int e){

    //base case 
    if(s >= e){
        return ;
    }

    //partition 
    int p = partition(arr,s,e);

    //left part sort
    quick_sort(arr,s,p-1);

    //right part sort 
    quick_sort(arr,p+1,e);

}

int main(){

    int arr[7] = { 9, 9, 9, 8, 2, 3, -6};
    int n = 7;
    quick_sort(arr,0, n-1);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}