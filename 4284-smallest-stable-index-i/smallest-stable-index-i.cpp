class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int val=-1;
            for(int j=0;j<=i;j++){
                val=max(val,nums[j]);
            }
            int val2=1e9;
            for(int x=i;x<n;x++){
                val2=min(val2,nums[x]);
            }

            if((val-val2)<=k){
                return i;
            }
        }
        return -1;
    }
};