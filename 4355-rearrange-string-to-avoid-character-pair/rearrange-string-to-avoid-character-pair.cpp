class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t="";
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        while(m[y]>0){
            t.push_back(y);
            m[y]--;
        }
        for(auto it:m){
            string a(it.second,it.first);
            t+=a;
        }
        return t;
    }
};