class Solution {
public:
    //recursion
    int helper(int idx,int buy,vector<int>&prices,vector<vector<int>>&dp){
        if(idx>=prices.size())return 0;

        if(dp[idx][buy]!=-1)return dp[idx][buy];

        if(buy){
            return dp[idx][buy]=max(-prices[idx]+helper(idx+1,0,prices,dp),
                        helper(idx+1,1,prices,dp));
        }else{
            return dp[idx][buy]=max(prices[idx]+helper(idx+2,1,prices,dp),
                        helper(idx+1,0,prices,dp));
        }

    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));

        for(int buy=0;buy<=1;buy++){
            dp[n][buy]=0;
        }

        for(int idx=n-1;idx>=0;idx--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                    dp[idx][buy]=max(-prices[idx]+dp[idx+1][0],
                                dp[idx+1][1]);
                }else{
                    if(idx+2>n){
                        dp[idx][buy]=max(prices[idx]+0,
                                dp[idx+1][0]);
                    }else{
                        dp[idx][buy]=max(prices[idx]+dp[idx+2][1],
                                    dp[idx+1][0]);
                    }
                }
            }
        }

        return dp[0][1];
        
    }
};