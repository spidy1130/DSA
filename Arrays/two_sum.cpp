// Problem: Two Sum
// Platform: LeetCode
// Link: https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),i,j;
        vector<int> arr;
        for( i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    
                    target=-1;
                    break;
                }
            }
            if(target==-1)
              break;
            
        }
        arr.push_back(i);
        arr.push_back(j);
        return arr;
    }
};