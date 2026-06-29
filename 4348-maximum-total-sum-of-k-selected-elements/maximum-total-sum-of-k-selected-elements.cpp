class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long totalSum=0ll;
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(k--){
            if(mul){
                totalSum+=(1ll*nums[i]*mul);
                mul--;
                i--;
            }else{
                totalSum+=(nums[i]);
                i--;
            }

        }
        return totalSum;
        
    }
};