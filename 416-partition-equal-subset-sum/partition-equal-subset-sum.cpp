class Solution {
public:
    //tabulation

    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        if(sum%2!=0 )return false;
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,0));
        
        // if(target==0)return true;
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        // if(idx==0)return (nums[0]==target);
        if (nums[0] <= target)dp[0][nums[0]] = true;

        for(int i=1;i<n;i++){
            for(int j=1;j<=target;j++){
                bool notTake=dp[i-1][j];
                bool take=false;
                if(nums[i]<=j){
                    take=dp[i-1][j-nums[i]];
                }
                dp[i][j]=take|notTake;
            }
        }

        return dp[n-1][target];
        
    }
};