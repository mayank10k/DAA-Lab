class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
        int n=grid.size();
        int m=grid[0].size();
        for(auto it:grid){
            for(auto i:it){
                v.push_back(i);
            }
        }
        k=k%(n*m);
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        
        int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=v[idx++];
            }
        }
        
        return grid;
    }
};