class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = INT_MAX;
        // int sellPrice = 0;
        int mx = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] <= buyPrice) {
                buyPrice = prices[i];
            }
            if(prices[i] > buyPrice) {
                mx = max(mx, prices[i] - buyPrice);
            }
        }
        return mx;
    }
};