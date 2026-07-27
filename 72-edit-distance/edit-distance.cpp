class Solution {
public:
    int  helper(string& s1,string& s2,int i,int j,vector<vector<int>>&dp){
        if(i==0)return j;
        if(j==0)return i;

        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i-1]==s2[j-1])return dp[i][j]=helper(s1,s2,i-1,j-1,dp);
        else{
            return dp[i][j]=min({1+helper(s1,s2,i,j-1,dp),1+helper(s1,s2,i-1,j,dp),1+helper(s1,s2,i-1,j-1,dp)});
        }
    }
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(word1,word2,n,m,dp);
    }
};