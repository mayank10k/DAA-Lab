class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        stringstream ss(s);

        string word;
        vector<string> words;

        while(ss>>word) {
            words.push_back(word);
        }

        int n=pattern.size();
        int m=words.size();

        if(n!=m)return false;

        for(int i=0;i<n;i++){
            // if(m1[pattern[i]]==words[i] && m2[words[i]]==pattern[i])continue;
            if(!m1.count(pattern[i]) && !m2.count(words[i])){
                m1[pattern[i]]=words[i];
                m2[words[i]]=pattern[i];
            }else if(m1[pattern[i]]==words[i] && m2[words[i]]==pattern[i]){
                continue;
            }else{
                return false;
            }
        }
        return true;
        
    }
};