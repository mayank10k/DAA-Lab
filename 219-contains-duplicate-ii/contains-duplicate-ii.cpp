class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>m;
        
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]].size()>0 && abs(m[nums[i]].back()-i)<=k){
                return true;
            }
            m[nums[i]].push_back(i);
        }
        return false;
    }
};