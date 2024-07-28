#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool increse(vector<int>& nums){
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }

    bool decrese(vector<int>& nums){
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i] < nums[i+1]){
                return false;
            }
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
       bool c1 = increse(nums);
       bool c2 = decrese(nums);

       if(c1 || c2){
        return true;
       } 

       return false;
    }
};
