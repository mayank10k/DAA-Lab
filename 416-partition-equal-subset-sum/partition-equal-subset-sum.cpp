class Solution {
public:
    bool helper(vector<int>& nums,int target,int idx,vector<vector<int>>&dp){
        if(target==0)return true;
        if(idx==0)return (nums[0]==target);
        if(dp[idx][target]!=-1)return dp[idx][target];
        
        bool notTake=helper(nums,target,idx-1,dp);
        bool take=false;
        if(target>=nums[idx]){
            take=helper(nums,target-nums[idx],idx-1,dp);
        }
        return dp[idx][target]=take | notTake;
    }

    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)return false;
        int target=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return helper(nums,target,n-1,dp);
        
    }
};