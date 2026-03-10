//problem:search in rotated sorted array
//platform: leetcode
//link: https://leetcode.com/problems/search-in-rotated-sorted-array/
int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            //left portion
            else if(nums[mid]>=nums[0])
            {
                //checking target is in left portion or not
                if(target>=nums[s]&&target<nums[mid])
               {
                    e=mid-1;
               }
               else
               {
                    s=mid+1;
               }
            }
            //right portion
            else
            {
                //checking target is in right portion or not
                if(target>nums[mid] && target<=nums[e])
                {
                    s=mid+1;
                }
                else
                    e=mid-1;
            }
        }
        return -1;