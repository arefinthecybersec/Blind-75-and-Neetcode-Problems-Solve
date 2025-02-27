// didn't sort & didn't coppy
// T.C = O(n)
// S.C = O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;

        while(j < nums.size()) {
            if(nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};