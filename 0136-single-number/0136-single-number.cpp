class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ck_xor = 0;
        for(int i = 0; i < nums.size(); i++) {
            ck_xor ^= nums[i];
        }
        return ck_xor;
    }
};