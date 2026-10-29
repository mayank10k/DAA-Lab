class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int minVal=INT_MAX;
        
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto &it:roads){
            int u=it[0];
            int v=it[1];
            int w=it[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});

        }

        vector<int>vis(n+1,0);
        queue<int>q;
        q.push(1);
        vis[1]=1;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto &it:adj[node]){
                int c=it.first;
                int wt=it.second;

                minVal=min(minVal,wt);

                if(!vis[c]){
                    vis[c]=1;
                    q.push(c);
                }
            }
        }

        return minVal;
    }
};