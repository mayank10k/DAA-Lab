class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long d=gcd(nums[i],nums[j]);
                ans=max(ans,(1ll*nums[i]*nums[j])/(1ll*d*d));
            }
        }
        return ans;
    }
};