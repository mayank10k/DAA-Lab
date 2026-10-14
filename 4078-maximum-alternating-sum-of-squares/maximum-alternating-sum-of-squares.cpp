class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            ans+=pow(nums[j],2);
            ans-=pow(nums[i],2);
            i++,j--;
        }
        if(i==j){
            ans+=pow(nums[i],2);
        }
        return ans;
    }
};