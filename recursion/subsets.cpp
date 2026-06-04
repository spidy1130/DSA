void find(vector<int>&arr,int index,int n,vector<vector<int>>&ans,vector<int>&temp)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[index]);
        find(arr,index+1,n,ans,temp);
        temp.pop_back();
        find(arr,index+1,n,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        find(arr,0,arr.size(),ans,temp);
        return ans;
    }