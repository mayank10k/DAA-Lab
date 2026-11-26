class Solution {
public:
    bool canAliceWin(int n) {
        bool flag=true;
        int d=10;
        while(n>=d){
            if(flag){
                n-=d;
                d--;
                flag=false;
            }else{
                n-=d;
                d--;
                flag=true;
            }
        }
        return !flag;
        
    }
};