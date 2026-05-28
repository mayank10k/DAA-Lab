class Solution {
public:
    void dfs(vector<int>&vis,int idx,vector<vector<int>>adj){
        vis[idx]=1;
        for(auto it:adj[idx]){
            if(!vis[it]){
                dfs(vis,it,adj);
            }
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(vis,i,adj);
            }
        }

        return count;

        
    }
};