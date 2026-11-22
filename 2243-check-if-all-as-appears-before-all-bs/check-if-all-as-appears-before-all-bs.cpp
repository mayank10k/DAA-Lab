class Solution {
public:
    bool checkString(string s) {
        int i=s.length()-1;
        int j=0;
        
        while(s[i]!='a' && i>0)i--;
        while(s[j]!='b' && j<s.length()-1)j++;

        if(i<=j)return true;
        return false;
    }
};