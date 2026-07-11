class Solution {
public:
    //tabulation

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        for(int t=0;t<=amount;t++){
            if(t%coins[0]==0)dp[0][t]=t/coins[0];
            else dp[0][t]=1e9;
        }

        for(int idx=1;idx<n;idx++){
            for(int target=0;target<=amount;target++){
                int notTake=0+dp[idx-1][target];
                int take=INT_MAX;
                if(coins[idx]<=target)take=1+dp[idx][target-coins[idx]];
                dp[idx][target]=min(take,notTake);
            }
        }
        int ans=dp[n-1][amount];
        return ans>=1e9?-1:ans;

    }
};