class Solution {
public:
    int countRotations(string s, int k) {
        int count=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
            }
        }
        if(s[0]==s[n-1]){
            count++;
        }

        if(k==count){
            return n-count;
        }else if(k==count-1){
            return count;
        }
        return 0;

    }
};