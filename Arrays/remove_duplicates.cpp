// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
int removeDuplicates(vector<int>& nums) {
    vector<int> temp;
    int  j=1,n=nums.size();
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            j++;
            temp.push_back(nums[i]);

        }
    }
    temp.push_back(nums[nums.size()-1]);
    nums=temp;
        return j;
    }