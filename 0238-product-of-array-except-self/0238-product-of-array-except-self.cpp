// Expected Time Complexity: o(n)
// Expected Memory Complexity: o(n)
// Solve Time: 1H 30M
// Hints: Yes (approach)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1), suffix(n, 1), result(n);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for (int i = n-2; i >= 0; i--) {
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for (int i = 0; i < n; i++) {
            result[i] = prefix[i] * suffix[i];
        }
        return result;
    }
};