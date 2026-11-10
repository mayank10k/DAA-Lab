class Solution {
public:
    int helper(int idx,int n,vector<int>& costs,vector<int>&dp){
        if(idx==n){
           return 0;
        }

        if(dp[idx]!=-1)return dp[idx];

        int ans=INT_MAX;
        for(int i=1;i<=3;i++){
            int next=idx+i;
            if(next<=n){
                int currCost=costs[next-1]+i*i;
                ans=min(ans,currCost+helper(next,n,costs,dp));
            }
        }
        return dp[idx]=ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return helper(0,n,costs,dp);
    }
};