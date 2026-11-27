class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        int minPrice=1e9;
        long long sumPrice=0;
        vector<int>gain(n,1);

        for(int i=0;i<n;i++){
            minPrice=min(minPrice,items[i][1]);
            sumPrice+=items[i][1];

            for(int j=0;j<n;j++){
                if(i!=j && items[j][0]%items[i][0]==0){
                    gain[i]++;
                }
            }
        }

        int maxw=min((long long)budget,sumPrice);

        vector<int>dp(maxw+1,-1);
        dp[0]=0;

        for(int i=0;i<n;i++){
            int price=items[i][1];
            int value=gain[i];

            for(int w=maxw;w>=price;w--){
                if(dp[w-price]!=-1){
                    dp[w]=max(dp[w],dp[w-price]+value);
                }
            }
        }

        int maxTotal=0;
        for(int w=0;w<=maxw;w++){
            if(dp[w]!=-1){
                int currTotal=dp[w]+(budget-w)/minPrice;
                maxTotal=max(maxTotal,currTotal);
            }
        }
        return maxTotal;
    }
};