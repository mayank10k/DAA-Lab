class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy=prices[0];
        int maxProfit=0;
        for(int i=1;i<n;i++){
            maxProfit=max(maxProfit,prices[i]-bestbuy);
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxProfit;
    }
};