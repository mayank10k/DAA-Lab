class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            // if(sum>=target){
            //     ans=min(i-left+1,ans);
            // }
            while(sum>=target){
                ans=min(i-left+1,ans);
                sum-=nums[left];
                left++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};