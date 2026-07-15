class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int temp=n;
        int sumEven=0;
        int a=0;
        
        while(temp--){
            a+=2;
            sumEven+=a;
        }
        return gcd(sumEven-n,sumEven);
        
    }
};