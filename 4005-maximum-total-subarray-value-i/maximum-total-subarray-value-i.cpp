class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return 1ll*k*(nums.back()-nums.front());
        
    }
};