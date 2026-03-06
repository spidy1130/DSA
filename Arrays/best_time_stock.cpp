// Problem: Best Time to Buy and Sell Stock
// Platform: LeetCode
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int maxProfit(vector<int>& prices) {
        int j=prices[0],maxProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(j<prices[i])
            {
                if(maxProfit<(prices[i]-j))
                {
                    maxProfit=prices[i]-j;

                }
            }
            else
            {
                j=prices[i];
            }
        }
        return maxProfit;
    }