class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>s;
        for(int i:nums){
            if(s.count(i))return i;
            s.insert(i);
        }
        return 0;
        
    }
};