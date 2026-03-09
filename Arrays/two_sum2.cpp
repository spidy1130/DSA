// Two Sum Problem - Solution 2
// Problem: Two Sum
// Platform: LeetCode
// Link: https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int end=nums.size()-1,start=0;
        vector<int> temp;
        while(start<=end)
        {
            if((nums[start]+nums[end])==target)
            {
                temp.push_back(start+1);
                temp.push_back(end+1);
                return  temp;
            }
            else if((nums[start]+nums[end])>target)
            {
                end--;
            }
            else{
                start++;
            }
        }
        return temp;
    }