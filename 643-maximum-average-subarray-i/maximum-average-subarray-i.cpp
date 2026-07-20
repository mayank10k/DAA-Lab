class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=accumulate(nums.begin(),nums.begin()+k,0.00);
        double ans=sum/k;

        int j=0;
        for(int i=k;i<nums.size();i++){
            sum-=nums[j++];
            sum+=nums[i];
            ans=max(ans,sum/k);

        }
        return ans;
        
    }
};