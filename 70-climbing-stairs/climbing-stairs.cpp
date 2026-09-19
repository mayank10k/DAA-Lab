class Solution {
public:
    int totalWays(int n,vector<int>&dp){
        if(n<=2)return dp[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=totalWays(n-1,dp)+totalWays(n-2,dp);
    }

    int climbStairs(int n) {
        if(n==1)return 1;
        vector<int>dp(n+1,-1);
        dp[1]=1,dp[2]=2;
        return totalWays(n,dp);
    }
};