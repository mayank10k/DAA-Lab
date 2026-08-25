class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        int i=1;
        
        while(1){
            int a=k*i;
            i++;
            if(!s.count(a))return a;
        }
        return -1;
    }
};