class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        vector<int>ans;
        while(ans.size()!=nums.size()){
            for(auto &it:m){
                if(it.second){
                    ans.push_back(it.first);
                    it.second--;
                }
            }
        }
        return ans;
    }
};