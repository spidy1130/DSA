   void find(vector<int>&arr,int index,int n,int target,int sum,vector<vector<int>> &ans,vector<int>&temp)
    {
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        if(sum>target||index==n)
            return;
        temp.push_back(arr[index]);
        find(arr,index,n,target,sum+arr[index],ans,temp);
        temp.pop_back();
        find(arr,index+1,n,target,sum,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        find(candidates,0,candidates.size(),target,0,ans ,temp);
        return ans;
    }