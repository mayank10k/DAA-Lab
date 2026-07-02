class Solution {
public:

    void allSubsets(vector<int>&nums,vector<int> &ans,int i,vector<vector<int>>&sub){
        if(i==nums.size()){
            sub.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        allSubsets(nums,ans,i+1,sub);

        ans.pop_back();
        allSubsets(nums,ans,i+1,sub);

    }
       
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sub;
        vector<int>ans;
      
        allSubsets(nums,ans,0,sub);

        return sub;

        
    }
};