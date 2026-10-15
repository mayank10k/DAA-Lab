class Solution {
public:
    int minRotations(int n, string s) {
        int ans=0;
        
        int prev=0;
        for(char c:s){
            int n=c-'0';
            ans+=min(abs(n-prev),10-abs(n-prev));
            prev=n;
        }

        prev=0;
        int prev2=s[n-1]-'0';
        int minval=ans;
        for(int i=0;i<n;i++){
            char c=s[i]-'0';
            int rotation=min(abs(c-prev),10-abs(c-prev));
            int r2=min(abs(prev-prev2),10-abs(prev-prev2));
            minval=min(minval,ans-rotation+r2);
            prev=c;
        }
        return minval;
    }
};