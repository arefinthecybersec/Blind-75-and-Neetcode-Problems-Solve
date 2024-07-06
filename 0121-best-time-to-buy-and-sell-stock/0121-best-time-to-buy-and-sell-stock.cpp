#define pb push_back
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnprice = INT_MAX, mxprofit = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < mnprice) {
                mnprice = prices[i]; 
            }
            else if(prices[i] - mnprice > mxprofit) {
                mxprofit = prices[i] - mnprice;
            }
        }

        return mxprofit;
    }
};