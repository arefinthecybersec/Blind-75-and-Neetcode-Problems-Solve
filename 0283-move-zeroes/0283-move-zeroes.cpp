class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ck = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[ck] = nums[i];
                ck++;
            }
        }
        for (int i = ck; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

//Expected Time Complexity: o(n)
//Expected Memory Complexity: o(1)