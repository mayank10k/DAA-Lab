class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>a,b;
        for(auto it:s1){
            if(!s2.count(it))a.push_back(it);
        }
        for(auto it:s2){
            if(!s1.count(it))b.push_back(it);
        }
        return {a,b};
        
    }
};