class Solution {
public:
    bool isHappy(int n) {
        // string s=to_string(n);
        bool flag=true;
        set<int>s;
        while(flag){
            long long num=0;
            while(n>0){
                long long r=n%10;
                num+=(r*r);
                n/=10;
            }
            if(num==1)return true;
            else{
                if(s.count(num))return false;
                s.insert(num);
            }
            n=num;
        }
        return false;

        
    }
};