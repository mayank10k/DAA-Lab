class Solution {
public:
    int findWays(int idx,vector<int>&nums,int target,vector<vector<int>>&dp){
        if(idx==0){
            if(target==0 && nums[0]==0)return 2;
            if(target==0 || target==nums[0])return 1;
            return 0;
        } 

        if(dp[idx][target]!=-1)return dp[idx][target];
        int notTake=findWays(idx-1,nums,target,dp);
        int take=0;
        if(nums[idx]<=target)take=findWays(idx-1,nums,target-nums[idx],dp);
        return dp[idx][target]=take+notTake;
        
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(auto it:nums)totalSum+=it;
        if(totalSum<target || (totalSum-target)%2)return 0;
        int subSum=(totalSum-target)/2;
        vector<vector<int>>dp(n,vector<int>(subSum+1,-1));
        return findWays(n-1,nums,subSum,dp);

    }
};