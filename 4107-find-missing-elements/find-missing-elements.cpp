class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int first=*s.begin();
        int last=*prev(s.end());
        cout<<last<<endl;
        vector<int>ans;
        for(int i=first;i<=last;i++){
            if(!s.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};