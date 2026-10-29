class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>m;
        int n=s.size();
        if(!n)return 0;
        int left=0,right=0;

        int ans=INT_MIN;
        for(right=0;right<n;right++){
            m[s[right]]++;

            if(m[s[right]]==1)ans=max(ans,(right-left)+1);

            while(m[s[right]]>1){
                m[s[left]]--;
                left++;
            }
        }
        return ans;
    }
};