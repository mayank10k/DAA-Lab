class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n=landStartTime.size();
        int m=waterStartTime.size();

        int minL=1e9,minW=1e9,ans=1e9;

        for(int i=0;i<n;i++){
            minL=min(minL,landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<m;i++){
            minW=min(minW,waterStartTime[i]+waterDuration[i]);
            ans=min(ans,max(minL,waterStartTime[i])+waterDuration[i]);
        }

        for(int i=0;i<n;i++){
            ans=min(ans,max(minW,landStartTime[i])+landDuration[i]);
        }
        return ans;

        
    }
};