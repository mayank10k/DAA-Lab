class Solution {
public:
    bool isPalindromic(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<=j){
            int a1=int(s[i]);
            int a2=int(s[j]);
            string s1=bitset<8>(a1).to_string();
            string s2=bitset<8>(a2).to_string();
            reverse(s2.begin(),s2.end());
            if(s1!=s2){
                return false;
            }
            i++,j--;
        }
        return true;
    }
};