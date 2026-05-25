class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int count=0;
        while(i<j){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                count++;
            }
            if(nums[i]!=0)i++;
            if(nums[j]==0)j--;
        }
        return count;
        
        
    }
};