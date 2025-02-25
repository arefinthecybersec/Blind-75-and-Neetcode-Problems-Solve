//T.C = O(n) -> n length array 
//S.C = O(1) -> use constant space

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = INT_MAX;
        int mx = 0;

        for(int price: prices) {
            buyPrice = min(price, buyPrice);
            mx = max(mx, price - buyPrice);
        }
        return mx;
    }
};