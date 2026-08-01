class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int idx=n-1;idx>=0;idx--){
            for(int prevIdx=idx-1;prevIdx>=-1;prevIdx--){
                int len=0+dp[idx+1][prevIdx+1];

                int notTake=dp[idx+1][prevIdx+1];

                int take=0;
                if(prevIdx==-1 || nums[idx]>nums[prevIdx]){
                    take=1+dp[idx+1][idx+1];
                }
                dp[idx][prevIdx+1]=max(take,notTake);
            }
        }
        return dp[0][0];
        
    }
};