class Solution {
public:
    bool canAliceWin(int n) {
        bool flag=true;
        int d=10;
        while(n>=d){
            n-=d;
            d--;
            flag=!flag;
        }
        return !flag;
        
    }
};