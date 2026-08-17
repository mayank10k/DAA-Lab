class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>& vis){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+delrow[i];
            int nc=c+delcol[i];

            if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]=='1'){
                dfs(nr,nc,grid,vis);
                vis[nr][nc]=1;
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0)); 
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
        
    }
};