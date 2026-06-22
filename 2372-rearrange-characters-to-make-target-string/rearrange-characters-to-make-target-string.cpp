class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }

        bool flag=true;
        int ans=0;

        while(1){
            for(char c:target){
                if(m[c]>0){
                    m[c]--;
                    if(m[c]==0)m.erase(c);
                }else{
                    flag=false;
                    break;
                }
            }
            if(flag)ans++;
            else break;
        }
        return ans;
    }
};