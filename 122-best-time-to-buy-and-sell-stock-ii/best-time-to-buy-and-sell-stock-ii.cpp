class Solution {
public:
    //tabulation
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));

        //base case(memomization to tabulation)
        dp[n][0]=dp[n][1]=0;
        int profit=0;
        for(int idx=n-1;idx>=0;idx--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                    profit=max(-prices[idx]+dp[idx+1][0],
                                0+dp[idx+1][1]);
                }else{
                    profit=max(prices[idx]+dp[idx+1][1],
                                0+dp[idx+1][0]);
                }
                dp[idx][buy]=profit;
            }
        }
        return dp[0][1];
    }
};