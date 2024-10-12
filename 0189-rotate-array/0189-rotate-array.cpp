class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handling k greater than n
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            int newPos = (i + k) % n;
            v[newPos] = nums[i];
        }

        // Assign back to nums
        nums = v;
    }
};
