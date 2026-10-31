class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=INT_MIN;
        int n=s.size();
        if(n==0)return 0;
        map<char,int>m;

        int left=0;
        for(int i=0;i<n;i++){
            m[s[i]]++;

            while(m[s[i]]>1){
                m[s[left]]--;
                left++;
            }
            maxLen=max(maxLen,i-left+1);
        }
        return maxLen;
        
    }
};