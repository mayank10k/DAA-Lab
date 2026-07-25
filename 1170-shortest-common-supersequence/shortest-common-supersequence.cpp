class Solution {
public:
    string superSequence(string& s1,string& s2,vector<vector<int>>&dp,int i,int j){
        string ans="";
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                ans+=s1[i-1];
                i--,j--;

            }else if(dp[i-1][j]>dp[i][j-1]){
                ans+=s1[i-1];
                i--;
            }else{
                ans+=s2[j-1];
                j--;
            }
        }
        //for the remaining characters of either stirng
        //('i' and 'j' shoudl be grreater than 0 --> becausee of one based indexing)
        while(i>0){
            ans+=s1[i-1];
            i--;
        }
        while(j>0){
            ans+=s2[j-1];
            j--;
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
    void lcs(string& s1,string& s2,vector<vector<int>>&dp){
        int n=s1.size(),m=s2.size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }

    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        lcs(str1,str2,dp);
        return superSequence(str1,str2,dp,n,m);

    }
};