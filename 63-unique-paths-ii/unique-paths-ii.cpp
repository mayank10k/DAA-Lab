class Solution {
public:
    // memoization
    int helper(int i,int j,vector<vector<int>>&obs,vector<vector<int>>&dp){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up=0,left=0;
        if(j>0 && obs[i][j-1]!=1){
            up=helper(i,j-1,obs,dp);
        }
        if(i>0 && obs[i-1][j]!=1){
            left=helper(i-1,j,obs,dp);
        }
        return dp[i][j]= up+left;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1)return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return helper(m-1,n-1,obstacleGrid,dp);
    }
};