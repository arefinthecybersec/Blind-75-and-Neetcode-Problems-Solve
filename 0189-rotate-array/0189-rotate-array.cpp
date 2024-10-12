class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> v(n);

        for(int i = 0; i < nums.size(); i++) {
            int x = (i + k) % n;
            v[x] = nums[i];
        }
        nums = v;
        // return v;
    }
};