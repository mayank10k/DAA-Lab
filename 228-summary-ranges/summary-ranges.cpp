class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return {};
        int a=nums[0];
        int b=a;
        vector<string>ans;
        if(n==1)return {to_string(nums[0])};
        for(int i=1;i<nums.size();i++){

            if(nums[i]==nums[i-1]+1){
                b=nums[i];
            }else{
                string s1=to_string(a);
                string s2=to_string(b);
                if(a==b){
                    ans.push_back(s1);
                }else{
                    ans.push_back(s1+"->"+s2);
                }
                a=nums[i];
                b=a;
            }
        }
        if(nums.back()==nums[n-2]+1)ans.push_back(to_string(a)+"->"+to_string(nums[n-1]));
        else{
            ans.push_back(to_string(nums[n-1]));
        }
        return ans;
    }
};