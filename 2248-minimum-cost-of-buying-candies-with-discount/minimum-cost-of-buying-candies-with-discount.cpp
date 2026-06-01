class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0;
        int i=cost.size()-1,j=i-1;
        while(i>=0 && j>=0){
            ans+=cost[i];
            i-=3;
            ans+=cost[j];
            j-=3;
        }
        if(i>=0)ans+=cost[i];
        if(j>=0)ans+=cost[j];
        return ans;
    }
};