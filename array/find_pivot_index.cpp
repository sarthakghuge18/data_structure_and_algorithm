//only code no main function

#include<iostream>
#include<vector>
using namespace std;


class Solution {

public:
    int left_sum(vector<int>& arr,int end){
        int sum = 0;
        for(int i = 0 ; i < end;i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    int right_sum(vector<int>& arr,int start){
        int sum = 0;
        for(int i = start+1 ; i < arr.size();i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    int pivotIndex(vector<int>& arr) {
        for(int i = 0 ; i < arr.size();i++){
            int left = left_sum(arr,i);
            int right = right_sum(arr,i);

            if(left == right){
                return i;
            }
        }
        return -1;
    }
};
