// Required T.C = O(n)
// Required Space.C = O(1)
// Approach -> xor check

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(auto num: nums) {
            ans ^= num;
        }
        return ans;
    }
};