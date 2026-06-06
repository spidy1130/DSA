import java.util.List;
import java.util.ArrayList;

class Solution {
    public void Find(int k,int target,int i,List<List<Integer>>ans,List<Integer>temp,int sum)
    {
        if(sum==target && temp.size() == k)
        {
            ans.add(new ArrayList<>(temp));
            return;
        }
        if(sum>target||i>9||temp.size()>k)
            return;
        temp.add(i);
        Find(k,target,i+1,ans,temp,sum+i);
        temp.remove(temp.size()-1);
        Find(k,target,i+1,ans,temp,sum);
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>temp=new ArrayList<>();
        Find(k,n,1,ans,temp,0);
        return ans;
    }
}

public class combinationSum3 {
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.combinationSum3(3,7));
    }
}