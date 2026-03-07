//problem: squares of a sorted array
//platform: leetcode
//link: https://leetcode.com/problems/squares-of-a-sorted-array/
#include<iostream>  
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size() - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                result[index--] = leftSquare;
                left++;
            } else {
                result[index--] = rightSquare;
                right--;
            }
        }

        return result;
    }
};
//input: [-4,-1,0,3,10]
//output: [0,1,9,16,100]   