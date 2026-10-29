class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int &i:nums){
            m[i]++;
        }

        int ans=0;
        for(auto it:m){
            if(it.second==1)return -1;
            int d=it.second/3;
            int r=it.second%3;
            if(r==0){
                ans+=d;
            }else if(r==2 || r==1){
                ans+=(d+1);
            }
        }
        return ans;
    }
};