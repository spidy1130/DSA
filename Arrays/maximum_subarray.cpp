//Problem: Maximum Subarray
//Plateform:Leetcode
//Link:https://leetcode.com/problems/maximum-subarray/
int maxSubArray(vector<int>& arr) {
    int n=arr.size();
	int ans=INT_MIN;
	
    int sum=0;
	for(int i=0;i<n;i++)
	{
		if(sum<0)
		{
			sum=arr[i];
		}
		else
		{
			sum+=arr[i];
		}
		ans=max(ans,sum);
	}
	   return ans;
}
