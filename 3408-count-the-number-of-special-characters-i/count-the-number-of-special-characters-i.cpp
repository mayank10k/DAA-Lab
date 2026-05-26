class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>s(word.begin(),word.end());
        int ans=0;
        for(char ch='a';ch<='z';ch++){
            if(s.count(ch) && s.count(ch-32)){
                ans++;;
            }
        }
        return ans;

        
    }
};