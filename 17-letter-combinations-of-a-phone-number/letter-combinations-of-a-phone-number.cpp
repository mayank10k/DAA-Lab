class Solution {
public:
    void helper(string digits,string output,int idx,vector<string>&ans,unordered_map<char,string>&m){
        if(idx>=digits.size()){
            ans.push_back(output);
            return;
        }
        string s=m[digits[idx]];
        for(int j=0;j<s.length();j++){
            output.push_back(s[j]);
            helper(digits,output,idx+1,ans,m);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        vector<string>ans;
        string output="";
        helper(digits,output,0,ans,m);
        
        return ans;
        
    }
};