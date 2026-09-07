class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }

        int ans=0;
        for(auto it:m){
            vector<int>temp=it.second;
            // sort(temp.begin(),temp.end());
            int n=temp.size();
            if(n==1)ans++;
            else{
                bool flag=true;
                for(int i=0;i<n-1;i++){
                    if(temp[i]!=temp[i+1]-1){
                        flag=false;
                        break;
                    }
                }
                if(flag)ans++;
            }
        }
        return ans;
    }
};