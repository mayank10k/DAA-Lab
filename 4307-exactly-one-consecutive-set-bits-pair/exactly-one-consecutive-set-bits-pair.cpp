class Solution {
public:
    bool consecutiveSetBits(int n) {
        if(n==0)return 0;
        string s = bitset<64>(n).to_string();
        s = s.substr(s.find('1'));
        int count=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1' && s[i-1]=='1')count++;
        }
        return count==1;
    }
};