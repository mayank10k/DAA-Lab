class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double ans=0;
        int n=prices.size(),m=discounts.size();
        int i=n-1,j=m-1;
        while(i>=0 && j>=0){
            ans+=(double)prices[i]*(100-discounts[j])/100.00;
            i--,j--;
        }
        while(i>=0){
            ans+=prices[i--];
        }
        return ans;
    }
};