class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            if(a[0]==b[0])return a[1]>b[1];
            else return a[0]<b[0];
        });

        int prevEnd = -1;

        for (auto &it : intervals) {
            if (it[1] > prevEnd) {
                count++;
                prevEnd = it[1];
            }
        }
        return count;
    }
};