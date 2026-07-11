class Solution {
public:
    //memoization
    int helper(int idx,int target,vector<int>& coins,vector<vector<int>>&dp){
        if(idx==0){
            if(target%coins[0]==0)return dp[idx][target]=target/coins[0];
            else return dp[idx][target]=1e9;
        }
        if(dp[idx][target]!=-1)return dp[idx][target];
        int notTake=0+helper(idx-1,target,coins,dp);
        int take=INT_MAX;
        if(coins[idx]<=target)take=1+helper(idx,target-coins[idx],coins,dp);
        return dp[idx][target]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        helper(n-1,amount,coins,dp);
        return dp[n-1][amount]>=1e9?-1:dp[n-1][amount];

    }
};