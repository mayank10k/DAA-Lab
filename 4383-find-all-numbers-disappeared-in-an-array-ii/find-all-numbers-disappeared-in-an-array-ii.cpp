class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<vector<int>>ans;
        int prev=lower-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<lower){
                continue;
            }
            if(nums[i]>upper){
                break;
            }
            if(nums[i]-prev>1){
                ans.push_back({prev+1,nums[i]-1});
            }
            prev=nums[i];
        }
        if(prev<upper)ans.push_back({prev+1,upper});
        return ans;
    }
};