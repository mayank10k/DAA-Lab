class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long sum1=accumulate(nums.begin(),nums.begin()+(n/2),0ll);
        long long sum2=accumulate(nums.begin()+(n/2),nums.end(),0ll);
        
        int ans=0;
        int i=0;
        while(i<n){
            int j=(i+(n/2))%n;
            if(sum1>sum2)ans++;
            sum1-=nums[i];
            sum1+=nums[j];
            sum2-=nums[j];
            sum2+=nums[i];
            i++;
        }
        return ans;

    }
};