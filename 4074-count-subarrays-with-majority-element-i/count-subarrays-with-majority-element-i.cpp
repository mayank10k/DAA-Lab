class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>m;
            int freq=0;
            for(int j=i;j<n;j++){
                m[nums[j]]++;
                if(m[target]>(j-i+1)/2)count++;
            }
        }
        return count;
        
    }
};