class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)return s;
        long long len=(n/2)-1;
        long long b=1ll*s+m + len*(m-1);
        return b;
    }
};