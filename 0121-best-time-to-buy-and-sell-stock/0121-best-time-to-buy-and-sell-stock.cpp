class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int init = 0;
        // vector<int> v;
        // v.push_back(0);
        int mn = prices[0];
        int profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if(prices[i] > mn) {
                // v.push_back(prices[i] - mn);
                profit = max(profit, prices[i] - mn);
            }
            else {
                mn = prices[i]; 
            }
        }
        return profit;
    }
};