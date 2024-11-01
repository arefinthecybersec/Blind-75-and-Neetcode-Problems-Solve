class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int cnt = count(nums.begin(), nums.end(), 0);
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] == 0) {
                erase(nums, 0);
        //     }
        // }
        for (int i = 0; i < cnt; i++) {
            nums.push_back(0);
        }
    }
};