class Solution {
public:
    int largestInteger(int n, int s) {
        int num=0;
        while(n && s){
            if(s>=9){
                num=num*10+9;
                s-=9;
                n--;
            }else{
                num=num*10+s;
                s=0;
                n--;
            }

        }

        if(s){
            return -1;
        }
        
        while(n--){
            num=num*10;
        }
        return num;

        
    }
};