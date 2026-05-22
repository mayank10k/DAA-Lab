class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int n=s.length();
        int count=0;
        int maxCount=0;
        
        int left=0;
        for(int right=0;right<n;right++){
            m[s[right]]++;
            if(m[s[right]]==1){
                count=(right-left)+1;
                maxCount=max(maxCount,count);
            }

            while(m[s[right]]>1){
                m[s[left]]--;
                left++;
                count--;
            }
        }
        return maxCount;
    }
};