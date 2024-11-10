class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = nums.size() / 2;
        return nums[ans];
    }
};