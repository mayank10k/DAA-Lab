class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='(')st.push('(');
            else{
                if(st.size() && st.top()=='(')st.pop();
                else st.push(')');
            }

        }
        return st.size();
    }
};