class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        map<int,int>m;
        for(int i:digits){
            m[i]++;
        }

        int ans=0;
        for(int first=1;first<=9;first++){
            for(int second=0;second<=9;second++){
                for(int third=0;third<=8;third+=2){
                    if(m[first]==0 || m[second]==0 || m[third]==0){
                        continue;
                    }
                    if(first==second && second==third && m[first]<3){
                        continue;
                    }
                    if(first==second && m[first]<2)continue;
                    if(first==third && m[first]<2)continue;
                    if(second==third && m[second]<2)continue;
                    ans++;
                }
            }
        }
        return ans;
    }
};