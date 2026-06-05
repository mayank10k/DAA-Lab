class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a,b;
        int n=grid.size();
        unordered_set<int>s;
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(s.count(grid[i][j])){
                    a=grid[i][j];
                    continue;
                }
                s.insert(grid[i][j]);
                sum+=grid[i][j];
            }
        }
        // cout<<(n*n*(n*n+1)/2)<<" "<<sum<<endl;
        b=(n*n*(n*n+1)/2)-sum;
        return {a,b};
        
    }
};