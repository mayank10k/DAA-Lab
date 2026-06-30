class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        unordered_map<char,int>m;
        int i=0,j=0,ans=0;

        while(i<n){
            m[s[i]]++;
            while(m.size()==3){
                ans+=n-i;
                m[s[j]]--;
                if(m[s[j]]==0)m.erase(s[j]);
                j++;
            }
            i++;
        }
        return ans;
        
    }
};