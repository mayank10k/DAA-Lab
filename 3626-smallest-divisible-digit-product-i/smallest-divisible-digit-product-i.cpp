class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int num=i;
            int m=1;
            while(num>0){
                int r=num%10;
                m*=r;
                num/=10;
            }
            if(m%t==0)return i;
        }
        return -1;
        
    }
};