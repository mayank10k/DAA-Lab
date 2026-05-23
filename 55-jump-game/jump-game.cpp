class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxFreq=0;
        for(int i=0;i<n;i++){
            if(i>maxFreq)return false;
            maxFreq=max(maxFreq,i+nums[i]);
        }

        if(maxFreq>=n-1)return true;
        return false;
        
    }
};