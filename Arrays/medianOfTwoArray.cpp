//problem: median of two sorted array
//platform: leetcode
//link: https://leetcode.com/problems/median-of-two-sorted-arrays/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> arr(m+n);
        int i=0,j=0,k=0;
       while((i<m)&&(j<n))
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k++]=nums1[i++];
            }
            else
            {
                arr[k++]=nums2[j++];
            }
        }
        while(i<m)
        {
            arr[k++] = nums1[i++];
        }while(j<n)
        {
            arr[k++] = nums2[j++];
        }
        int total = m + n;
        
        if(total % 2 != 0)
        {
            return arr[total / 2];
        }
        else
        {
            return (arr[total/2 - 1] + arr[total/2]) / 2.0;
        }
    }