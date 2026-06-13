class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int sum=0;
            for(auto c:s){
                sum+=weights[c-'a'];
            }
            sum%=26;
            ans.push_back((char)('z'-sum));
        }
        return ans;
    }
};