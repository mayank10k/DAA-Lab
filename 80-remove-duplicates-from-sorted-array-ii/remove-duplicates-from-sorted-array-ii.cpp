class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]<2){
                m[nums[i]]++;
                nums[l++]=nums[i];
            }
        }
        return l;
    }
};