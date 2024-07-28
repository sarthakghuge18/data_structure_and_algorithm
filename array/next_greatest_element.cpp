
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int find_greater(vector<int>& nums2,int value,int start){
        for(int i = start + 1; i < nums2.size() ; i++){
            if(nums2[i] > value){
                return nums2[i];
            }
        }
        return -1;
    }

    int find_element(vector<int>& nums2,int value){
        for(int i = 0 ; i < nums2.size();i++){
            if(value == nums2[i]){
                int ans = find_greater(nums2,value,i);
                return ans;
            }
        }
        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int>v;

        for(int i = 0 ; i < nums1.size() ; i++){
            int n2 = find_element(nums2,nums1[i]);
            v.push_back(n2);
        }

        return v;
        
    }
};