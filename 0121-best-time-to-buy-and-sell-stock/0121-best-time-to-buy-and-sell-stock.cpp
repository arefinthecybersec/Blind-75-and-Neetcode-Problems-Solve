class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy_price = prices[0];

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < buy_price) {
                buy_price = prices[i];
            }

            if(prices[i] > buy_price) {
                profit = max(profit, prices[i] - buy_price); 
            }
        }
        return profit;
    }
};