class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num1<=100 && num2<=100)return 0;
        int ans=0;
        for(int i=num1;i<=num2;i++){
            if(i<=100)continue;
            string s=to_string(i);
            int n=s.size();
            for(int i=1;i<n-1;i++){
                if(s[i]>s[i-1] && s[i]>s[i+1]){
                    ans++;
                }else if(s[i]<s[i-1] && s[i]<s[i+1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};