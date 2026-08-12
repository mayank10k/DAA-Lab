class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len=0;
        int left=0,right=0;
        int n=nums.size();
        unordered_map<int,int>m;
        while(right<n && left<=right){
            if(m[nums[right]]<k){
                m[nums[right]]++;
                right++;
            }else{
                while(m[nums[right]]==k){
                    m[nums[left]]--;
                    left++;
                }
            }
            len=max(len,right-left);
            cout<<len<<endl;
        }
        return len;
    }
};