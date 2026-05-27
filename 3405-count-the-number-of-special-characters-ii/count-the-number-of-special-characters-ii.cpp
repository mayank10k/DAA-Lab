class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        unordered_map<int,int>m1,m2;
        for(char c:word){
            m2[c]++;
        }
        for(char c:word){
            m1[c]++;
            m2[c]--;
            if(m2[c]==0)m2.erase(c);
            if(c>='a' && c<='z'){
                if(m1.count(c) && !m2.count(c) && m2.count(c-32) && !m1.count(c-32)){
                    count++;
                }
            }
        }
        return count;

        
    }
};