class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n<=2)return n;
        int ans=0;

        for(int i=0;i<n;i++){
            map<double,int>mp;
            int x1=points[i][0];
            int y1=points[i][1];

            for(int j=i+1;j<n;j++){
                int x2=points[j][0];
                int y2=points[j][1];

                double m=double(y2-y1)/double(x2-x1);
                if(y2-y1<0 && x2-x1==0)mp[abs(m)]++;    
                else mp[m]++;

                for(auto it:mp){
                    ans=max(ans,it.second+1);
                }
            }
        }
        return ans;
    }
};