class Solution {
public:
    string smallestPalindrome(string s) {
        string s1="";
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        string c="";
        for(auto it:m){
            if(it.second%2!=0)c=it.first;
            if(it.second>=2){
                int n=it.second/2;
                while(n--){
                    s1+=it.first;
                }
                it.second%=2;

            }
        }
        string ans=s1+c;
        reverse(s1.begin(),s1.end());
        ans+=s1;
        return ans;



        
    }
};