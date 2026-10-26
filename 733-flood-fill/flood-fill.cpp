class Solution {
public:
    void bfs(vector<vector<int>>& image,vector<vector<int>>& temp,int sr,int sc,int color){
        int originalcolor=image[sr][sc];
        temp[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int n=image.size();
        int m=image[0].size();

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            int delrow[]={-1,0,+1,0};
            int delcol[]={0,+1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=r+delrow[i];
                int ncol=c+delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==originalcolor && temp[nrow][ncol]!=color){
                    temp[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>temp(image);
        bfs(image,temp,sr,sc,color);
        return temp;
    }
};