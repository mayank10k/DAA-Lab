class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int val=97-(int)s[i];
            int product=(26+val)*(i+1);
            sum+=product;
        }
        return sum;
        
    }
};