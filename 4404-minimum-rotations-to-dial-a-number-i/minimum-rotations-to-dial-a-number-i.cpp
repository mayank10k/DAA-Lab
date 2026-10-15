class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int prev=0;
        for(char c:s){
            int n=c-'0';
            ans+=min(abs(n-prev),10-abs(n-prev));
            // cout<<min(abs(n-prev),10-abs(n-prev))<<endl;
            prev=n;
        }
        return ans;
    }
};