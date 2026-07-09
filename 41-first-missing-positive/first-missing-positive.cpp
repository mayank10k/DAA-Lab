class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=1;
        unordered_set<int>st(nums.begin(),nums.end());
        while(1){
            if(!st.count(i))return i;
            i++;
        }
    }
};