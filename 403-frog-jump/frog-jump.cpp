class Solution {
public:
    unordered_map<int,set<int>>dp;
    
    bool canCross(vector<int>& stones) {

        set<int>s(stones.begin(),stones.end());
        int n=stones.size();
        dp[0].insert(0);
        
        for(int i:stones){
            for(int k:dp[i]){
                for(int jump=k-1;jump<=k+1;jump++){
                    if(jump>0 && s.count(i+jump)){
                        dp[i+jump].insert(jump);
                    }
                }
            }
        }
        return !dp[stones.back()].empty();

        
    }
};