class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
        while(n>0){
            int r=n%10;
            sum+=r;
            if(r>0)x=x*10+r;
            n/=10;
        }
        string s=to_string(x);
        reverse(s.begin(),s.end());
        int num=stoi(s);
        return num*sum;

 
    }
};