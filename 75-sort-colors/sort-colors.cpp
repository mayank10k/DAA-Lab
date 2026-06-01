class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int i=0;
        while(m[0]){
            nums[i++]=0;
            m[0]--;
        }
        while(m[1]){
            nums[i++]=1;
            m[1]--;
        }
        while(m[2]){
            nums[i++]=2;
            m[2]--;
        }
        
    }
};