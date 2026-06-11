class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp){
        if(i==0 && j==0 )return dp[0][0];
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up=helper(i-1,j,dp);
        int left=helper(i,j-1,dp);
        return dp[i][j]=up+left;
    }
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0]=1; //base case
        helper(m-1,n-1,dp);  
        return dp[m-1][n-1];
    }
};